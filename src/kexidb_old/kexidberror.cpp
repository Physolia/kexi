/* This file is part of the KDE project
   Copyright (C) 2002   Lucijan Busch <lucijan@gmx.at>

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

#include <qwidget.h>

#include <klocale.h>
#include <kmessagebox.h>

#include "kexidberror.h"

KexiDBError::KexiDBError() {
	m_errno=0;
	m_text=QString();
}

KexiDBError::KexiDBError(int kexiErrno, QString text)
{
	m_errno = kexiErrno;
	m_text = text;
}

void KexiDBError::setup(int kexiErrno, QString text) {
	m_errno=kexiErrno;
	m_text=text;
}

KexiDBError::KexiDBError(const KexiDBError &old) {
	m_errno=old.m_errno;
	m_text=old.m_text;
}

void
KexiDBError::toUser(QWidget *parent)
{
	KMessageBox::error(parent, m_text, i18n("Database Error"));
}

int
KexiDBError::kexiErrnoFunction()
{
	return m_errno;
}

QString
KexiDBError::message()
{
	return m_text;
}

void KexiDBError::clear() 
{
	setup(0);
}

KexiDBError::~KexiDBError()
{
}

