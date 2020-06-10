#include "WidgetsView.h"
#include "TaskSummary.h"
#include "ui_WidgetsView.h"
#include <QDebug>
#include <QIcon>
#include <QLabel>
#include <QPixmap>
#include <QVBoxLayout>

WidgetsView::WidgetsView( QWidget *parent )
   : QWidget( parent )
   , ui( new Ui::WidgetsView )
{
   ui->setupUi( this );

   TaskSummary *task     = new TaskSummary();
   QListWidgetItem *item = new QListWidgetItem();
   item->setSizeHint( task->size() );
   ui->listWidget->addItem( item );

   //   task->resize( ui->listWidget->sizeHint() );
   ui->listWidget->setItemWidget( item, task );
   ui->listWidget->resize( task->size() + QSize( 10, 10 ) );
   ui->listWidget->setSizePolicy( QSizePolicy::Expanding,
                                  QSizePolicy::Expanding );

   //   for ( int i = 0; i < 20; i++ )
   //   {
   //      QString str = "item" + QString::number( i );
   //      ui->listWidget->addItem( str );
   //   }
}

WidgetsView::~WidgetsView() { delete ui; }

QPushButton *WidgetsView::getOk() { return ui->okButton; }
