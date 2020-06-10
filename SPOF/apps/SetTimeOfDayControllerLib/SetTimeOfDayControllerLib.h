#ifndef SETTIMEOFDAYCONTROLLERLIB_H
#define SETTIMEOFDAYCONTROLLERLIB_H

#include <CutomizeCalendar.h>
#include <QObject>
#include <SelectionItems.h>
#include <TaskSummary.h>
#include <WidgetsView.h>

class SetTimeOfDayControllerLib : public QObject
{
   Q_OBJECT
public:
    TaskSummary *taskSummary;
    SelectionItems *dataSelection;
    CutomizeCalendar *calendar;
    WidgetsView *widgetsView;

    SetTimeOfDayControllerLib();
    void start();
    void showNext( QWidget *w );

    public slots:

    void showDataSelection();
    void showCutomizeCalendar();
    void showListWidgets();

    private:
    QWidget *current;
};

#endif // SETTIMEOFDAYCONTROLLERLIB_H
