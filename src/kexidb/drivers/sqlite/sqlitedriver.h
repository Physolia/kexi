/* This file is part of the KDE project
   Copyright (C) 2003-2004 Jaroslaw Staniek <js@iidea.pl>

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
   the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.
*/

#ifndef KEXIDB_DRIVER_SQLITE_H
#define KEXIDB_DRIVER_SQLITE_H

#include <qstringlist.h>

#include <kexidb/driver.h>

namespace KexiDB
{

class Connection;
class DriverManager;
class SQLiteDriverPrivate;

//! SQLite database driver.
class KEXIDB_SQLITE_DRIVER_EXPORT SQLiteDriver : public Driver
{
	Q_OBJECT
	KEXIDB_DRIVER

	public:
		SQLiteDriver( QObject *parent, const char *name, const QStringList &args = QStringList() );
		virtual ~SQLiteDriver();

		/*! \return true if \a n is a system object name; 
			for this driver any object with name prefixed with "sqlite_" 
			is considered as system object.
		*/
		virtual bool isSystemObjectName( const QString& n ) const;

		/*! \return true if \a n is a system field name; 
			for this driver fields with name equal "_ROWID_" 
			is considered as system field.
		*/
		virtual bool isSystemFieldName( const QString& n ) const;

		/*! \return false for this driver. */
		virtual bool isSystemDatabaseName( const QString& ) const { return false; }

		virtual QString escapeString(const QString& str) const;
		virtual QCString escapeString(const QCString& str) const;

	protected:
		virtual Connection *drv_createConnection( ConnectionData &conn_data );

	SQLiteDriverPrivate *dp;
};

};

#endif

