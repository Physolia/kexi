/* This file is part of the KDE project
   Copyright (C) 2004 Cedric Pasteur <cedric.pasteur@free.fr>
   Copyright (C) 2005 Jaroslaw Staniek <js@iidea.pl>

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public License
   along with this library; see the file COPYING.LIB.  If not, write to
   the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.
*/
#include <qlayout.h>
#include <qcheckbox.h>

#include <kiconloader.h>
#include <kdebug.h>
#include <klocale.h>

#include "form.h"
#include "objecttreeview.h"

#include "tabstopdialog.h"

using namespace KFormDesigner;

//////////////////////////////////////////////////////////////////////////////////
//////////  The Tab Stop Dialog to edit tab order  ///////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

TabStopDialog::TabStopDialog(QWidget *parent)
: KDialogBase(parent, "tabstop_dialog", true, i18n("Edit Tab Order"), Ok|Cancel, Ok, false)
{
	QFrame *frame = makeMainWidget();
	QGridLayout *l = new QGridLayout(frame, 2, 2, 0, 6);
	m_treeview = new ObjectTreeView(frame, "tabstops_treeview", true);
	m_treeview->setItemsMovable(true);
	m_treeview->setDragEnabled(true);
	m_treeview->setDropVisualizer(true);
	m_treeview->setAcceptDrops(true);
	m_treeview->setFocus();
	l->addWidget(m_treeview, 0, 0);

	m_treeview->m_form = 0;
	connect(m_treeview, SIGNAL(currentChanged(QListViewItem*)), this, SLOT(updateButtons(QListViewItem*)));
	connect(m_treeview, SIGNAL(moved(QListViewItem*, QListViewItem*, QListViewItem*)), this, SLOT(updateButtons(QListViewItem*)));

	QVBoxLayout *vbox = new QVBoxLayout();
	l->addLayout(vbox, 0, 1);
	QToolButton *up = new QToolButton(frame);
	up->setIconSet(BarIconSet("1uparrow"));
	up->setTextLabel(i18n("Move Widget &Up"), true);
	m_buttons.insert(BUp, up);
	vbox->addWidget(up);
	connect(up, SIGNAL(clicked()), this, SLOT(MoveItemUp()));

	QToolButton *down = new QToolButton(frame);
	down->setIconSet(BarIconSet("1downarrow"));
	down->setTextLabel(i18n("Move Widget &Down"), true);
	vbox->addWidget(down);
	m_buttons.insert(BDown, down);
	connect(down, SIGNAL(clicked()), this, SLOT(MoveItemDown()));
	vbox->addStretch();

	m_check = new QCheckBox(i18n("Handle tab stops automatically"), frame, "tabstops_check");
	connect(m_check, SIGNAL(toggled(bool)), this, SLOT(slotRadioClicked(bool)));
	l->addMultiCellWidget(m_check, 1, 1, 0, 1);

	setInitialSize(QSize(400, 250), true);
}

TabStopDialog::~TabStopDialog()
{
}

int TabStopDialog::exec(Form *form)
{
	m_treeview->clear();
	m_treeview->m_form = form;

	if(form->autoTabStops())
		form->autoAssignTabStops();
	ObjectTreeListIterator it( form->tabStopsIterator() );
	it.toLast();
	for(;it.current(); --it)
		new ObjectTreeViewItem(m_treeview, it.current());

	m_check->setChecked(form->autoTabStops());

	if (m_treeview->firstChild()) {
		m_treeview->setCurrentItem(m_treeview->firstChild());
		m_treeview->setSelected(m_treeview->firstChild(), true);
	}

	if (QDialog::Rejected == KDialogBase::exec())
		return QDialog::Rejected;

	//accepted
	form->setAutoTabStops(m_check->isChecked());
	if(form->autoTabStops())
	{
		form->autoAssignTabStops();
		return QDialog::Accepted;
	}

	//add items to the order list
	form->tabStops()->clear();
	ObjectTreeViewItem *item = (ObjectTreeViewItem*)m_treeview->firstChild();
	while(item)
	{
		ObjectTreeItem *tree = item->objectTree();
		if(tree)
			form->tabStops()->append(tree);
		item = (ObjectTreeViewItem*)item->nextSibling();
	}
	return QDialog::Accepted;
}

void
TabStopDialog::MoveItemUp()
{
	QListViewItem *before = m_treeview->selectedItem()->itemAbove();
	before->moveItem(m_treeview->selectedItem());
	updateButtons(m_treeview->selectedItem());
}

void
TabStopDialog::MoveItemDown()
{
	QListViewItem *item = m_treeview->selectedItem();
	item->moveItem( item->nextSibling());
	updateButtons(item);
}

void
TabStopDialog::updateButtons(QListViewItem *item)
{
	if(!item)
	{
		m_buttons[BUp]->setEnabled(false);
		m_buttons[BDown]->setEnabled(false);
		return;
	}

	m_buttons[BUp]->setEnabled( (item->itemAbove() /*&& (item->itemAbove()->parent() == item->parent()))*/ ));
	m_buttons[BDown]->setEnabled(item->nextSibling());
}

void
TabStopDialog::slotRadioClicked(bool isOn)
{
	m_treeview->setEnabled(!isOn);
	m_buttons[BUp]->setEnabled(!isOn);
	m_buttons[BDown]->setEnabled(!isOn);
}

bool
TabStopDialog::autoTabStops() const
{
	return m_check->isChecked();
}

#include "tabstopdialog.moc"

