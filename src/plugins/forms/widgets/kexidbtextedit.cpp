/* This file is part of the KDE project
   Copyright (C) 2005 Cedric Pasteur <cedric.pasteur@free.fr>
   Copyright (C) 2004-2006 Jaroslaw Staniek <js@iidea.pl>

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public License
   along with this program; see the file COPYING.  If not, write to
   the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
*/

#include "kexidbtextedit.h"
#include "kexidblineedit.h"
#include <kexidb/queryschema.h>

#include <kapplication.h>

#include <qpainter.h>

KexiDBTextEdit::KexiDBTextEdit(QWidget *parent, const char *name)
 : KTextEdit(parent, name)
 , KexiDBTextWidgetInterface()
 , KexiFormDataItemInterface()
 , m_menuExtender(this, this)
 , m_slotTextChanged_enabled(true)
{
	connect(this, SIGNAL(textChanged()), this, SLOT(slotTextChanged()));
}

KexiDBTextEdit::~KexiDBTextEdit()
{
}

void KexiDBTextEdit::setInvalidState( const QString& displayText )
{
	setReadOnly(true);
//! @todo move this to KexiDataItemInterface::setInvalidStateInternal() ?
	if (focusPolicy() & TabFocus)
		setFocusPolicy(QWidget::ClickFocus);
	KTextEdit::setText(displayText);
}

void KexiDBTextEdit::setValueInternal(const QVariant& add, bool removeOld)
{
	if (m_columnInfo && m_columnInfo->field->type()==KexiDB::Field::Boolean) {
//! @todo temporary solution for booleans!
		KTextEdit::setText( add.toBool() ? "1" : "0" );
	}
	else {
		if (removeOld)
			KTextEdit::setText( add.toString() );
		else
			KTextEdit::setText( m_origValue.toString() + add.toString() );
	}
}

QVariant KexiDBTextEdit::value()
{
	return text();
}

void KexiDBTextEdit::slotTextChanged()
{
	if (!m_slotTextChanged_enabled)
		return;
	signalValueChanged();
}

bool KexiDBTextEdit::valueIsNull()
{
	return text().isNull();
}

bool KexiDBTextEdit::valueIsEmpty()
{
	return text().isEmpty();
}

bool KexiDBTextEdit::isReadOnly() const
{
	return KTextEdit::isReadOnly();
}

void KexiDBTextEdit::setReadOnly( bool readOnly )
{
	KTextEdit::setReadOnly( readOnly );
	QPalette p = palette();
	QColor c(readOnly ? lighterGrayBackgroundColor(kapp->palette()) : p.color(QPalette::Normal, QColorGroup::Base));
	setPaper( c );
	p.setColor(QColorGroup::Base, c);
	p.setColor(QColorGroup::Background, c);
	setPalette( p );
}

void KexiDBTextEdit::setText( const QString & text, const QString & context )
{
	KTextEdit::setText(text, context);
}

QWidget* KexiDBTextEdit::widget()
{
	return this;
}

bool KexiDBTextEdit::cursorAtStart()
{
	int para, index;
	getCursorPosition ( &para, &index );
	return para==0 && index==0;
}

bool KexiDBTextEdit::cursorAtEnd()
{
	int para, index;
	getCursorPosition ( &para, &index );
	return (paragraphs()-1)==para && (paragraphLength(paragraphs()-1)-1)==index;
}

void KexiDBTextEdit::clear()
{
	setText(QString::null, QString::null);
}

void KexiDBTextEdit::setColumnInfo(KexiDB::QueryColumnInfo* cinfo)
{
	KexiFormDataItemInterface::setColumnInfo(cinfo);
	if (!cinfo)
		return;
	KexiDBTextWidgetInterface::setColumnInfo(m_columnInfo, this);
}

void KexiDBTextEdit::paintEvent ( QPaintEvent *pe )
{
	KTextEdit::paintEvent( pe );
	QPainter p(this);
	KexiDBTextWidgetInterface::paint( this, &p, text().isEmpty(), alignment(), hasFocus() );
}

QPopupMenu * KexiDBTextEdit::createPopupMenu(const QPoint & pos)
{
	QPopupMenu *contextMenu = KTextEdit::createPopupMenu(pos);
	m_menuExtender.createTitle(contextMenu);
	return contextMenu;
}

void KexiDBTextEdit::undo()
{
	cancelEditor();
}

void KexiDBTextEdit::setDisplayDefaultValue(QWidget* widget, bool displayDefaultValue)
{
	KexiFormDataItemInterface::setDisplayDefaultValue(widget, displayDefaultValue);
	// initialize display parameters for default / entered value
	KexiDisplayUtils::DisplayParameters * const params 
		= displayDefaultValue ? m_displayParametersForDefaultValue : m_displayParametersForEnteredValue;
	QPalette pal(palette());
	pal.setColor(QPalette::Active, QColorGroup::Text, params->textColor);
	setPalette(pal);
	setFont(params->font);
//! @todo support rich text...
/*	m_slotTextChanged_enabled = false;
		//for rich text...
		const QString origText( text() );
		KTextEdit::setText(QString::null);
		setCurrentFont(params->font);
		setColor(params->textColor);
		KTextEdit::setText(origText);
	m_slotTextChanged_enabled = true;*/
}

#include "kexidbtextedit.moc"
