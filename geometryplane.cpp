#include "geometryplane.h"
#include "g_point.h"

GeometryPlane::GeometryPlane(QWidget* parent)
    :QWidget(parent)
{
    mesh_coef = 50;
    font.setFamily("Arial");
    font.setPixelSize(10);
}

void GeometryPlane::addObject(GeometryObject* object)
{
    objects.insert(object);
}

void GeometryPlane::paintEvent(QPaintEvent* event)
{
    QPainter painter(this);
    painter.setPen(QPen(Qt::lightGray, 0.9, Qt::SolidLine));

    //draw numbers (coordinates)
    for (int i = 1; i <= width()/mesh_coef; i++)
    {
        QFontMetrics metrics(font);
        QString string = QString::number(i * mesh_coef);
        QRect rect = metrics.boundingRect(string);
        int x = i * mesh_coef - rect.width();
        int y = rect.height();
        painter.drawText(x, y, string);
    }
    for (int j = 1; j <= height()/mesh_coef; j++)
    {
        QString string = QString::number(j * mesh_coef);
        int x = 0;
        int y = j * mesh_coef;
        painter.drawText(x, y, string);
    }

    //draw mesh
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
