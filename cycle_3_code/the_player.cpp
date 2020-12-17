//
// Created by twak on 11/11/2019.
//

#include "the_player.h"

using namespace std;

// all buttons have been setup, store pointers here
void ThePlayer::setContent(std::vector<TheButton*>* b, std::vector<TheButtonInfo>* i) {
    buttons = b;
    infos = i;
    jumpTo(buttons -> at(0) -> info);
}

// change the image and video for one button every one second
void ThePlayer::shuffle() {
    TheButtonInfo* i = & infos -> at (rand() % infos->size() );
//       setMedia(*i->url);
    buttons -> at( updateCount++ % buttons->size() ) -> init( i );
}

void ThePlayer::playStateChanged (QMediaPlayer::State ms) {
    switch (ms) {
        case QMediaPlayer::State::StoppedState:
            play(); // starting playing again...
            break;
    default:
        break;
    }
}

void ThePlayer::jumpTo (TheButtonInfo* button) {
    setMedia( * button -> url);
    play();
}

void ThePlayer::setPlaylist(vector<TheButtonInfo> * info){

    if(playlist != nullptr)
        delete playlist;

    playlist = new QMediaPlaylist();
    for(auto i : *info){
        playlist->addMedia(*i.url);
    }
    playlist->setCurrentIndex(0);
    playlist->setPlaybackMode(QMediaPlaylist::Loop);

}

void ThePlayer::nextMedia(){
     playlist->next();
     setMedia( playlist->currentMedia());
}


void ThePlayer::prevMedia(){
     playlist->previous();
     setMedia( playlist->currentMedia());
}

void ThePlayer::selectMedia(QString title){
    //seach for the file in the playlist
    for( int i = 0 ; i < playlist->mediaCount(); i++){
        if ( title.compare(
                 playlist->media(i).request().url().fileName()) == 0){
            playlist->setCurrentIndex(i);
            setMedia(playlist->currentMedia());
        }
    }
}

void ThePlayer::addMedia(){

}
