#include "playlist_display.h"


PlaylistDisplay::PlaylistDisplay()
    : QListWidget()
{
}

PlaylistDisplay::~PlaylistDisplay()
{
}

void PlaylistDisplay::makePlayerConnections(ThePlayer *player){

    connect(this, &QListWidget::itemClicked,this, &PlaylistDisplay::itemClicked);
    connect(this, &PlaylistDisplay::sendTitle, player, &ThePlayer::selectMedia);
}

void PlaylistDisplay::addPlaylist(vector<TheButtonInfo> * list){
    for(auto i : *list){
        this->addItem(i.url->fileName());
    }
}

void PlaylistDisplay::itemClicked(QListWidgetItem* item){
    emit(sendTitle(item->text()));
}


