#ifndef HELPER_H
#define HELPER_H

#include <QPainter>
#include <QPaintEvent>

class Helper
{
public:
    Helper();
    void paint(QPainter *painter, QPaintEvent *event, int elapsed);

private:
    QBrush background;
    QBrush circleBrush;
    QFont textFont;
    QPen circlePen;
    QPen textPen;
};

#endif // HELPER_H
