/****************************************************************************
** Meta object code from reading C++ file 'execnormalprotocol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../protocol/execnormalprotocol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'execnormalprotocol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ExecNormalProtocol_t {
    QByteArrayData data[7];
    char stringdata[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExecNormalProtocol_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExecNormalProtocol_t qt_meta_stringdata_ExecNormalProtocol = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ExecNormalProtocol"
QT_MOC_LITERAL(1, 19, 22), // "signalUserLoginSuccess"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 8), // "UserInfo"
QT_MOC_LITERAL(4, 52, 4), // "info"
QT_MOC_LITERAL(5, 57, 21), // "signalRegisterSuccess"
QT_MOC_LITERAL(6, 79, 2) // "id"

    },
    "ExecNormalProtocol\0signalUserLoginSuccess\0"
    "\0UserInfo\0info\0signalRegisterSuccess\0"
    "id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExecNormalProtocol[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void ExecNormalProtocol::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExecNormalProtocol *_t = static_cast<ExecNormalProtocol *>(_o);
        switch (_id) {
        case 0: _t->signalUserLoginSuccess((*reinterpret_cast< UserInfo(*)>(_a[1]))); break;
        case 1: _t->signalRegisterSuccess((*reinterpret_cast< QString(*)>(_a[1]))); break;
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
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ExecNormalProtocol::*_t)(UserInfo );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ExecNormalProtocol::signalUserLoginSuccess)) {
                *result = 0;
            }
        }
        {
            typedef void (ExecNormalProtocol::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ExecNormalProtocol::signalRegisterSuccess)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ExecNormalProtocol::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ExecNormalProtocol.data,
      qt_meta_data_ExecNormalProtocol,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ExecNormalProtocol::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExecNormalProtocol::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ExecNormalProtocol.stringdata))
        return static_cast<void*>(const_cast< ExecNormalProtocol*>(this));
    return QObject::qt_metacast(_clname);
}

int ExecNormalProtocol::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ExecNormalProtocol::signalUserLoginSuccess(UserInfo _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ExecNormalProtocol::signalRegisterSuccess(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
