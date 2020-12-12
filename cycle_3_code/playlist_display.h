#ifndef PLAYLIST_DISPLAY_H
#define PLAYLIST_DISPLAY_H

#include <QListWidget>
#include <QMediaPlaylist>
#include "the_player.h"

class PlaylistDisplay: public QListWidget
{
    Q_OBJECT
public:
    PlaylistDisplay();
    ~PlaylistDisplay();

    void addPlaylist(vector<TheButtonInfo> * list);
    void makePlayerConnections(ThePlayer* player);

signals:
     void sendTitle(QString title);

private
slots:
    void itemClicked(QListWidgetItem *item);

};

#endif // PLAYLIST_DISPLAY_H
