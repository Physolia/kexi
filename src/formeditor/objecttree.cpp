/* This file is part of the KDE project
   Copyright (C) 2003 Lucijan Busch <lucijan@gmx.at>

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
#include <iostream>
#include <kdebug.h>
#include <qwidget.h>
#include <qstringlist.h>

#include "objecttree.h"


namespace KFormDesigner
{

/////////////////////////////////////////////////////////////////////////////////////////
/////////////////        ObjectTreeItem                                    /////////////
////////////////////////////////////////////////////////////////////////////////////////


ObjectTreeItem::ObjectTreeItem(const QString &classn, const QString &name, QWidget *widget)
{
	m_className = classn;
	m_name = name;
	m_widget = widget;
}

bool
ObjectTreeItem::rename(const QString &name)
{
	//m_widget->setName(name.latin1());
	m_name = name;

	return true;
}

ObjectTreeItem::~ObjectTreeItem()
{
	kdDebug() << "ObjectTreeItem deleted: " << this->name() << endl;
	m_parent->remChild(this);
}

void
ObjectTreeItem::addChild(ObjectTreeItem *c)
{
	m_children.append(c);
}

void
ObjectTreeItem::remChild(ObjectTreeItem *c)
{
	m_children.remove(c);
}

void
ObjectTreeItem::debug(int ident)
{
	for(ObjectTreeItem *it = m_children.first(); it; it = m_children.next())
	{
		for(int i=0; i < ident; i++)
			std::cerr << " ";

		qDebug("%s (%s): %s", it->className().latin1(), it->name().latin1(), it->parent()->name().latin1() );
		it->debug(ident + 4);
	}
}

void
ObjectTreeItem::addModProperty(const QString &property)
{
	if(m_props.grep(property).isEmpty())
	{
		m_props.append(property);
		kdDebug() << "added " << property << "   property is now: " << m_props.join("|") << endl;
	}
}


/////////////////////////////////////////////////////////////////////////////////////////
///                      ObjectTree                                             /////////
////////////////////////////////////////////////////////////////////////////////////////

ObjectTree::ObjectTree(const QString &classn, const QString &name, QWidget *widget)
 : ObjectTreeItem(classn, name, widget)
{
}

bool
ObjectTree::rename(const QString &oldname, const QString &newname)
{
	ObjectTreeItem *it = lookup(oldname);
	if(!it->rename(newname))  { return false;}
	m_treeDict.remove(oldname);
	m_treeDict.insert(newname, it);

	return true;
}

ObjectTreeItem*
ObjectTree::lookup(const QString &name)
{
	return m_treeDict[name];
}

void
ObjectTree::addChild(ObjectTreeItem *parent, ObjectTreeItem *c)
{
	m_treeDict.insert(c->name(), c);
	if(!parent)
	{
		kdDebug() << "*************************************************" << endl;
		kdDebug() << "* ObjectTree::addChild(): no parent!            *" << endl;
		kdDebug() << "*************************************************" << endl;
	}
	else
	{
		parent->addChild(c);
		c->setParent(parent);
	}
	kdDebug() << "ObjectTree::addChild(): adding " << c->name() << " to " << parent->name() << endl;
}

void
ObjectTree::addChild(ObjectTreeItem *c)
{
	m_treeDict.insert(c->name(), c);
	ObjectTreeItem::addChild(c);
	kdDebug() << "ObjectTree::addChild(): count is now: " << children()->count() << endl;
}

void
ObjectTree::removeChild(const QString &name)
{
	ObjectTreeItem *c = lookup(name);
	m_treeDict.remove(name);
	delete c;
}

QString
ObjectTree::genName(const QString &c)
{
	int appendix = m_names[c] + 1;
	QString name(c);
	name.append(QString::number(appendix));
	m_names[c] = appendix;
	return name;
}

void
ObjectTree::debug()
{
	kdDebug() << "ObjectTree::debug(): tree dumb" << endl;
	ObjectTreeItem::debug(0);
}

ObjectTree::~ObjectTree()
{
}

}
