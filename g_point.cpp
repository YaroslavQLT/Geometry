#include "g_point.h"
#include <QtWidgets>

G_Point::G_Point(QPoint _point, QString _name, QObject* parent)
    :GeometryObject(_name, parent)
{
    point = _point;
}

void G_Point::draw(QPainter& painter)
{
    painter.drawPoint(point);
    painter.drawText(point.x(), point.y() - 12, name);
}

QPoint G_Point::toPoint()
{
    return point;
}

bool G_Point::isIn(QPoint _point)
{
    return point == _point;
}
