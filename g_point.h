#ifndef G_POINT_H
#define G_POINT_H

#include "geometryobject.h"

class G_Point : public GeometryObject
{
private:
    QPoint point;
    QFont font;

public:
    G_Point(QPoint _point, QString _name, QObject* parent = nullptr);
    void draw(QPainter& painter) override;
    QPoint toPoint();

    //bool isIn(QPoint _point) override;
};

#endif // G_POINT_H
