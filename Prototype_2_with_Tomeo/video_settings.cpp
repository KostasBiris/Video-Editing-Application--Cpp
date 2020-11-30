#include "video_settings.h"
#include "ui_toolbars.h"

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
