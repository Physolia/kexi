/* This file is part of the KDE project
   Copyright (C) 2004 Adam Pigg <adam@piggz.co.uk>
   Copyright (C) 2004 Jaroslaw Staniek <js@iidea.pl>

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

#ifndef KEXIMIGRATIONIMPORTWIZARD_H
#define KEXIMIGRATIONIMPORTWIZARD_H

#include <kwizard.h>

class QHBox;
class QVBox;
class KComboBox;
class KListView;
class KLineEdit;
class QLabel;
class KexiConnSelectorWidget;
class KexiProjectSelectorWidget;
class KexiDBTitlePage;

namespace KexiMigration {

/**
@author Adam Pigg
*/
class KEXIMIGR_EXPORT importWizard : public KWizard
{
Q_OBJECT
private:
    QVBox *introPage, *srcTypePage, *srcConnPage, *srcdbPage, *dstTypePage, 
		*dstPage, *srcdbControls;
	KexiDBTitlePage* dstTitlePage;
    QHBox *finishPage;
    KComboBox *srcTypeCombo, *dstTypeCombo;
    KexiConnSelectorWidget *srcConn, *dstConn;
    KLineEdit *dstNewDBName;
    KexiProjectSelectorWidget *srcdbname;
    QLabel *lblfinishTxt;
    
    void setupintro();
    void setupsrcType();
    void setupsrcconn();
    void setupsrcdb();
    void setupdstType();
    void setupdstTitle();
    void setupdst();
    void setupfinish();
    bool checkUserInput();
private slots:
    void nextClicked(const QString &);
    virtual void accept();
    void helpClicked();
    
public:
    importWizard(QWidget *parent = 0, const char *name = 0);

    virtual ~importWizard();

};

}

#endif
