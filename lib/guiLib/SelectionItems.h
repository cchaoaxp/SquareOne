#ifndef SELECTIONITEMS_H
#define SELECTIONITEMS_H

#include <QPushButton>
#include <QWidget>

namespace Ui
{
   class SelectionItems;
}

class SelectionItems : public QWidget
{
   Q_OBJECT

   public:
   explicit SelectionItems(QWidget *parent = nullptr);
   ~SelectionItems();

   QPushButton *getOk();

   private:
   Ui::SelectionItems *ui;
};

#endif   // SELECTIONITEMS_H
