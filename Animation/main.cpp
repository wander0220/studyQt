#include "widget.h"

#include <QApplication>
#include <QList>

#include <QtXml>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    //w.animation();
    w.show();
    return a.exec();



}
