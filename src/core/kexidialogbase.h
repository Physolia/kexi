/* This file is part of the KDE project
   Copyright (C) 2003 Lucijan Busch <lucijan@kde.org>

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

#ifndef KEXIDIALOGBASE_H
#define KEXIDIALOGBASE_H

#include "kexipartguiclient.h"
#include "kexiactionproxy.h"

#include <qguardedptr.h>

#include <kmdichildview.h>
#include <kxmlguiclient.h>

class KexiMainWindow;
class KActionCollection;
class KexiContextHelpInfo;
namespace KexiPart {
	class Part;
}

class KEXICORE_EXPORT KexiDialogBase : public KMdiChildView, public KexiActionProxy
{
	Q_OBJECT

	public:
		KexiDialogBase(KexiMainWindow *parent, const QString &caption);
		~KexiDialogBase();
		bool isRegistered();

		void setContextHelp(const QString& caption, const QString& text, const QString& iconName);

		/*! \return main (top level) widget inside this dialog.
		 This widget is used for e.g. determining minimum size hint and size hint. */
		virtual QWidget* mainWidget() = 0;

		/*! reimplemented: minimum size hint is inherited from mainWidget() */
//		virtual QSize minimumSizeHint() const;
		/*! reimplemented: size hint is inherited from mainWidget() */
//		virtual QSize sizeHint() const;

		void	setDocID(int id);
		int	docID() { return m_docID; }
		KInstance *instance();

		//! Kexi part used to create this window
		inline KexiPart::Part* part() const { return m_part; }

		//! Kexi part's gui client
		inline KexiPart::GUIClient* guiClient() const { return m_part ? m_part->instanceGuiClient() : 0; }

	public slots:
//		virtual void detach();

	signals:
		void updateContextHelp();
	protected:
		void registerDialog();
		virtual void attachToGUIClient(); //JOWENN: make that protected perhaps
		virtual void detachFromGUIClient(); //JOWENN: make that protected perhaps
	private:
		KexiMainWindow *m_parentWindow;
		bool m_isRegistered;
		KexiContextHelpInfo *m_contextHelpInfo;
		int m_docID;
		KInstance *m_instance;
		QGuardedPtr<KexiPart::Part> m_part;

		friend class KexiMainWindow;
		friend class KexiPart::Part;
};

#endif

