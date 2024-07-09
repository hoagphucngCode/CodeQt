/****************************************************************************
** Meta object code from reading C++ file 'buttonhandler.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../buttonhandler.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buttonhandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSButtonHandlerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSButtonHandlerENDCLASS = QtMocHelpers::stringData(
    "ButtonHandler",
    "playlistShuffled",
    "",
    "prevButton",
    "nextButton",
    "playListButton",
    "addPlaylistItem",
    "item",
    "recLeftStateChanged",
    "recRightStateChanged",
    "shuffleButton",
    "prev",
    "next",
    "togglePlayList",
    "addPlaylist",
    "recLeftState",
    "recRightState"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSButtonHandlerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       2,  100, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,    3 /* Public */,
       3,    0,   87,    2, 0x06,    4 /* Public */,
       4,    0,   88,    2, 0x06,    5 /* Public */,
       5,    0,   89,    2, 0x06,    6 /* Public */,
       6,    1,   90,    2, 0x06,    7 /* Public */,
       8,    0,   93,    2, 0x06,    9 /* Public */,
       9,    0,   94,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,   95,    2, 0x0a,   11 /* Public */,
      11,    0,   96,    2, 0x0a,   12 /* Public */,
      12,    0,   97,    2, 0x0a,   13 /* Public */,
      13,    0,   98,    2, 0x0a,   14 /* Public */,
      14,    0,   99,    2, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantMap,    7,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      15, QMetaType::QString, 0x00015103, uint(5), 0,
      16, QMetaType::QString, 0x00015103, uint(6), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ButtonHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSButtonHandlerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSButtonHandlerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSButtonHandlerENDCLASS_t,
        // property 'recLeftState'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'recRightState'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ButtonHandler, std::true_type>,
        // method 'playlistShuffled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'prevButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'nextButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'playListButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addPlaylistItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>,
        // method 'recLeftStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'recRightStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'shuffleButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'prev'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'next'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'togglePlayList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addPlaylist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ButtonHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ButtonHandler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->playlistShuffled(); break;
        case 1: _t->prevButton(); break;
        case 2: _t->nextButton(); break;
        case 3: _t->playListButton(); break;
        case 4: _t->addPlaylistItem((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 5: _t->recLeftStateChanged(); break;
        case 6: _t->recRightStateChanged(); break;
        case 7: _t->shuffleButton(); break;
        case 8: _t->prev(); break;
        case 9: _t->next(); break;
        case 10: _t->togglePlayList(); break;
        case 11: _t->addPlaylist(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ButtonHandler::*)();
            if (_t _q_method = &ButtonHandler::playlistShuffled; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ButtonHandler::*)();
            if (_t _q_method = &ButtonHandler::prevButton; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ButtonHandler::*)();
            if (_t _q_method = &ButtonHandler::nextButton; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ButtonHandler::*)();
            if (_t _q_method = &ButtonHandler::playListButton; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ButtonHandler::*)(const QVariantMap & );
            if (_t _q_method = &ButtonHandler::addPlaylistItem; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ButtonHandler::*)();
            if (_t _q_method = &ButtonHandler::recLeftStateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ButtonHandler::*)();
            if (_t _q_method = &ButtonHandler::recRightStateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ButtonHandler *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->recLeftState(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->recRightState(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ButtonHandler *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRecLeftState(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setRecRightState(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ButtonHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ButtonHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSButtonHandlerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ButtonHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ButtonHandler::playlistShuffled()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ButtonHandler::prevButton()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ButtonHandler::nextButton()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ButtonHandler::playListButton()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ButtonHandler::addPlaylistItem(const QVariantMap & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ButtonHandler::recLeftStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ButtonHandler::recRightStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
