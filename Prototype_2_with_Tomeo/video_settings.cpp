#include "video_settings.h"
#include "ui_settings.h"

VideoSettings::VideoSettings(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Settings)
{
    ui->setupUi(this);
}


VideoSettings::~VideoSettings()
{
    delete ui;
}
