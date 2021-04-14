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



    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}
