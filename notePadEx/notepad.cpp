#include "notepad.h"
#include <QVBoxLayout>
#include <QMessageBox>
#include <QtGui>

#include <QtSvg/QSvgGenerator>


Notepad::Notepad()
{
    textEdit = new QTextEdit;
    quitButton = new QPushButton(tr("Quit"));
    connect(quitButton, SIGNAL(clicked()),this,SLOT(quit()));

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(textEdit);
    layout->addWidget(quitButton);

    setLayout(layout);

    setWindowTitle(tr("Notepad"));

    QSvgGenerator generator;
    generator.setFileName("../");
    generator.setSize(QSize(200,200));
    generator.setViewBox(QRect(0,0,200,200));
    generator.setTitle(tr("SVG Generator Example Drawing"));
    generator.setDescription(tr("An SVG drawing created by the SVG Generator Example provided with Qt."));

    QPainter painter;
    painter.begin(&generator);

    //...

    painter.end();

}
void Notepad::quit()
{
    QMessageBox messageBox;
    messageBox.setWindowTitle(tr("Notepad"));
    messageBox.setText(tr("Do you really want to quit?"));
    messageBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    messageBox.setDefaultButton(QMessageBox::No);
    if (messageBox.exec() == QMessageBox::Yes)
        qApp->quit();

}
