#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets>

class MainWindow : public QWidget
{
    Q_OBJECT
private:
    //ui elements
    QPushButton* button;
    QLabel* textLabel;
    QLineEdit* input;

    //hotkey enter
    QShortcut* key_enter;

public:
    MainWindow(QWidget* parent = nullptr);

private slots:
    void displayText();

};

#endif // MAINWINDOW_H
