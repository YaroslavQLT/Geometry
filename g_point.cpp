#include "g_point.h"
#include <QtWidgets>

G_Point::G_Point(QPoint _point, QString _name, QObject* parent)
    :GeometryObject(_name, parent)
{
    point = _point;
    font.setFamily("Arial");
    font.setPixelSize(12);
    font.setBold(true);
}

void G_Point::draw(QPainter& painter)
{
    painter.setPen(Qt::NoPen);
    painter.setBrush(Qt::blue);
    painter.drawEllipse(point, 5, 5);
    painter.setFont(font);
    painter.setPen(QPen(Qt::black, 2, Qt::SolidLine));
    painter.drawText(point.x(), point.y() - 12, name);
}

QPoint G_Point::toPoint()
{
    return point;
}

/*bool G_Point::isIn(QPoint _point)
{
    return point == _point;
}*/
