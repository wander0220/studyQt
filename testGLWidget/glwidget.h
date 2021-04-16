#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QWidget>
#include <QList>
#include <QTimer>
//#include <

class QtLogo;
class Bubble;

class GLWidget : public QWidget
{
    Q_OBJECT
public:
    GLWidget(QWidget *parent = 0);

public slots:
    void animate();

protected:
    void paintEvent(QPaintEvent *event);

    void initializeGL();
    void resizeGL(int width, int hegiht);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void showEvent(QShowEvent *Event);

private:
    void createBubbles(int number);
    void drawInstructions(QPainter *painter);

    QtLogo *logo;
    QList<Bubble*> bubbles;
    QTimer animationTimer;

};

#endif // GLWIDGET_H
