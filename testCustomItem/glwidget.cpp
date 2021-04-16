#include "glwidget.h"
#include "helper.h"

#include <QTimer>

GLWidget::GLWidget(Helper *helper,QWidget *parent)
    : QWidget(parent)
{
    elapsed = 0;
    setFixedSize(200,200);
    setAutoFillBackground(false);
}
void GLWidget::animate()
{
    elapsed = (elapsed + qobject_cast<QTimer*>(sender())->interval()) % 1000;
    repaint();
}
void GLWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter;
    painter.begin(this);
    painter.setRenderHint(QPainter::Antialiasing);
    helper->paint(&painter, event, elapsed);
    painter.end();
}
