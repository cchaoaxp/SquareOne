#include "SetTimeOfDayControllerLib.h"
#include <QApplication>

SetTimeOfDayControllerLib::SetTimeOfDayControllerLib()
{
   taskSummary   = nullptr;
   dataSelection = nullptr;
   current       = nullptr;
}

void SetTimeOfDayControllerLib::start()
{
   taskSummary = new TaskSummary();
   QObject::connect( taskSummary->getYes(), &QPushButton::clicked, this,
                     &SetTimeOfDayControllerLib::showDataSelection );
   showNext( taskSummary );
}

void SetTimeOfDayControllerLib::showDataSelection()
{
   dataSelection = new SelectionItems();
   QObject::connect( dataSelection->getOk(), &QPushButton::clicked, this,
                     &SetTimeOfDayControllerLib::showCutomizeCalendar );
   showNext( dataSelection );
}

void SetTimeOfDayControllerLib::showCutomizeCalendar()
{
   QDate minDate;
   minDate.setDate( 1900, 1, 1 );
   calendar = new CutomizeCalendar();
   //   calendar = new CutomizeCalendar(nullptr, &minDate, nullptr);
   QObject::connect( calendar->getOk(), &QPushButton::clicked, this,
                     &SetTimeOfDayControllerLib::showListWidgets );
   showNext( calendar );
}

void SetTimeOfDayControllerLib::showListWidgets()
{
   widgetsView = new WidgetsView();
   QObject::connect( widgetsView->getOk(), &QPushButton::clicked,
                     QApplication::instance(), QApplication::quit );
   showNext( widgetsView );
}

void SetTimeOfDayControllerLib::showNext( QWidget *w )
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
