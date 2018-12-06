/****************************************************************************
** Meta object code from reading C++ file 'connectserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../network/connectserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ConnectServer_t {
    QByteArrayData data[12];
    char stringdata[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConnectServer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConnectServer_t qt_meta_stringdata_ConnectServer = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ConnectServer"
QT_MOC_LITERAL(1, 14, 22), // "signalUserLoginSuccess"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 8), // "UserInfo"
QT_MOC_LITERAL(4, 47, 4), // "info"
QT_MOC_LITERAL(5, 52, 21), // "signalRegisterSuccess"
QT_MOC_LITERAL(6, 74, 2), // "id"
QT_MOC_LITERAL(7, 77, 13), // "slotReadyRead"
QT_MOC_LITERAL(8, 91, 17), // "slotConnectServer"
QT_MOC_LITERAL(9, 109, 4), // "pswd"
QT_MOC_LITERAL(10, 114, 20), // "slotConnectServerReg"
QT_MOC_LITERAL(11, 135, 4) // "name"

    },
    "ConnectServer\0signalUserLoginSuccess\0"
    "\0UserInfo\0info\0signalRegisterSuccess\0"
    "id\0slotReadyRead\0slotConnectServer\0"
    "pswd\0slotConnectServerReg\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConnectServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   45,    2, 0x0a /* Public */,
       8,    2,   46,    2, 0x0a /* Public */,
      10,    2,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,    9,

       0        // eod
};

void ConnectServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ConnectServer *_t = static_cast<ConnectServer *>(_o);
        switch (_id) {
        case 0: _t->signalUserLoginSuccess((*reinterpret_cast< UserInfo(*)>(_a[1]))); break;
        case 1: _t->signalRegisterSuccess((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->slotReadyRead(); break;
        case 3: _t->slotConnectServer((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->slotConnectServerReg((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
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
            typedef void (ConnectServer::*_t)(UserInfo );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConnectServer::signalUserLoginSuccess)) {
                *result = 0;
            }
        }
        {
            typedef void (ConnectServer::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConnectServer::signalRegisterSuccess)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ConnectServer::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ConnectServer.data,
      qt_meta_data_ConnectServer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ConnectServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConnectServer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ConnectServer.stringdata))
        return static_cast<void*>(const_cast< ConnectServer*>(this));
    return QThread::qt_metacast(_clname);
}

int ConnectServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ConnectServer::signalUserLoginSuccess(UserInfo _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ConnectServer::signalRegisterSuccess(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
