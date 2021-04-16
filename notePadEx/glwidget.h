#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QWidget>
#include <QTimer>


class QtLogo;
class Bubble;
class GLWidget : public QWidget
{
    Q_OBJECT
public:
    GLWidget(QWidget *parent = nullptr);
    ~GLWidget();

protected:
    void initaializeGL();
    void paintEvent(QPaintEvent *event);
    void resizeGL(int width, int height);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void showEvent(QShowEvent *event);

private:
    void createBubbles(int number);
    void drawInstructions(QPainter *painter);

    QtLogo *logo;
    QList<Bubble*> bubbles;
    QTimer animationTimer;


};

#endif // GLWIDGET_H
