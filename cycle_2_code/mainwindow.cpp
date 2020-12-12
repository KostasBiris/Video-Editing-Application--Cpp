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

    //connect(ui->addVideos)


}

void MainWindow::makePlayerConnections(ThePlayer* player){
    //change folder
   // connect(ui->addVideos, &QAbstractButton::clicked, player, &ThePlayer::nextMedia);

}

MainWindow::~MainWindow()
{
    delete ui;
}

