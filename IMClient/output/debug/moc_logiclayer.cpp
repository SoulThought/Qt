/****************************************************************************
** Meta object code from reading C++ file 'logiclayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../logiclayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logiclayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LogicLayer_t {
    QByteArrayData data[9];
    char stringdata[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogicLayer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogicLayer_t qt_meta_stringdata_LogicLayer = {
    {
QT_MOC_LITERAL(0, 0, 10), // "LogicLayer"
QT_MOC_LITERAL(1, 11, 20), // "slotUserLoginSuccess"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8), // "UserInfo"
QT_MOC_LITERAL(4, 42, 4), // "info"
QT_MOC_LITERAL(5, 47, 19), // "slotRegisterSuccess"
QT_MOC_LITERAL(6, 67, 2), // "id"
QT_MOC_LITERAL(7, 70, 17), // "slotClickUserInfo"
QT_MOC_LITERAL(8, 88, 16) // "slotCloseProject"

    },
    "LogicLayer\0slotUserLoginSuccess\0\0"
    "UserInfo\0info\0slotRegisterSuccess\0id\0"
    "slotClickUserInfo\0slotCloseProject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogicLayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       5,    1,   37,    2, 0x0a /* Public */,
       7,    1,   40,    2, 0x0a /* Public */,
       8,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void LogicLayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LogicLayer *_t = static_cast<LogicLayer *>(_o);
        switch (_id) {
        case 0: _t->slotUserLoginSuccess((*reinterpret_cast< UserInfo(*)>(_a[1]))); break;
        case 1: _t->slotRegisterSuccess((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->slotClickUserInfo((*reinterpret_cast< UserInfo(*)>(_a[1]))); break;
        case 3: _t->slotCloseProject(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UserInfo >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UserInfo >(); break;
            }
            break;
        }
    }
}

const QMetaObject LogicLayer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LogicLayer.data,
      qt_meta_data_LogicLayer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LogicLayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogicLayer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LogicLayer.stringdata))
        return static_cast<void*>(const_cast< LogicLayer*>(this));
    return QObject::qt_metacast(_clname);
}

int LogicLayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
