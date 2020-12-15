#include "playlist_display.h"
#include "mainwindow.h"


PlaylistDisplay::PlaylistDisplay()
    : QListWidget()
{
    this->setStyleSheet(  "background-color:rgb(18, 18, 18);;"
                             "border-style: solid;"
                             "border-width:1px;"
                              "border-color: rgb(82, 87, 90);"
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

void PlaylistDisplay::addEntry(){
    this->insertItem(0,this->itemAt(0,0)->text());
     QMessageBox::information(
                NULL,
                QString("Tomeo"),
                QString("video added to playlist"),
                QMessageBox::Ok);
}
void PlaylistDisplay::delEntry(){
    this->takeItem(0);
     QMessageBox::information(
                NULL,
                QString("Tomeo"),
                QString("video removed from Playlist"),
                QMessageBox::Ok);
}

void PlaylistDisplay::searchEntry(){
    bool ok;
    QString text = QInputDialog::getText(this, tr("Tomeo::Search"),
                                             tr("File name:"), QLineEdit::Normal,
                                             NULL, &ok);
    ok = false;
    for(int i = 0 ; i < this->count() ; i++){
        if(text.compare(this->item(i)->text()) == 0 ){
            ok = true;
            int q = QMessageBox::question(
                       NULL,
                       QString("Tomeo"),
                       QString("File found in playlist.\nPlay now?"),
                       QMessageBox::Yes | QMessageBox::No);
           if(q == QMessageBox::Yes) emit(sendTitle(text));
        }
    }
    if(ok == false){QMessageBox::warning(
                    NULL,
                    QString("Tomeo"),
                    QString("File not found in playlist."),
                    QMessageBox::Ok);
    }

}

