#ifndef VIDEO_SETTINGS_H
#define VIDEO_SETTINGS_H


#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Settings; }
QT_END_NAMESPACE

class VideoSettings : public QWidget
{
    Q_OBJECT

public:
    VideoSettings(QWidget *parent = nullptr);

    ~VideoSettings();

private:
    Ui::Settings  *ui;
};

#endif // VIDEO_SETTINGS_H
