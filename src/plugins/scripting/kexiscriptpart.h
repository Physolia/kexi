/* This file is part of the KDE project
   Copyright (C) 2004 Lucijan Busch <lucijan@kde.org>
   Copyright (C) 2004 Cedric Pasteur <cedric.pasteur@free.fr>

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

#ifndef KEXISCRIPTPART_H
#define KEXISCRIPTPART_H

#include <qdom.h>
#include <qcstring.h>

#include <kexi.h>
#include <kexipart.h>
#include <kexidialogbase.h>

/**
 * Kexi Scripting Plugin.
 */
class KexiScriptPart : public KexiPart::Part
{
    Q_OBJECT

    public:

        /**
         * Constructor.
         */
        KexiScriptPart(QObject *parent, const char *name, const QStringList &);

        /**
         * Destructor.
         */
        virtual ~KexiScriptPart();

    protected:
        virtual KexiViewBase* createView(QWidget *parent,
                                         KexiDialogBase* dialog,
                                         KexiPart::Item &item,
                                         int viewMode = Kexi::DataViewMode);

        virtual void initPartActions();
        virtual void initInstanceActions();
};

#endif

