#include "widget.h"
#include "ui_widget.h"

#include <QTimer>
#include <QPainter>
#include "helper.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    elapsed = 0;
    setFixedSize(200,200);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::animate()
{
    elapsed = (elapsed + qobject_cast<QTimer*>(sender())->interval()) % 1000;
    repaint();
}
void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter;
    painter.begin(this);
    painter.setRenderHint(QPainter::Antialiasing);
    helper->paint(&painter, event, elapsed);
    painter.end();
}
