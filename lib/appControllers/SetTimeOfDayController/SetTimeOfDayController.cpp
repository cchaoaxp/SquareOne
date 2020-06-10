#include "SetTimeOfDayController.h"
#include <QApplication>

SetTimeOfDayController::SetTimeOfDayController()
{
   taskSummary   = nullptr;
   dataSelection = nullptr;
   current       = nullptr;
}

void SetTimeOfDayController::start()
{
   taskSummary = new TaskSummary();
   QObject::connect( taskSummary->getYes(), &QPushButton::clicked, this,
                     &SetTimeOfDayController::showDataSelection );
   showNext( taskSummary );
}

void SetTimeOfDayController::showDataSelection()
{
   dataSelection = new SelectionItems();
   QObject::connect( dataSelection->getOk(), &QPushButton::clicked, this,
                     &SetTimeOfDayController::showCutomizeCalendar );
   showNext( dataSelection );
}

void SetTimeOfDayController::showCutomizeCalendar()
{
   QDate minDate;
   minDate.setDate( 1900, 1, 1 );
   calendar = new CutomizeCalendar();
   //   calendar = new CutomizeCalendar(nullptr, &minDate, nullptr);
   QObject::connect( calendar->getOk(), &QPushButton::clicked, this,
                     &SetTimeOfDayController::showListWidgets );
   showNext( calendar );
}

void SetTimeOfDayController::showListWidgets()
{
   widgetsView = new WidgetsView();
   QObject::connect( widgetsView->getOk(), &QPushButton::clicked,
                     QApplication::instance(), QApplication::quit );
   showNext( widgetsView );
}

void SetTimeOfDayController::showNext( QWidget *w )
{
   Qt::WindowFlags flags;
   flags = Qt::Window | Qt::FramelessWindowHint;
   if ( current != nullptr )
   {
      current->hide();
      current = w;
      current->setWindowFlags( flags );
      current->show();
   }
   else
   {
      current = w;
      current->setWindowFlags( flags );
      current->show();
   }
}
