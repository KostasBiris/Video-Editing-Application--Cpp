QT += core gui widgets multimedia multimediawidgets

CONFIG += c++11


# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        mainwindow.cpp \
        the_button.cpp \
        the_player.cpp \
        thumbnails_layout.cpp \
        tomeo.cpp \
        video_settings.cpp \
        vidlayout.cpp

HEADERS += \
    mainwindow.h \
    the_button.h \
    the_player.h \
    thumbnails_layout.h \
    video_settings.h \
    vidlayout.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    material_design.qrc

FORMS += \
    mainwindow.ui \
    toolbars.ui

