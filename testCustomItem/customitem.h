#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H

#include <QGraphicsItem>
#include <QObject>
#include <QPainter>
#include <QGraphicsSceneMouseEvent>

class CustomItem : public QObject, public QGraphicsItem
{
    Q_OBJECT
    Q_INTERFACES(QGraphicsItem)
public:
    CustomItem(QGraphicsItem *parent = 0);
    CustomItem(const QString normal
               , const QString pressed = "", QGraphicsItem *parent = 0);


    //QRectF boundingRect() const;

    void paint(QPainter * painter,
               const QStyleOptionGraphicsItem *option,
               QWidget *widget = 0);

    void setPixmap(const QString normal,
                   const QString pressed = "");

signals:
    void clicked();

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    //void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
private:
    QPixmap m_normal;
    QPixmap m_pressed;
    bool m_isPressed;

signals:

};

#endif // CUSTOMITEM_H
