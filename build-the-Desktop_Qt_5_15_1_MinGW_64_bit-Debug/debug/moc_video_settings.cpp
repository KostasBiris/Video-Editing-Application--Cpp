/****************************************************************************
** Meta object code from reading C++ file 'video_settings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../cycle_3_code/video_settings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'video_settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VideoSettings_t {
    QByteArrayData data[17];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VideoSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VideoSettings_t qt_meta_stringdata_VideoSettings = {
    {
QT_MOC_LITERAL(0, 0, 13), // "VideoSettings"
QT_MOC_LITERAL(1, 14, 12), // "changeVolume"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 6), // "volume"
QT_MOC_LITERAL(4, 35, 11), // "setPosition"
QT_MOC_LITERAL(5, 47, 8), // "position"
QT_MOC_LITERAL(6, 56, 12), // "changeMuting"
QT_MOC_LITERAL(7, 69, 6), // "muting"
QT_MOC_LITERAL(8, 76, 4), // "next"
QT_MOC_LITERAL(9, 81, 15), // "positionChanged"
QT_MOC_LITERAL(10, 97, 15), // "durationChanged"
QT_MOC_LITERAL(11, 113, 8), // "duration"
QT_MOC_LITERAL(12, 122, 11), // "muteClicked"
QT_MOC_LITERAL(13, 134, 16), // "playPauseClicked"
QT_MOC_LITERAL(14, 151, 9), // "setVolume"
QT_MOC_LITERAL(15, 161, 8), // "setMuted"
QT_MOC_LITERAL(16, 170, 5) // "muted"

    },
    "VideoSettings\0changeVolume\0\0volume\0"
    "setPosition\0position\0changeMuting\0"
    "muting\0next\0positionChanged\0durationChanged\0"
    "duration\0muteClicked\0playPauseClicked\0"
    "setVolume\0setMuted\0muted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       6,    1,   70,    2, 0x06 /* Public */,
       8,    0,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   74,    2, 0x08 /* Private */,
      10,    1,   77,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,
      14,    1,   82,    2, 0x08 /* Private */,
      15,    1,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,    5,
    QMetaType::Void, QMetaType::LongLong,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,   16,

       0        // eod
};

void VideoSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VideoSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->changeMuting((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->next(); break;
        case 4: _t->positionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->durationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: _t->muteClicked(); break;
        case 7: _t->playPauseClicked(); break;
        case 8: _t->setVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setMuted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VideoSettings::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoSettings::changeVolume)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VideoSettings::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoSettings::setPosition)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VideoSettings::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoSettings::changeMuting)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VideoSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoSettings::next)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VideoSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_VideoSettings.data,
    qt_meta_data_VideoSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VideoSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VideoSettings.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int VideoSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void VideoSettings::changeVolume(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VideoSettings::setPosition(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VideoSettings::changeMuting(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VideoSettings::next()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
