#include "mainwindow.h"
#include "ui_mainwindow.h"
//setup
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

void MainWindow::makePlayerConnections(ThePlayer *player){
    //first time writing the label
    QString theText = "Currently playing:\n" +
            player->currentMedia().request().url().fileName() +
            "\n" + "Select video from playlist:";
    ui->label->setText(theText);
    //update current label
    connect(player,&QMediaPlayer::mediaChanged,this,&MainWindow::currentChanged );
}

void MainWindow::currentChanged(const QMediaContent &media){
    QString theText = "Currently playing:\n" +
            media.request().url().fileName() +"\n"
            + "Select video from playlist:";
    ui->label->setText(theText);
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




