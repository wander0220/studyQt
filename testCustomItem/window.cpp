#include "window.h"

#include "widget.h"
#include "glwidget.h"
#include <QLabel>
#include <QGridLayout>
#include <QTimer>

Window::Window()
    : QWidget()
{
    Widget *native = new Widget();
    GLWidget *openGL = new GLWidget(&helper, this);
    QLabel *nativeLabel = new QLabel(tr("native"));
    nativeLabel->setAlignment(Qt::AlignHCenter);
    QLabel *openGLLabel = new QLabel(tr("OpenGL"));
    openGLLabel->setAlignment(Qt::AlignHCenter);

    QGridLayout * layout = new QGridLayout;
    layout->addWidget(native,0,0);
    layout->addWidget(openGL,0,1);
    layout->addWidget(nativeLabel,1,0);
    layout->addWidget(openGLLabel,1,0);
    setLayout(layout);

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), native, SLOT(animate()));
    connect(timer, SIGNAL(timeout()), openGL, SLOT(animate()));
    timer->start(50);

    setWindowTitle(tr("2D Painting on NAtive and OpenGL Widgets"));

}
