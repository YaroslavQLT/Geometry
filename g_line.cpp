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

