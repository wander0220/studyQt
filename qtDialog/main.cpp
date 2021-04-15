#include "widget.h"

#include <QApplication>
#include <QAbstractListModel>
#include <QStringListModel>
#include <QListView>
#include <QLabel>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    QStringList strList;
    strList << "Monday" << "Tuesday" << "Wedneday" << "Thursday" << "Friday";

    QAbstractItemModel *model = new QStringListModel(strList);
    QListView *view = new QListView();
    view->setModel(model);

    QModelIndex index = model->index(3,0);
    QString text = model->data(index,Qt::DisplayPropertyRole).toString();





    return a.exec();
}
