#include "mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
    :QWidget(parent)
{
    // app gui
    QSplitter* splitter = new QSplitter(Qt::Horizontal);
    plane = new GeometryPlane;
    elements = new QListWidget;
    splitter->addWidget(plane);
    splitter->addWidget(elements);

    QHBoxLayout* layout = new QHBoxLayout;
    layout->addWidget(splitter);

    setLayout(layout);
    setWindowTitle("Geometry Builder");

    // TESTING
    plane->addObject(new G_Point(QPoint(100, 100), "A", this));
    G_Point* p1 = new G_Point(QPoint(200, 300), "B", this);
    G_Point* p2 = new G_Point(QPoint(400, 450), "C", this);
    plane->addObject(new G_Line(p1, p2, "l", this));
}
