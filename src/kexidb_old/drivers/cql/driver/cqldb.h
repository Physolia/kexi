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
*/

#ifndef CQLDB_H
#define CQLDB_H

#include <CqlSqlInclude.h>

#include <kexidb.h>
#include <kexidbresult.h>

class CqlDB : public KexiDB
{
	Q_OBJECT

	public:
		CqlDB(QObject *parent=0, const char *name="cql", const QStringList &args=QStringList());
		~CqlDB();

		QString		driverName();
		KexiDB::DBType	dbType();

		bool		load(QString file, bool persistant=false);

		QStringList	tables();

		//we should drop that!!!
		QString		error();

		bool		query(QString statement);
		KexiDBRecord*	queryRecord(QString query, bool buffer=false);

		bool alterField(const QString& table, const QString& field,
			const QString& newFieldName,
			KexiDBField::ColumnType dtype, int length, int precision,
			KexiDBField::ColumnConstraints constraints,
			bool binary, bool unsignedType, const QString& defaultVal);

		virtual bool createTable(const KexiDBTable& tableDef);

		// internal cql->kexi convertations
		static QString	cqlString(const CqlString &str);
		static QString	cqlFixedString(const CqlFixedLengthString &str);
		static QString	errorText(CqlException &ex);
		static KexiDBField::ColumnType getInternalDataType(int t);

		QString createDefinition(const KexiDBField& field);
		QString getNativeDataType(const KexiDBField::ColumnType& t);
                virtual KexiDBError *latestError();
		virtual bool commitWork();
	private:
		SqlHandle	*m_db;
                KexiDBError     m_error;
};

#endif

