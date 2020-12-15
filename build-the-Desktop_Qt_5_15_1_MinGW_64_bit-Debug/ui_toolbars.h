/********************************************************************************
** Form generated from reading UI file 'toolbars.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLBARS_H
#define UI_TOOLBARS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QPushButton *mutebutton;
    QLabel *label;
    QLabel *label_2;
    QPushButton *forwardButton;
    QPushButton *prevButton;

    void setupUi(QWidget *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->resize(800, 45);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Settings->sizePolicy().hasHeightForWidth());
        Settings->setSizePolicy(sizePolicy);
        Settings->setMinimumSize(QSize(800, 40));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(18, 18, 18, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(81, 85, 94, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(67, 71, 78, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(27, 28, 31, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(36, 38, 42, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush8(QColor(255, 255, 255, 128));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        QBrush brush9(QColor(54, 57, 63, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        Settings->setPalette(palette);
        Settings->setStyleSheet(QString::fromUtf8("background-color:rgb(18, 18, 18);"));
        pushButton = new QPushButton(Settings);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 0, 40, 40));
        pushButton->setMinimumSize(QSize(40, 40));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(98, 0, 238);\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:19px;\n"
" border-color: rgb(98, 0, 238);\n"
" max-width:38px;\n"
" max-height:38px;\n"
" min-width:38px;\n"
" min-height:38px;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/resources/play_arrow-24px.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton_2 = new QPushButton(Settings);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 0, 40, 40));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(40, 40));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(98, 0, 238);\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:19px;\n"
" border-color: rgb(98, 0, 238);\n"
" max-width:38px;\n"
" max-height:38px;\n"
" min-width:38px;\n"
" min-height:38px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(114, 26, 239);\n"
"	color: white;\n"
"	background-repeat: no-repeat;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/resources/pause_circle_filled-24px.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_3 = new QPushButton(Settings);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(540, 0, 40, 40));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(40, 40));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setAutoFillBackground(false);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(98, 0, 238);\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:19px;\n"
" border-color: rgb(98, 0, 238);\n"
" max-width:38px;\n"
" max-height:38px;\n"
" min-width:38px;\n"
" min-height:38px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(114, 26, 239);\n"
"	color: white;\n"
"	background-repeat: no-repeat;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/resources/video_library-24px.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        horizontalSlider = new QSlider(Settings);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(60, 10, 111, 16));
        horizontalSlider->setCursor(QCursor(Qt::ClosedHandCursor));
        horizontalSlider->setStyleSheet(QString::fromUtf8("QSlider::handle:horizontal {background-color: rgb(3, 218, 198);}\n"
""));
        horizontalSlider->setValue(99);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider_2 = new QSlider(Settings);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(280, 10, 240, 16));
        sizePolicy.setHeightForWidth(horizontalSlider_2->sizePolicy().hasHeightForWidth());
        horizontalSlider_2->setSizePolicy(sizePolicy);
        horizontalSlider_2->setMinimumSize(QSize(240, 0));
        horizontalSlider_2->setCursor(QCursor(Qt::ClosedHandCursor));
        horizontalSlider_2->setStyleSheet(QString::fromUtf8("QSlider::handle:horizontal {background-color: rgb(3, 218, 198);}\n"
""));
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        mutebutton = new QPushButton(Settings);
        mutebutton->setObjectName(QString::fromUtf8("mutebutton"));
        mutebutton->setGeometry(QRect(230, 0, 40, 40));
        sizePolicy.setHeightForWidth(mutebutton->sizePolicy().hasHeightForWidth());
        mutebutton->setSizePolicy(sizePolicy);
        mutebutton->setMinimumSize(QSize(40, 40));
        mutebutton->setCursor(QCursor(Qt::PointingHandCursor));
        mutebutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(98, 0, 238);\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:19px;\n"
" border-color: rgb(98, 0, 238);\n"
" max-width:38px;\n"
" max-height:38px;\n"
" min-width:38px;\n"
" min-height:38px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(114, 26, 239);\n"
"	color: white;\n"
"	background-repeat: no-repeat;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/resources/volume_off-24px.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mutebutton->setIcon(icon3);
        label = new QLabel(Settings);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(590, 10, 81, 20));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(8);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
" background-color: rgb(98, 0, 238);\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:19px;\n"
" border-color: rgb(98, 0, 238);\n"
" \n"
"}"));
        label_2 = new QLabel(Settings);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 0, 40, 40));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(11);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
" background-color: rgb(98, 0, 238);\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:19px;\n"
" border-color: rgb(98, 0, 238);\n"
" max-width:38px;\n"
" max-height:38px;\n"
" min-width:38px;\n"
" min-height:38px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(114, 26, 239);\n"
"	color: white;\n"
"	background-repeat: no-repeat;\n"
"}"));
        label_2->setAlignment(Qt::AlignCenter);
        forwardButton = new QPushButton(Settings);
        forwardButton->setObjectName(QString::fromUtf8("forwardButton"));
        forwardButton->setGeometry(QRect(720, 0, 40, 40));
        forwardButton->setMinimumSize(QSize(40, 40));
        forwardButton->setCursor(QCursor(Qt::PointingHandCursor));
        forwardButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(98, 0, 238);\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:19px;\n"
" border-color: rgb(98, 0, 238);\n"
" max-width:38px;\n"
" max-height:38px;\n"
" min-width:38px;\n"
" min-height:38px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(114, 26, 239);\n"
"	color: white;\n"
"	background-repeat: no-repeat;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/resources/skip_next-24px.svg"), QSize(), QIcon::Normal, QIcon::Off);
        forwardButton->setIcon(icon4);
        prevButton = new QPushButton(Settings);
        prevButton->setObjectName(QString::fromUtf8("prevButton"));
        prevButton->setGeometry(QRect(680, 0, 40, 40));
        prevButton->setMinimumSize(QSize(40, 40));
        prevButton->setCursor(QCursor(Qt::PointingHandCursor));
        prevButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(98, 0, 238);\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:19px;\n"
" border-color: rgb(98, 0, 238);\n"
" max-width:38px;\n"
" max-height:38px;\n"
" min-width:38px;\n"
" min-height:38px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(114, 26, 239);\n"
"	color: white;\n"
"	background-repeat: no-repeat;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/resources/skip_previous-24px.svg"), QSize(), QIcon::Normal, QIcon::Off);
        prevButton->setIcon(icon5);

        retranslateUi(Settings);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), label_2, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QWidget *Settings)
    {
        Settings->setWindowTitle(QCoreApplication::translate("Settings", "Form", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
#if QT_CONFIG(tooltip)
        mutebutton->setToolTip(QCoreApplication::translate("Settings", "<html><head/><body><p><img src=\":/new/prefix1/resources/volume_off-24px.svg\"/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mutebutton->setText(QString());
        label->setText(QCoreApplication::translate("Settings", "00:00/00:00", nullptr));
        label_2->setText(QCoreApplication::translate("Settings", "99", nullptr));
        forwardButton->setText(QString());
        prevButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLBARS_H
