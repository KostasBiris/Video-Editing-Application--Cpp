#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_settings.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::addTomeo(QWidget &tomeo){
    ui->verticalLayout->addWidget(&tomeo);
    Ui::Settings q;
    QWidget *foo = new QWidget;
    q.setupUi(foo);
    ui->verticalLayout->addWidget(foo);
}

MainWindow::~MainWindow()
{
    delete ui;
}

