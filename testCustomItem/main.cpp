#include "widget.h"

#include "customitem.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();


    //CustomItem* c();


    return a.exec();
}
