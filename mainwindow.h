#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets>
#include "geometryplane.h"

class MainWindow : public QWidget
{
    Q_OBJECT

private:
    GeometryPlane* plane;
    QPushButton* button;

public:
    MainWindow(QWidget* parent = nullptr);
};

#endif // MAINWINDOW_H
