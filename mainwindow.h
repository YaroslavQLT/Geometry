#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets>
#include "geometryplane.h"
#include "g_line.h"
#include "g_point.h"

class MainWindow : public QWidget
{
    Q_OBJECT

private:
    GeometryPlane* plane;
    QListWidget* elements;

public:
    MainWindow(QWidget* parent = nullptr);
};

#endif // MAINWINDOW_H
