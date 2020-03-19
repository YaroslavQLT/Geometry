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

    //draw mesh
    const int mesh_coef = 50;
    painter.setPen(QPen(Qt::lightGray, 0.9, Qt::SolidLine));
    for (int i = 1; i <= width()/mesh_coef; i++)
        painter.drawLine(i*mesh_coef, 0, i*mesh_coef, height());
    for (int j = 1; j <= height()/mesh_coef; j++)
        painter.drawLine(0, j*mesh_coef, width(), j*mesh_coef);

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

}
