/* This file is part of the KDE project
   Copyright (C) 2004 Jaroslaw Staniek <js@iidea.pl>

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

#include "kexicomboboxpopup.h"

#include "kexitableview.h"
#include "kexitableitem.h"
#include "kexitableedit.h"

#include <kdebug.h>

#include <qlayout.h>
#include <qevent.h>

class KexiComboBoxPopupPrivate
{
	public:
		KexiComboBoxPopupPrivate() 
		 : int_f(0)
		{
			max_rows = KexiComboBoxPopup::defaultMaxRows;
		}
		~KexiComboBoxPopupPrivate() {
			delete int_f;
		}
		
		KexiTableView *tv;
		KexiDB::Field *int_f; //TODO: remove this -temporary
		int max_rows;
};

//========================================

const int KexiComboBoxPopup::defaultMaxRows = 8;


KexiComboBoxPopup::KexiComboBoxPopup(QWidget* parent, KexiDB::Field &f)
 : QFrame( parent, "KexiComboBoxPopup", WType_Popup )
{
	init();
	//setup tv data
	setData(f);
}

KexiComboBoxPopup::KexiComboBoxPopup(QWidget* parent, KexiTableViewColumn &column)
 : QFrame( parent, "KexiComboBoxPopup", WType_Popup )
{
	init();
	//setup tv data
	setData(column);
}

KexiComboBoxPopup::~KexiComboBoxPopup()
{
	delete d;
}

void KexiComboBoxPopup::init()
{
	d = new KexiComboBoxPopupPrivate();
	setPaletteBackgroundColor(palette().color(QPalette::Active,QColorGroup::Base));
	setLineWidth( 1 );
	setFrameStyle( Box | Plain );
	
//	QVBoxLayout *lyr = new QVBoxLayout(this, 1);
	d->tv = new KexiTableView(0, this, "KexiComboBoxPopup_tv");
	d->tv->setReadOnly( true );
	d->tv->setLineWidth( 0 );
	d->tv->setNavigatorEnabled( false );
	d->tv->setFullRowSelectionEnabled( true );
	d->tv->setBackgroundAltering( false ); //TODO add option??
	d->tv->setInsertingEnabled( false );
	d->tv->setSortingEnabled( false );
	d->tv->setVerticalHeaderVisible( false );
	d->tv->setHorizontalHeaderVisible( false );
	d->tv->setColumnStretchEnabled( true, -1 );
	d->tv->setContextMenuEnabled( false );
	d->tv->setScrollbarToolTipsEnabled( false );
	d->tv->installEventFilter(this);
	
	connect(d->tv, SIGNAL(itemReturnPressed(KexiTableItem*,int,int)),
		this, SLOT(slotTVItemAccepted(KexiTableItem*,int,int)));

	connect(d->tv, SIGNAL(itemMouseReleased(KexiTableItem*,int,int)),
		this, SLOT(slotTVItemAccepted(KexiTableItem*,int,int)));

	connect(d->tv, SIGNAL(itemDblClicked(KexiTableItem*,int,int)),
		this, SLOT(slotTVItemAccepted(KexiTableItem*,int,int)));

//	lyr->addWidget(d->tv);
}

void KexiComboBoxPopup::setData(KexiDB::Field &f)
{
//j: TODO: THIS IS PRIMITIVE: we'd need to employ KexiDB::Reference here!
	d->int_f = new KexiDB::Field(f.name(), KexiDB::Field::Text);
	KexiTableViewData *data = new KexiTableViewData();
//	data->setReadOnly( true );
	data->addColumn( new KexiTableViewColumn( *d->int_f ) );
	QValueVector<QString> hints = f.enumHints();
	for(uint i=0; i < hints.size(); i++) {
		KexiTableItem *item = new KexiTableItem(1);
		(*item)[0]=QVariant(hints[i]);
		kdDebug() << "added: '" << hints[i] <<"'"<<endl;
		data->append( item );
	}
	setDataInternal( data, true );
}

void KexiComboBoxPopup::setData(KexiTableViewColumn &column)
{
	if (!column.relatedData()) {
		kdWarning() << "KexiComboBoxPopup::setData(KexiTableViewColumn &): no column relatedData \n - moving to setData(KexiDB::Field &)" << endl;
		setData(*column.field);
		return;
	}
	setDataInternal( column.relatedData(), false /*!owner*/ );
}

void KexiComboBoxPopup::setDataInternal( KexiTableViewData *data, bool owner )
{
	if (d->tv->data())
		d->tv->data()->disconnect( this );
	d->tv->setData( data, owner );
	connect( d->tv, SIGNAL(dataRefreshed()), this, SLOT(slotDataRefreshRequested()));
//	connect( data, SIGNAL(refreshRequested()), this, SLOT(slotDataRefreshRequested()));

	updateSize();
}

void KexiComboBoxPopup::updateSize()
{
//	d->tv->adjustColumnWidthToContents( -1 ); //TODO: not only for column 0, if there are more columns!
//	                                         //TODO: check if the width is not too big
	d->tv->adjustHorizontalHeaderSize();
//	d->tv->adjustColumnWidthToContents( 0 ); //TODO: not only for column 0, if there are more columns!
//	                                         //TODO: check if the width is not too big
	const int rows = QMIN( d->max_rows, d->tv->rows() );
	KexiTableEdit *te = dynamic_cast<KexiTableEdit*>(parentWidget());
	const int width = QMAX( d->tv->tableSize().width(), 
		(te ? te->totalSize().width() : parentWidget()->width()/*sanity*/) );
	resize( width, d->tv->rowHeight() * rows +2 );

//	resize( d->tv->columnWidth( 0 ), d->tv->rowHeight() * QMIN( d->max_rows, d->tv->rows() ) +2 );
}

KexiTableView* KexiComboBoxPopup::tableView()
{
	return d->tv;
}

void KexiComboBoxPopup::resize( int w, int h )
{
	d->tv->horizontalScrollBar()->hide();
	d->tv->verticalScrollBar()->hide();
//	hide();
	d->tv->move(1,1);
	d->tv->resize( w-2, h-2 );
	QFrame::resize(w,h);
	update();
	updateGeometry();
//	show();
}

void KexiComboBoxPopup::setMaxRows(int r)
{
	d->max_rows = r;
}

/*! \return maximum number of rows for this popup. */
int KexiComboBoxPopup::maxRows() const
{
	return d->max_rows;
}

void KexiComboBoxPopup::slotTVItemAccepted(KexiTableItem *item, int row, int)
{
	hide();
	emit rowAccepted(item, row);
}

bool KexiComboBoxPopup::eventFilter( QObject *o, QEvent *e )
{
	if (o==d->tv) {
		if (e->type()==QEvent::KeyPress) {
			QKeyEvent *ke = static_cast<QKeyEvent*>(e);
			const int k = ke->key();
			if (k==Key_Escape || k==Key_F4) {
				hide();
				emit cancelled();
				return true;
			}
		}
	}
	return QFrame::eventFilter( o, e );
}

void KexiComboBoxPopup::slotDataRefreshRequested()
{
	updateSize();
}

#include "kexicomboboxpopup.moc"

