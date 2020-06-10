#ifndef WIDGETSVIEW_H
#define WIDGETSVIEW_H

#include <QPushButton>
#include <QWidget>

namespace Ui
{
   class WidgetsView;
}

class WidgetsView : public QWidget
{
   Q_OBJECT

   public:
   explicit WidgetsView( QWidget *parent = nullptr );
   ~WidgetsView();
   QPushButton *getOk();

   private:
   Ui::WidgetsView *ui;
};

#endif// WIDGETSVIEW_H
