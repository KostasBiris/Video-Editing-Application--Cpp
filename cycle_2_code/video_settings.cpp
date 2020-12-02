#include "video_settings.h"
#include "ui_toolbars.h"
#include "QSlider"

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

    //video time
    ui->horizontalSlider_2->setRange(0,0);

    connect(ui->horizontalSlider_2, &QAbstractSlider::sliderMoved,this,
             &VideoSettings::onPositionSliderValueChanged);
    connect(this, &VideoSettings::setPosition,player, &QMediaPlayer::setPosition);

    connect(player, &QMediaPlayer::positionChanged, this, &VideoSettings::positionChanged);
    connect(player, &QMediaPlayer::durationChanged, this, &VideoSettings::durationChanged);

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


void VideoSettings::positionChanged(qint64 position)
{
    ui->horizontalSlider_2->setValue(position);
}

void VideoSettings::durationChanged(qint64 duration)
{
    ui->horizontalSlider_2->setRange(0, duration);
}

VideoSettings::~VideoSettings()
{
    delete ui;
}
