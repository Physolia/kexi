/* This file is part of the KDE project
   Copyright (C) 2002, 2003 Lucijan Busch <lucijan@gmx.at>
   Copyright (C) 2002, 2003 Joseph Wenninger <jowenn@kde.org>
   Copyright (C) 2002 Daniel Molkentin <molkentin@kde.org>

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

#ifndef KEXIPROJECTPROPERTIES_H
#define KEXIPROJECTPROPERTIES_H

#include <kdialogbase.h>

#include "kexiprojectconnectiondata.h"

class QComboBox;
class KexiDBConnection;

class KEXICORE_EXPORT KexiProjectProperties : public KDialogBase
{
	Q_OBJECT

	public:
		KexiProjectProperties(QWidget *parent, KexiProjectConnectionData *dbconn);
		~KexiProjectProperties();
#ifndef Q_WS_WIN
#warning FIXME
#endif
//		KexiDB::Encoding encoding();

	protected:
#ifndef Q_WS_WIN
#warning FIXME
#endif
	//		void		setupDBProperties(KexiProjectConnectionData *db);

	private:
		QComboBox	*m_encoding;
};

#endif
