#include "geometryobject.h"

GeometryObject::GeometryObject(QString _name, QObject* parent)
    :QObject(parent)
{
    name = _name;
}

QString GeometryObject::getName() { return name; }
void GeometryObject::setName(QString newName) { name = newName; }
