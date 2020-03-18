#include "mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
    :QWidget(parent)
{
    QSplitter* splitter = new QSplitter(Qt::Horizontal);
    plane = new GeometryPlane;
    button = new QPushButton;
    splitter->addWidget(plane);
    splitter->addWidget(button);

    QHBoxLayout* layout = new QHBoxLayout;
    layout->addWidget(splitter);

    setLayout(layout);
    setWindowTitle("Geometry Builder");
}
