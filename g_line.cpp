#include "g_line.h"

G_Line::G_Line(G_Point* _first, G_Point* _second, QString _name,
               QObject* parent)
    :GeometryObject(_name, parent)
{
    first = _first;
    second = _second;
}

void G_Line::draw(QPainter& painter)
{
    first->draw(painter);
    second->draw(painter);

    painter.drawLine(first->toPoint(), second->toPoint());
}

bool G_Line::isIn(QPoint point)
{
    float k = static_cast<float>(first->toPoint().y()) / static_cast<float>(first->toPoint().x());
    return abs(static_cast<float>(k * point.x()) - static_cast<float>(point.y())) < 5.0f;
}
