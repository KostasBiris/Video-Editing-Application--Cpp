#include "playlist_display.h"


PlaylistDisplay::PlaylistDisplay()
    : QListWidget()
{
    this->setStyleSheet(  "background-color:rgb(18, 18, 18);;"
                             "border-style: solid;"
                             "border-width:1px;"
                            "border-color: white;"
                          "color: white"
                            );
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


