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

#ifndef KFORMDESIGNERWIDGETFACTORY_H
#define KFORMDESIGNERWIDGETFACTORY_H


#include <qobject.h>
#include <qptrlist.h>
#include <qguardedptr.h>
#include <qpixmap.h>
#include <qpopupmenu.h>
#include <ktextedit.h>

#include <kdialogbase.h>

// class QPixmap;

class QWidget;
class KLineEdit;
class QDomElement;
class QDomDocument;
class QVariant;
class KToolBar;
class KTextEdit;
class KFontCombo;
class KColorCombo;

namespace KFormDesigner {


class WidgetFactory;
class Container;
class ResizeHandleSet;
class ObjectTreeItem;

class KFORMEDITOR_EXPORT RichTextDialog : KDialogBase
{
	Q_OBJECT

	public:
		RichTextDialog(QWidget *parent, const QString &text);
		~RichTextDialog(){;}

		QString  text();

	public slots:
		void  changeFont(const QString &);
		void  changeColor(const QColor&);
		void  buttonToggled(int);
		void  cursorPositionChanged(int, int);
		void  slotVerticalAlignmentChanged(KTextEdit::VerticalAlignment align);

	private:
		KToolBar  *m_toolbar;
		KTextEdit  *m_edit;
		KFontCombo  *m_fcombo;
		KColorCombo  *m_colCombo;
};
/*
class KFORMEDITOR_EXPORT EditListViewDialog : KDialogBase
{
	Q_OBJECT

	public:
		EditListViewDialog(QListView *listview, QWidget *parent);
		~EditListViewDialog(){;}

};
*/
/**
 * this class holds properties of widgets
 */
class KFORMEDITOR_EXPORT Widget
{
	public:
		Widget(WidgetFactory *f=0) {m_factory = f; }
		virtual ~Widget() { }

		/**
		 * returns a pixmap associated with the widget
		 */
		virtual QString	pixmap() { return m_pixmap; }

		/**
		 * returns the class name of a widget e.g. 'QLineEdit'
		 */
		virtual QString	className() { return m_class; }

		/**
		 * returns the real name e.g. 'Line Edit'
		 */
		virtual QString	name() { return m_name; }

		virtual QString description() { return m_desc; }

		virtual QString  includeFile() { return m_include; }

		virtual QString  alternateClassName() { return m_alternate; }

		virtual WidgetFactory *factory() { return m_factory; }

		void		setPixmap(const QString &p) { m_pixmap = p; }
		void		setClassName(const QString &s) { m_class = s; }
		void		setName(const QString &n) { m_name = n; }
		void		setDescription(const QString &desc) { m_desc = desc;}
		void		setInclude(const QString &include) { m_include = include;}
		void		setAlternateClassName(const QString &alternate) { m_alternate = alternate; }

	private:
		QString		m_pixmap;
		QString		m_class;
		QString		m_name;
		QString		m_desc;
		QString		m_include;
		QString		m_alternate;
		WidgetFactory	*m_factory;

};

typedef QPtrList<Widget> WidgetList;

void KFORMEDITOR_EXPORT installRecursiveEventFilter(QObject *object, QObject *container);
/**
 * this is a poor virtual class, used for making widgets
 * avaible to the WidgetLibrary.
 * you can either make a KPart module out of it or call @ref WidgetLibrary::addFactory()
 */
class KFORMEDITOR_EXPORT WidgetFactory : public QObject
{
	Q_OBJECT
	public:
		WidgetFactory(QObject *parent=0, const char *name=0);
		virtual ~WidgetFactory();

		/**
		 * returns the name of the factory
		 */
		virtual QString		name()=0;

		/**
		 * retruns all classes, which are provided by this factory
		 */
		virtual	WidgetList	classes()=0;

		/**
		 * creates a widget (and if needed a container)
		 * @returns the created widgets
		 * @param classname the classname of the widget, which should get created
		 * @param parent the parent for the created widgets
		 * @param name the name of the created widget
		 * @param toplevel the toplevelcontainer (if a container should get created)
		 */
		virtual QWidget*	create(const QString &classname, QWidget *parent, const char *name,
					 KFormDesigner::Container *container)=0;

		virtual bool		createMenuActions(const QString &classname, QWidget *w, QPopupMenu *menu, KFormDesigner::Container *container)=0;

		/*! Creates (if necessary) an editor to edit the contents of the widget directly in the Form
		   (eg creates a line edit to change the text of a label). \a classname is the class the widget belongs to, \a w is the widget to edit
		   and \a container is the parent container of this widget (to access Form etc.).
		 */
		virtual void		startEditing(const QString &classname, QWidget *w, Container *container)=0;
		virtual void		previewWidget(const QString &classname, QWidget *widget, Container *container)=0;

		virtual void	saveSpecialProperty(const QString &classname, const QString &name, const QVariant &value, QWidget *w,
		         QDomElement &parentNode,  QDomDocument &parent)=0;
		virtual void            readSpecialProperty(const QString &classname, QDomElement &node, QWidget *w, ObjectTreeItem *item)=0;
		virtual bool		showProperty(const QString &classname, QWidget *w, const QString &property, bool multiple) { return !multiple; }
		virtual QStringList     autoSaveProperties(const QString &classname)=0;

	protected:
		/*! This function creates a KLineEdit to input some text and edit a widget's contents. This can be used in startEditing().
		   \a text is the text to display by default in the line edit, \a w is the edited widget, \a geometry is the geometry the new line
		   edit should have, and \a align is Qt::AlignmentFlags of the new line edit.
		 */
		virtual KLineEdit*	createEditor(const QString &text, QWidget *w, QRect geometry, int align,  bool useFrame=false,
		     BackgroundMode background = Qt::NoBackground);
		virtual void     disableFilter(QWidget *w, Container *container);
		virtual bool     editList(QWidget *w, QStringList &list);
		/*! This function destroys the editor. */
		virtual bool  eventFilter(QObject *obj, QEvent *ev);
		virtual void  changeProperty(const char *name, const QVariant &value, Container *container);
		virtual void  addPropertyDescription(Container *container, const char *prop, const QString &desc);
		virtual void  addValueDescription(Container *container, const char *value, const QString &desc);
		bool  editRichText(QWidget *w, QString &text);

	protected slots:
		/*! You have to implement this function for editing inside the Form to work. This slot is called when the line edit text changes,
		  and you have to make it really change the good property of the widget (text, or title, etc.).
		 */
		virtual void  changeText(const QString &newText){;}
		virtual void  resetEditor();
		virtual void  editorDeleted();

	protected:
		QGuardedPtr<QWidget> m_widget;
		QGuardedPtr<KLineEdit>  m_editor;
		QGuardedPtr<ResizeHandleSet>  m_handles;
		QGuardedPtr<Container>      m_container;
};

}
#endif
