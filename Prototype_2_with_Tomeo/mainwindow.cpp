#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    statusBar()->hide();
    menuBar()->hide();
}

void MainWindow::addTomeo(QWidget &tomeo){
    ui->verticalLayout->addWidget(&tomeo);


}

MainWindow::~MainWindow()
{
    delete ui;
}

