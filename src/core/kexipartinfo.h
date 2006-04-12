/* This file is part of the KDE project
   Copyright (C) 2003 Lucijan Busch <lucijan@kde.org>
   Copyright (C) 2003,2005 Jaroslaw Staniek <js@iidea.pl>

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
   the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
*/

#ifndef KEXIPARTINFO_H
#define KEXIPARTINFO_H

#include "kexipartmanager.h"
//Added by qt3to4:
#include <Q3CString>

class KexiMainWindowImpl;
class KexiProject;
class KexiDialogBase;

namespace KexiPart
{

	class Manager;
	class Item;
	class Part;

/**
 * @short Information about a Kexi Part (plugin).
 */
class KEXICORE_EXPORT Info
{
	public:
		Info(KService::Ptr service);
		~Info();

		/**
		 * @return a i18n'ed group name e.g. "Tables"
		 */
		QString groupName() const;

		/**
		 * @return the internal mime type of this part
		 */
		Q3CString mimeType() const;

//		/**
//		 * @return the icon for groups
//		 */
//		inline QString groupIcon() const { return m_groupIcon; }

		/**
		 * @return the icon for a item
		 */
		QString itemIcon() const;

		/**
		 * @return the icon for a item
		 */
		QString createItemIcon() const;

		/**
		 * @return the object name associated with this part (e.g. "table")
		 */
		QString objectName() const;

		/**
		 * @return the project-part-id
		 */
		int projectPartID() const;

		/**
		 * @return the KService::Ptr associated with this part
		 */
		KService::Ptr ptr() const;

		/**
		 * @return true if loading was tried but failed
		 */
		bool isBroken() const;

		/**
		 * \return true if the part should be visible in the Project Navigator (as a folder).
		 */
		bool isVisibleInNavigator() const;

		/**
		 * \return true if the part supports data exporting.
		 */
		bool isDataExportSupported() const;

		/**
		 * \return true if the part supports data printing.
		 */
		bool isPrintingSupported() const;

		/**
		 * \return true if the part supports execution. This is as
		 * example the case for the Macro and the Scripting plugins.
		 */
		bool isExecuteSupported() const;

	protected:
		/**
		 * Used in StaticInfo
		 */
		Info();

		friend class Manager;
		friend class ::KexiProject;
		friend class ::KexiMainWindowImpl;
		friend class ::KexiDialogBase;

		/**
		 * Sets the project-part-id.
		 */
		void setProjectPartID(int id);

		/**
		 * Sets the broken flag and error message. 
		 * Most likely to be called by @ref KexiPart::Manager
		 */
		void setBroken(bool broken, const QString& errorMessage);

		/**
		 * \return i18n'd error message set by setBroken().
		 */
		QString errorMessage() const;

		void setIdStoredInPartDatabase(bool set);

		/**
		 * \return true if ID of the part is stored in project's database
		 * false by default. This flag is updated in Manager::checkProject()
		 * and set to true on first successful execution of KexiDialogBase::storeNewData()
		 * @internal
		 */
		bool isIdStoredInPartDatabase() const;

		class Private;
		Private *d;
};

/*! \return "create" KAction's name for part defined by \a info. 
 The result is like "tablepart_create". Used in Part::createGUIClients() 
 and KexiBrowser. */
KEXICORE_EXPORT Q3CString nameForCreateAction(const Info& info);

}

#endif
