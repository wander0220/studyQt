#include "widget.h"
#include "ui_widget.h"

//Basic Widget
#include <QLineEdit>
#include <QCheckBox>
#include <QPushButton>
#include <QComboBox>

#include <QTime>
#include <QtWidgets/QTimeEdit>

#include <QLabel>
#include <QLCDNumber>

#include <QMenu>
#include <QMenuBar>

//Layout header
#include <QHBoxLayout>

//Advanced Widget
#include <QDataWidgetMapper>

#include <QDate>
#include <QFile>


#include <QGraphicsScene>
#include <QGraphicsRectItem>



Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{

    //QLineEdit {background : yellow};
    //QCheckBox { color : red}
    //
    //QPushButton *btn = new QPushButton("Click!", this);
    //btn->setStyleSheet("color:white;text-align:center;");
    //
    //QCheckBox *chk = new QCheckBox("Programming",this);
    //QButtonGroup *group; = new QButtonGroup("Click!",this);
    //group[0] = new QCheckBox("Game",this);
    //group[0]->addButton(chk);

    //QComboBox* combo = new QComboBox(this);
    //combo->setStyleSheet("color:white;");
    //combo->setGeometry(50,50,200,30);
    //combo->addItem("Application");
    //combo->addItem("Graphics");
    //combo->addItem("Database");
    //combo->addItem("Network");
    //
    //
    //QTime till = QTime(14,24,55,432);
    //QTimeEdit *qte;
    //
    //qte = new QTimeEdit(till,this);
    //qte->setGeometry(10,30,150,30);
    //
    //QLCDNumber *lcd[2];
    //lcd[0] = new QLCDNumber(2,this);
    //lcd[0]->display(24);
    //lcd[0]->setGeometry(150,30,200,100);

    //QMenuBar* menuBar = new QMenuBar(this);
    //QMenu* menu = new QMenu[3];
    //menu[0] = new QMenu("File");

    //QHBoxLayout *hBoxLayout = new QHBoxLayout(this);
    //QPushButton *btn[6];
    //
    //QString btnStr[3] = {"Netbook", "Tablet", "Phone"};
    //for (int i = 0; i < 3 ; i++) {
    //    btn[i] = new QPushButton(btnStr[i]);
    //    hBoxLayout ->addWidget(btn[i]);
    //}
    //setLayout(hBoxLayout);

    //QStringList items;
    //items<<tr("Home")<<tr("Work")<<tr("Other");

    QDate d1 = QDate::fromString("02.25","MM.dd");

    QFile data("output.txt");
    if(data.open(QFile::WriteOnly|QFile::Truncate)){
        QTextStream out(&data);
        out<<"Result : "<<qSetFieldWidth(10)<<3.14<<2.7;
        out<<"DATE : "<< d1.toString();
    }

    QImage img;

    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    QPainter painter;
    painter.begin(this);

    QPen pen(Qt::blue);
    pen.setWidth(4);

    //사각형
    painter.setPen(pen);
    painter.drawLine(10,10,100,40);
    painter.drawRect(120,10,80,80);

    QRectF rect(230.0, 10.0, 80.0,80.0);
    painter.drawRoundedRect(rect,20,20);

    QPointF p1[3] = {
        QPointF(10.0, 110.0),
        QPointF(110.0, 110.0),
        QPointF(110.0, 190.0)
    };
    painter.drawPolyline(p1, 3);

    QPointF p2[3] = {
        QPointF(120.0, 110.0),
        QPointF(220.0, 110.0),
        QPointF(220.0, 190.0)
    };
    painter.drawPolyline(p2, 3);

    painter.setFont(QFont("Arial",20));
    painter.setPen(Qt::black);
    QRect font_rect(10,150,220,180);
    painter.drawText(font_rect,Qt::AlignCenter, "Qt.");

    //원 그리기
    painter.setBrush(QBrush(Qt::green, Qt::Dense3Pattern));
    painter.setPen(Qt::blue);
    painter.drawEllipse(10,10,100,100);

    painter.setBrush(Qt::NoBrush);
    painter.setPen(Qt::blue);
    painter.drawEllipse(80,10,100,100);

    QRadialGradient radg(100,30,50,120,120);

    QGraphicsScene scene;
    //QGraphicsRectItem *rect = scene.addRect(QRectF(0,0,100,100));
    //QGraphicsItem *Item = scene.itemAt(50,50);



    painter.end();
}
















