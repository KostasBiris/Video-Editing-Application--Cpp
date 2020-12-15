#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "the_player.h"
#include <QLabel>
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
    void makePlaylistConnections(PlaylistDisplay* list);
    void makePlayerConnections(ThePlayer* player);
    void addPlaylistDisplay(QWidget *disp);
    ~MainWindow();

private slots:
    void currentChanged(const QMediaContent & media);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
