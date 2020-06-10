#include <QApplication>
#include <SetTimeOfDayControllerLib.h>

int main(int argc, char *argv[])
{
   QApplication a(argc, argv);

   SetTimeOfDayControllerLib c;
   c.start();
   return QApplication::exec();
}
