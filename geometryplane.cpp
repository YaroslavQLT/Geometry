#include "geometryplane.h"
#include "g_point.h"

GeometryPlane::GeometryPlane(QWidget* parent)
    :QWidget(parent)
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

void GeometryPlane::mousePressEvent(QMouseEvent* event)
{
    QPoint point = event->pos();
    for (auto it = objects.begin();
         it != objects.end();
         it++)
    {
        if ((*it)->isIn(point))
            QMessageBox::information(nullptr, "You clicked the object", (*it)->getName());
    }
}
