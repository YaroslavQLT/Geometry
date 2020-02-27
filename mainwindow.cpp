#include "mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
    :QWidget(parent)
{
    button = new QPushButton("OK");
    textLabel = new QLabel("");
    input = new QLineEdit;

    //set gui
    QVBoxLayout* v_layout = new QVBoxLayout;
    QHBoxLayout* h_layout = new QHBoxLayout;
    h_layout->addWidget(input);
    h_layout->addWidget(button);
    v_layout->addWidget(textLabel);
    v_layout->addLayout(h_layout);

    setLayout(v_layout);

    // init hot key
    key_enter = new QShortcut(this);
    key_enter->setKey(QKeySequence("Enter"));

    //connect signal "clicked" from button to "displayText"
    connect(button, SIGNAL(clicked()), this, SLOT(displayText()));
    //and with hot key "enter"
    connect(key_enter, SIGNAL(activated()), SLOT(displayText()));
}

void MainWindow::displayText()
{
    QString text = input->text();
    textLabel->setText(text);
}
