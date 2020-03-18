#ifndef GEOMETRYOBJECT_H
#define GEOMETRYOBJECT_H

#include <QtWidgets>

class GeometryObject : public QObject
{
    Q_OBJECT

public:
    GeometryObject(QString _name, QObject* parent = nullptr);
    virtual void draw(QPainter& painter) = 0;

    void setName(QString newName);
    QString getName();

    virtual bool isIn(QPoint point) = 0;

protected:
    QString name;
};

#endif // GEOMETRYOBJECT_H
