#include <QtWidgets>
#include "mainwindow.h"
#include "geometryplane.h"
#include "g_point.h"
#include "g_line.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GeometryPlane plane;
    plane.show();
    plane.addObject(new G_Point(QPoint(100, 100), "A", &plane));
    G_Point* p1 = new G_Point(QPoint(50, 50), "B", &plane);
    G_Point* p2 = new G_Point(QPoint(300, 400), "C", &plane);
    plane.addObject(new G_Line(p1, p2, "l", &plane));

    return a.exec();
}
