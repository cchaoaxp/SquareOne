#ifndef SETTIMEOFDAYCONTROLLER_H
#define SETTIMEOFDAYCONTROLLER_H

#include <CutomizeCalendar.h>
#include <QObject>
#include <SelectionItems.h>
#include <TaskSummary.h>
#include <WidgetsView.h>

class SetTimeOfDayController : public QObject
{
   Q_OBJECT
   public:
   TaskSummary *taskSummary;
   SelectionItems *dataSelection;
   CutomizeCalendar *calendar;
   WidgetsView *widgetsView;
   SetTimeOfDayController();
   void start();
   void showNext( QWidget *w );

   public slots:

   void showDataSelection();
   void showCutomizeCalendar();
   void showListWidgets();

   private:
   QWidget *current;
};

#endif// SETTIMEOFDAYCONTROLLER_H
