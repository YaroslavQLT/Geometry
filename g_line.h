#ifndef G_LINE_H
#define G_LINE_H

#include <QtWidgets>
#include "geometryobject.h"
#include "g_point.h"

class G_Line : public GeometryObject
{
private:
    G_Point* first;
    G_Point* second;

public:
    G_Line(G_Point* _first, G_Point* _second, QString _name,
           QObject* parent = nullptr);
    void draw(QPainter& painter) override;

    bool isIn(QPoint point) override;
};

#endif // G_LINE_H
