/* This file is part of the KDE project
   Copyright (C) 2002   Lucijan Busch <lucijan@gmx.at>

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING.  If not, write to
   the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.
 
   Original Author:  Till Busch <till@bux.at>
   Original Project: buX (www.bux.at)
*/

#include <qpainter.h>
#include <qregion.h>

#include <kdebug.h>

#include "kexitableheader.h"

KexiTableHeader::KexiTableHeader(QWidget *parent, const char *name)
 : QHeader(parent, name)
{
	m_currentRow = -1;
	m_insertRow = -1;

	m_cellHeight = 1;

	m_painter = 0;
}

void
KexiTableHeader::paintEvent(QPaintEvent *e)
{
    QPainter p(this);
    p.setPen(colorGroup().buttonText());
    int pos = orientation() == Horizontal
		     ? e->rect().left()
		     : e->rect().top();
    int id = mapToIndex( sectionAt( pos + offset() ) );
    if ( id < 0 ) {
	if ( pos > 0 )
	    return;
	else
	    id = 0;
    }

    QRegion reg = e->region();
    for ( int i = id; i < count(); i++ ) {
	QRect r = sRect(i);
	reg -= r;
	p.save();
	
	paintSection( &p, i, r );
	p.restore();
	if ( orientation() == Horizontal && r. right() >= e->rect().right() ||
	     orientation() == Vertical && r. bottom() >= e->rect().bottom() )
	    return;
    }
    if ( !reg.isEmpty() )
	erase( reg );
}


void
KexiTableHeader::paintSectionLabel(QPainter *p, int index, const QRect & fr)
{
//	if(!m_painter)
//		m_painter = p;

	if(index == m_currentRow && index != m_insertRow - 1)
	{
//		p->setPen(red);
//		p->drawRect(fr);
//		p->drawText(fr.x() + 4, fr.y() + 4, fr.width() - 5, fr.height(), AlignLeft, QString::number(index + 1));
//		p->drawText(fr, static_cast<const QString &>(QString::number(index)));
		int h = fr.height() - 3;
		int pos = fr.y() + h;
		for(int i=0; i < h/2 - 1; i++)
		{
//			kdDebug() << "paintSectionLabel(): h: " << h + 2 << " y: " << fr.y() << endl;
//			p->drawLine(4 + i, fr.y() + i, 4 + i, fr.y() - i);
			p->drawLine(i + 4, pos - h + 2 + i, i + 4, pos - 2 - i);
//			p->drawLine(i + 4, fr.y() - h + 2 + i, i + 4, h - 2 - i);
		}

		QHeader::paintSectionLabel(p, index, fr);
	}
	else
	{
		QHeader::paintSectionLabel(p, index, fr);
	}
}


void
KexiTableHeader::setCurrentRow(int row)
{
	if(row != -1)
	{
		int old = m_currentRow;
		m_currentRow = row;
		
		QRect restore = sRect(old);
		paintEvent(new QPaintEvent(restore, false));
		
		QRect update = sRect(row);
		QPaintEvent *ev = new QPaintEvent(update, false);
		paintEvent(ev);
		
		return;
	}
	m_currentRow = row;
	
}

void
KexiTableHeader::setCellHeight(int height)
{
	if(height < 1)
	{
		m_cellHeight = 1;
		return;
	}
	else
	{
		m_cellHeight = height;
	}
		
}

void
KexiTableHeader::setInsertRow(int row)
{
	setLabel(row - 1, "*");
	setLabel(m_insertRow - 1, "");
	m_insertRow = row;
}

KexiTableHeader::~KexiTableHeader()
{
}

#include "kexitableheader.moc"
