#include "SelectionItems.h"
#include "ui_SelectionItems.h"

SelectionItems::SelectionItems(QWidget *parent)
   : QWidget(parent)
   , ui(new Ui::SelectionItems)
{
   ui->setupUi(this);
}

SelectionItems::~SelectionItems() { delete ui; }

QPushButton *SelectionItems::getOk() { return ui->okButton; }
