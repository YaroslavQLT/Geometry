#include "geometryplane.h"
#include "g_point.h"

GeometryPlane::GeometryPlane()
{

}

void GeometryPlane::addObject(GeometryObject* object)
{
    objects.insert(object);
}

void GeometryPlane::paintEvent(QPaintEvent* event)
{
    QPainter painter(this);
    painter.setPen(QPen(Qt::black, Qt::SolidLine));
    // draw all objects in plane
    for (auto it = objects.begin();
         it != objects.end();
         it++)
    {
        (*it)->draw(painter);
    }
}
