/* This file is part of the KDE project
   Copyright (C) 2003 Jaroslaw Staniek <js@iidea.pl>

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

#include "cursor.h"
#include <kdebug.h>

#include <assert.h>
#include <stdlib.h>

using namespace KexiDB;


Cursor::Cursor(Connection* conn, const QString& statement, uint options)
	: m_conn(conn)
	, m_query(0)
	, m_rawStatement(statement)
	, m_options(options)
{
	init();
#ifndef Q_WS_WIN
#warning TODO
#endif
//TODO(js) if the statement is not empty update m_fieldCount
// (change this when KexiDB::Query will be used here)
}

Cursor::Cursor(Connection* conn, QuerySchema& query, uint options )
	: m_conn(conn)
	, m_query(&query)
	, m_options(options)
{
	init();
}

void Cursor::init()
{
	assert(m_conn);
	m_conn->m_cursors.insert(this,this);
	m_opened = false;
//	, m_atFirst(false)
//	, m_atLast(false)
//	, m_beforeFirst(false)
	m_atLast = false;
	m_afterLast = false;
	m_readAhead = false;
	m_at = 0;
//js:todo:	if (m_query)
//		m_fieldCount = m_query->fieldsCount();
	m_fieldCount = 0; //do not know
	//<members related to buffering>
	m_cols_pointers_mem_size = 0;
	m_records_in_buf = 0;
	m_buffering_completed = false;
	m_at_buffer = false;
}

Cursor::~Cursor()
{
	if (!m_query)
		KexiDBDbg << "Cursor::~Cursor() '" << m_rawStatement.latin1() << "'" << endl;
	else
		KexiDBDbg << "Cursor::~Cursor() query '" << m_query->name() << "'" << endl;

	//take me if delete was 
	if (!m_conn->m_destructor_started)
		m_conn->m_cursors.take(this);
	else {
		KexiDBDbg << "Cursor::~Cursor() can be destroyed with Conenction::deleteCursor(), not with delete operator !"<< endl;
		exit(1);
	}
}

bool Cursor::open()
{
	if (m_opened) {
		if (!close())
			return false;
	}
	QString statement;
	if (!m_rawStatement.isEmpty())
		statement = m_rawStatement;
	else {
		if (!m_query) {
			KexiDBDbg << "Cursor::open(): no query statement (or schema) defined!" << endl;
			return false;
		}
		statement = m_conn->queryStatement( *m_query );
	}
#ifndef Q_WS_WIN
#warning TODO
#endif
	m_opened = drv_open(statement);
//	m_beforeFirst = true;
	m_afterLast = false; //we are not @ the end
	m_at = 0; //we are before 1st rec
	if (!m_opened)
		return false;
	if (!m_readAhead) // jowenn: to ensure before first state, without cluttering implementation code
		m_readAhead = drv_getNextRecord(); //true if any record in this query
	m_at = 0; //we are still before 1st rec
//	m_validRecord = false; //no record retrieved
	return !error();
}

bool Cursor::close()
{
	if (!m_opened)
		return true;
	bool ret = drv_close();

	clearBuffer();

	m_opened = false;
//	m_beforeFirst = false;
	m_afterLast = false;
	m_readAhead = false;
	m_fieldCount = 0;
	m_at = -1;

	KexiDBDbg<<"Cursor::close() == "<<ret<<endl;
	return ret;
}

bool Cursor::reopen()
{
	if (!m_opened)
		return open();
	return close() && open();
}

bool Cursor::moveFirst()
{
	if (!m_opened)
		return false;
//	if (!m_beforeFirst) { //cursor isn't @ first record now: reopen
	if (!m_readAhead) {
		if (m_options & Buffered) {
			if (m_records_in_buf==0 && m_buffering_completed)
				return false; //buffering completed and there is no records!
			if (m_records_in_buf>0) {
				//set state as we would before first:
				m_at_buffer = false;
				m_at = -1;
				//..and move to next, ie. 1st record
				m_afterLast = m_afterLast = !drv_getNextRecord();
				return !m_beforeFirst;
			}
		}
		if (!reopen())
			return false;
	}
//	if (!m_atFirst) { //cursor isn't @ first record now: reopen
//		reopen();
//	}
//	if (m_validRecord) {
//		return true; //there is already valid record retrieved
//	}
	//get first record
//	if (drv_moveFirst() && drv_getRecord()) {
//		m_beforeFirst = false;
		m_afterLast = false;
		m_readAhead = false; //1st record had been read
//	}
	return m_validRecord;
}

bool Cursor::moveLast()
{
	if (!m_opened)
		return false;
	if (m_afterLast || m_atLast) {
		return m_validRecord; //we already have valid last record retrieved
	}
	if (!drv_getNextRecord()) { //at least next record must be retrieved
//		m_beforeFirst = false;
		m_afterLast = true;
		m_validRecord = false;
		m_atLast = false;
		return false; //no records
	}
	while (drv_getNextRecord()) //move after last rec.
		;
//	m_beforeFirst = false;
	m_afterLast = false;
	//cursor shows last record data
	m_atLast = true; 
//	m_validRecord = true;

/*
	//we are before or @ last record:
//	if (m_atLast && m_validRecord) //we're already @ last rec.
//		return true;
	if (m_validRecord) {
		if (drv_getRecord())
	}
	if (!m_validRecord) {
		if (drv_getRecord() && m_validRecord)
			return true;
		reopen();
	}
	*/
	return true;
}

bool Cursor::moveNext()
{
	if (!m_opened || m_afterLast)
		return false;
	if (drv_getNextRecord()) {
//		m_validRecord = true;
		return true;
	}
	return false;
}

bool Cursor::movePrev()
{
	if (!m_opened || m_beforeFirst)
		return false;
	if (drv_getPrevRecord()) {
		m_validRecord=true;
		return true;
	}
	return false;
}

/*
bool Cursor::open( const QString& statement )
{
	if (m_data) {
		if (!close())
			return false;
	}
	m_data = m_conn->drv_createCursor( statement );
	return m_data;
}

bool Cursor::close()
{
	if (!m_data)
		return true;
	bool ret = m_conn->drv_deleteCursor( m_data );
	delete m_data;
	m_data = 0;
	return ret;
}

bool moveFirst()
{
	m_conn
}

bool moveLast()
{
}

bool moveNext()
{
}
*/

bool Cursor::eof() const
{
	return m_afterLast;
}

bool Cursor::bof() const
{
	return m_at==0;
//	return m_beforeFirst;
}

Q_LLONG Cursor::at() const
{
	if (m_readAhead)
		return 0;
	return m_at - 1;
}

bool Cursor::isBuffered() const
{
	return m_options & Buffered;
}

void Cursor::setBuffered(bool buffered)
{
	if (!m_opened)
		return;
	if (isBuffered()==buffered)
		return;
	m_options ^= Buffered;
}

void Cursor::clearBuffer()
{
	if ( !isBuffered() )
		return;
	drv_clearBuffer();
}

