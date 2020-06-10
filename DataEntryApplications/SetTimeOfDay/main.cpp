#include <QApplication>
#include <SetTimeOfDayController.h>

int main(int argc, char *argv[])
{
   QApplication a(argc, argv);

   SetTimeOfDayController c;
   c.start();
   return QApplication::exec();
}
