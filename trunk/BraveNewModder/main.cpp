#include <QtGui/QApplication>
#include "bravenewmodder.h"
#include "events.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Bravenewmodder w;
    w.show();
    return a.exec();
}