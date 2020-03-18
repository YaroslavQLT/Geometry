#include <QtWidgets>
#include "mainwindow.h"
#include "geometryplane.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GeometryPlane plane;
    plane.show();
    return a.exec();
}
