#include "TaskSummary.h"
#include "ui_TaskSummary.h"

TaskSummary::TaskSummary(QWidget *parent)
   : QWidget(parent)
   , ui(new Ui::TaskSummary)
{
   ui->setupUi(this);
}

TaskSummary::~TaskSummary() { delete ui; }

QPushButton *TaskSummary::getYes() { return ui->yesButton; }
