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

void MainWindow::addPlaylistDisplay(QWidget *disp){
    ui->verticalLayout_2->addWidget(disp);
    ui->verticalLayout_2->addStretch();
}

void MainWindow::makePlaylistConnections(PlaylistDisplay* list){
    //add video
   connect(ui->addButton, &QAbstractButton::clicked, list, &PlaylistDisplay::addEntry);
   //remove video
   connect(ui->delButton, &QAbstractButton::clicked, list, &PlaylistDisplay::delEntry);
   //seach video
   connect(ui->searchButton, &QAbstractButton::clicked, list, &PlaylistDisplay::searchEntry);

}

MainWindow::~MainWindow()
{
    delete ui;
}




