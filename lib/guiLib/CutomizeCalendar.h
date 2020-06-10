#ifndef CUTOMIZECALENDAR_H
#define CUTOMIZECALENDAR_H

#include <QCalendarWidget>
#include <QDate>
#include <QDebug>
#include <QGridLayout>
#include <QGroupBox>
#include <QPushButton>
#include <QWidget>

QT_BEGIN_NAMESPACE
class QComboBox;
class QDateEdit;
class QLabel;
QT_END_NAMESPACE

namespace Ui
{
   class CutomizeCalendar;
}

class CutomizeCalendar : public QWidget
{
   Q_OBJECT

   public:
   explicit CutomizeCalendar( QWidget *parent = nullptr,
                              QDate *minDate  = nullptr,
                              QDate *maxDate  = nullptr );
   ~CutomizeCalendar();

   void createCalendarPreview();

   QPushButton *getOk();

   private slots:
   void on_minimizeButton_clicked();

   private:
   Ui::CutomizeCalendar *ui;
   QDate *pMinDate;
   QDate *pMaxDate;
};

#endif// CUTOMIZECALENDAR_H
