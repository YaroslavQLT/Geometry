#ifndef GEOMETRYPLANE_H
#define GEOMETRYPLANE_H

#include <QtWidgets>
#include "geometryobject.h"
#include <set>

class GeometryPlane : public QWidget
{
    Q_OBJECT

public:
    GeometryPlane(QWidget* parent = nullptr);
    void addObject(GeometryObject* object);

private:
    std::set<GeometryObject*> objects;
    int mesh_coef;
    QFont font;

protected:
    void paintEvent(QPaintEvent* event) override;
    void mousePressEvent(QMouseEvent *event) override;
};

#endif // GEOMETRYPLANE_H
