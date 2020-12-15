#ifndef PLAYLIST_DISPLAY_H
#define PLAYLIST_DISPLAY_H

#include <QListWidget>
#include <QMediaPlaylist>
#include "the_player.h"
#include <QMessageBox>
#include <QInputDialog>

class PlaylistDisplay: public QListWidget
{
    Q_OBJECT
public:
    PlaylistDisplay();
    ~PlaylistDisplay();

    void addPlaylist(vector<TheButtonInfo> * list);
    void makePlayerConnections(ThePlayer* player);
    void makeMainConnections();

 public
    slots:
    void addEntry();
    void delEntry();
    void searchEntry();

signals:
     void sendTitle(QString title);

private
slots:
    void itemClicked(QListWidgetItem *item);

};

#endif // PLAYLIST_DISPLAY_H
