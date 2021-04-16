#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Helper;

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public:
    void animate();

protected:
    void paintEvent(QPaintEvent *event);

private:
    Ui::Widget *ui;
    Helper *helper;
    int elapsed;
};
#endif // WIDGET_H
