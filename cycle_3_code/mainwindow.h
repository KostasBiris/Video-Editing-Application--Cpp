#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <the_player.h>
#include "playlist_display.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void addTomeo(QWidget& tomeo);
    void makePlayerConnections(ThePlayer* player);
    void addPlaylistDisplay(QWidget *disp);
    ~MainWindow();

private slots:

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
