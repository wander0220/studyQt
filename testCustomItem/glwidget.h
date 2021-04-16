#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QWidget>

class Helper
class GLWidget : public QWidget
{
    Q_OBJECT
public:
    GLWidget(Helper *helper,QWidget *parent);

public slots:
    void animate();

protected:
    void paintEvent(QPaintEvent *event);

private:
    Helper *helper;
    int elapsed;


};

#endif // GLWIDGET_H
