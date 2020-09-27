/****************************************************************************
** Meta object code from reading C++ file 'tetriscontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../tetriscontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tetriscontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TetrisController_t {
    QByteArrayData data[12];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TetrisController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TetrisController_t qt_meta_stringdata_TetrisController = {
    {
QT_MOC_LITERAL(0, 0, 16), // "TetrisController"
QT_MOC_LITERAL(1, 17, 7), // "onStart"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "onPause"
QT_MOC_LITERAL(4, 34, 8), // "onResume"
QT_MOC_LITERAL(5, 43, 6), // "onStep"
QT_MOC_LITERAL(6, 50, 10), // "onMoveLeft"
QT_MOC_LITERAL(7, 61, 11), // "onMoveRight"
QT_MOC_LITERAL(8, 73, 8), // "onRotate"
QT_MOC_LITERAL(9, 82, 13), // "onDropEnabled"
QT_MOC_LITERAL(10, 96, 7), // "enabled"
QT_MOC_LITERAL(11, 104, 13) // "onTogglePause"

    },
    "TetrisController\0onStart\0\0onPause\0"
    "onResume\0onStep\0onMoveLeft\0onMoveRight\0"
    "onRotate\0onDropEnabled\0enabled\0"
    "onTogglePause"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TetrisController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    1,   66,    2, 0x0a /* Public */,
      11,    0,   69,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,

       0        // eod
};

void TetrisController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TetrisController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onStart(); break;
        case 1: _t->onPause(); break;
        case 2: _t->onResume(); break;
        case 3: _t->onStep(); break;
        case 4: _t->onMoveLeft(); break;
        case 5: _t->onMoveRight(); break;
        case 6: _t->onRotate(); break;
        case 7: _t->onDropEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->onTogglePause(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TetrisController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TetrisController.data,
    qt_meta_data_TetrisController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TetrisController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TetrisController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TetrisController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TetrisController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
