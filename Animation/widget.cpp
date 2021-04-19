#include "widget.h"
#include "ui_widget.h"


#include <QVariantAnimation>
#include <QAbstractAnimation>

#include <QPushButton>

#include <QEasingCurve>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    resize(300,220);
    QPushButton *btn = new QPushButton("Button",this);
    btn->setGeometry(10,10,100,30);

    p_Animation = new QPropertyAnimation(btn,"geometry", this);
    p_Animation->setDuration(2000);
    p_Animation->setStartValue(QRect(10,10,100,30));
    p_Animation->setEndValue(QRect(200,150,100,30));


    QEasingCurve easing(QEasingCurve::InOutQuad);
    for(qreal t = 0.0; t < 1.0; t += 0.1)
    {
        qDebug()<<"Effective progress"<<t<<" is"
                << easing.valueForProgress(t);
    }
    p_Animation->setEasingCurve(easing);
    connect(btn, SIGNAL(clicked()),this,SLOT(animaion()));


}

Widget::~Widget()
{
    delete ui;
}
void Widget::animation()
{
//     QAbstractAnimation* q;
//     q->setDuration();

//     QVariantAnimation* qv;
//     QPoint* qp = new QPoint(2,2);
//     qv->setStartValue((2,2));


    //button move
//     QPushButton *btn = new QPushButton("Button",this);
//     btn->setGeometry(10,10,100,30);

//     QPropertyAnimation *animation;
//     animation = new QPropertyAnimation(btn, "geometry", this);

//     animation->setDuration(3000);
//     animation->setStartValue(QRect(10,10,100,30));
//     animation->setEndValue(QRect(200,150,100,30));

//     animation->start();

//    QEasingCurve easing(QEasingCurve::InOutQuad);
//    for(qreal t = 0.0; t<1.0; t+=0.1)
//    {
//        qDebug()<<"Effective progress"<<t<<" is"
//                <<easing.valueForProgress(t);
//    }

//    animation = new QPropertyAnimation(item, "opacity");
//    animation->setEasingCurve(QEasingCurve::InOutSine);


    p_Animation->start();



}
