#include "CutomizeCalendar.h"
#include "ui_CutomizeCalendar.h"
#include <QTextCharFormat>

CutomizeCalendar::CutomizeCalendar( QWidget *parent, QDate *minDate,
                                    QDate *maxDate )
   : QWidget( parent )
   , ui( new Ui::CutomizeCalendar )
   , pMinDate( ( !minDate ) ? new QDate( 2020, 5, 1 ) : minDate )
   , pMaxDate( ( !maxDate ) ? new QDate( 3000, 1, 1 ) : maxDate )
{
   ui->setupUi( this );
   createCalendarPreview();
}

CutomizeCalendar::~CutomizeCalendar() { delete ui; }

void CutomizeCalendar::createCalendarPreview()
{
   ui->calendarWidget->setMinimumDate( *pMinDate );
   ui->calendarWidget->setMaximumDate( *pMaxDate );
   //   ui->calendarWidget->setGridVisible( true );
   //   ui->calendarWidget->setVerticalHeaderFormat(
   //   QCalendarWidget::NoVerticalHeader );

   ui->dateTimeEdit->setWrapping( true );
   ui->dateTimeEdit->setDateTime( QDateTime::currentDateTime().toUTC() );

   //   setWindowTitle(tr("Calendar Widget"));
}

QPushButton *CutomizeCalendar::getOk() { return ui->okButton; }

void CutomizeCalendar::on_minimizeButton_clicked() { QWidget::showMinimized(); }
