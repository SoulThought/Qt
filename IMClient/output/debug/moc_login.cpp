/****************************************************************************
** Meta object code from reading C++ file 'login.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../wlogin/login.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Login_t {
    QByteArrayData data[10];
    char stringdata[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Login_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Login_t qt_meta_stringdata_Login = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Login"
QT_MOC_LITERAL(1, 6, 19), // "signalConnectServer"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 2), // "id"
QT_MOC_LITERAL(4, 30, 4), // "pswd"
QT_MOC_LITERAL(5, 35, 18), // "signalCloseProject"
QT_MOC_LITERAL(6, 54, 20), // "signalRegisterWidget"
QT_MOC_LITERAL(7, 75, 19), // "on_pb_enter_clicked"
QT_MOC_LITERAL(8, 95, 20), // "on_pb_cancle_clicked"
QT_MOC_LITERAL(9, 116, 22) // "on_pb_register_clicked"

    },
    "Login\0signalConnectServer\0\0id\0pswd\0"
    "signalCloseProject\0signalRegisterWidget\0"
    "on_pb_enter_clicked\0on_pb_cancle_clicked\0"
    "on_pb_register_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Login[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       5,    0,   49,    2, 0x06 /* Public */,
       6,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   51,    2, 0x08 /* Private */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Login::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Login *_t = static_cast<Login *>(_o);
        switch (_id) {
        case 0: _t->signalConnectServer((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->signalCloseProject(); break;
        case 2: _t->signalRegisterWidget(); break;
        case 3: _t->on_pb_enter_clicked(); break;
        case 4: _t->on_pb_cancle_clicked(); break;
        case 5: _t->on_pb_register_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Login::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Login::signalConnectServer)) {
                *result = 0;
            }
        }
        {
            typedef void (Login::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Login::signalCloseProject)) {
                *result = 1;
            }
        }
        {
            typedef void (Login::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Login::signalRegisterWidget)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject Login::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Login.data,
      qt_meta_data_Login,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Login::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Login::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Login.stringdata))
        return static_cast<void*>(const_cast< Login*>(this));
    return QWidget::qt_metacast(_clname);
}

int Login::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Login::signalConnectServer(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Login::signalCloseProject()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Login::signalRegisterWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
