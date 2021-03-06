#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <QtOpenGL>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void initializeGL();
    void resizeGL(int w, int h);

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
