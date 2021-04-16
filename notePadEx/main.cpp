#include "widget.h"

#include <QApplication>

#include <QTextEdit>
#include <QPushButton>
#include <QVBoxLayout>

#include <QtGui>

#include <notepad.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //그냥 notepad만
    //QTextEdit textEdit;
    //textEdit.show();

    //notepad+button
    QTextEdit *textEdit = new QTextEdit;
    QPushButton *quitButton = new QPushButton("&Quit");

    QObject::connect(quitButton, SIGNAL(clicked()), qApp, SLOT(quit()));

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(textEdit);
    layout->addWidget(quitButton);

    QWidget window;
    window.setLayout(layout);

    window.show();

    //Notepad notepad;

    return a.exec();
}
