#include "video_settings.h"
#include "ui_toolbars.h"
#include "QSlider"
#include "QTime"
#include "QVideoWidget"

VideoSettings::VideoSettings(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Settings)
{
    ui->setupUi(this);
}

void VideoSettings::makePlayerConnections(ThePlayer* player){

    connect(ui->pushButton_2,SIGNAL(clicked()),player,SLOT(pause()));
    connect(ui->pushButton,SIGNAL(clicked()),player,SLOT(play()));

    //volumes
    connect(ui->horizontalSlider, &QSlider::valueChanged, this,
            &VideoSettings::onVolumeSliderValueChanged);
    connect(this, &VideoSettings::changeVolume, player, &QMediaPlayer::setVolume);
    //mute
    connect(ui->mutebutton, &QAbstractButton::clicked, this, &VideoSettings::muteClicked);
    connect(this, &VideoSettings::changeMuting, player, &QMediaPlayer::setMuted);
    connect(player, &QMediaPlayer::mutedChanged, this, &VideoSettings::setMuted);
    //video time
    ui->horizontalSlider_2->setRange(0,0);

    connect(ui->horizontalSlider_2, &QAbstractSlider::sliderMoved,this,
             &VideoSettings::onPositionSliderValueChanged);
    connect(this, &VideoSettings::setPosition,player, &QMediaPlayer::setPosition);

    connect(player, &QMediaPlayer::positionChanged, this, &VideoSettings::positionChanged);
    connect(player, &QMediaPlayer::durationChanged, this, &VideoSettings::durationChanged);

    //next
    connect(ui->forwardButton, &QAbstractButton::released, player, &ThePlayer::nextMedia);
    //previous
    connect(ui->prevButton, &QAbstractButton::released, player, &ThePlayer::prevMedia);

    //fullscreen


}

int VideoSettings::volume() const
{
    qreal linearVolume =  QAudio::convertVolume(ui->horizontalSlider->value() / qreal(100),
                                                QAudio::LogarithmicVolumeScale,
                                                QAudio::LinearVolumeScale);
    return qRound(linearVolume * 100);
}
void VideoSettings::onVolumeSliderValueChanged()
{
    emit changeVolume(volume());
}

void VideoSettings::onPositionSliderValueChanged(int position)
{
    qDebug()<<position;
    emit setPosition(position);
}


void VideoSettings::muteClicked()
{
    emit changeMuting(!videoMuted);
}

void VideoSettings::setMuted(bool muted){

    if (muted != videoMuted)
        videoMuted = muted;
}

void VideoSettings::positionChanged(qint64 position)
{
    ui->horizontalSlider_2->setValue(position);

    updateDurationInfo(position/1000);
}



void VideoSettings::updateDurationInfo(int info)
{
    QString time;
    if (info || vid_duration) {
        QTime currentTime((info / 3600) % 60, (info / 60) % 60,
            info % 60, info % 1000);
        QTime totalTime((vid_duration / 3600) % 60, (vid_duration / 60) % 60,
            vid_duration % 60, (vid_duration * 1000) % 1000);
        QString format = "mm:ss";
        if (vid_duration > 3600)
            format = "hh:mm:ss";
        time = currentTime.toString(format) + " / " + totalTime.toString(format);
    }
    ui->label->setText(time);
}


void VideoSettings::durationChanged(qint64 duration)
{
    ui->horizontalSlider_2->setRange(0, duration);
    vid_duration = duration/1000;
}

VideoSettings::~VideoSettings()
{
    delete ui;
}
