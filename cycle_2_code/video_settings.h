#ifndef VIDEO_SETTINGS_H
#define VIDEO_SETTINGS_H


#include <QWidget>
#include "the_player.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Settings; }
QT_END_NAMESPACE

class VideoSettings : public QWidget
{
    Q_OBJECT

public:
    VideoSettings(QWidget *parent = nullptr);
    void makePlayerConnections(ThePlayer* player);
    int volume() const;
    void onVolumeSliderValueChanged();
    void onPositionSliderValueChanged(int position);
    void updateDurationInfo(int info);
    ~VideoSettings();

signals:
     void changeVolume(int volume);
     void setPosition(int position);
     void changeMuting(bool muting);
     void next();

private slots:
     void positionChanged(qint64 position);
     void durationChanged(qint64 duration);
     void muteClicked();
     void setMuted(bool muted);

private:
    Ui::Settings  *ui;
    bool videoMuted = false;
    int vid_duration;
};

#endif // VIDEO_SETTINGS_H
