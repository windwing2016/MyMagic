/****************************************************************************
** Meta object code from reading C++ file 'Magic2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Magic/Code/Apps/MagicA/ui/Magic2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Magic2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Magic2_t {
    QByteArrayData data[13];
    char stringdata[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Magic2_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Magic2_t qt_meta_stringdata_Magic2 = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 16),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 4),
QT_MOC_LITERAL(4, 30, 7),
QT_MOC_LITERAL(5, 38, 12),
QT_MOC_LITERAL(6, 51, 4),
QT_MOC_LITERAL(7, 56, 14),
QT_MOC_LITERAL(8, 71, 6),
QT_MOC_LITERAL(9, 78, 24),
QT_MOC_LITERAL(10, 103, 17),
QT_MOC_LITERAL(11, 121, 20),
QT_MOC_LITERAL(12, 142, 8)
    },
    "Magic2\0MessageRequested\0\0text\0caption\0"
    "MessageTypes\0type\0MessageResult*\0"
    "result\0ThreadedMessageRequested\0"
    "OnLogoutRequested\0UpdateWindowPosition\0"
    "screenNo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Magic2[] = {

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
       1,    4,   39,    2, 0x06 /* Public */,
       9,    4,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   57,    2, 0x08 /* Private */,
      11,    1,   58,    2, 0x0a /* Public */,
      11,    0,   61,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 5, 0x80000000 | 7,    3,    4,    6,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 5, 0x80000000 | 7,    3,    4,    6,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,

       0        // eod
};

void Magic2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Magic2 *_t = static_cast<Magic2 *>(_o);
        switch (_id) {
        case 0: _t->MessageRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< MessageTypes(*)>(_a[3])),(*reinterpret_cast< MessageResult*(*)>(_a[4]))); break;
        case 1: _t->ThreadedMessageRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< MessageTypes(*)>(_a[3])),(*reinterpret_cast< MessageResult*(*)>(_a[4]))); break;
        case 2: _t->OnLogoutRequested(); break;
        case 3: _t->UpdateWindowPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->UpdateWindowPosition(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Magic2::*_t)(const QString & , const QString & , MessageTypes , MessageResult * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Magic2::MessageRequested)) {
                *result = 0;
            }
        }
        {
            typedef void (Magic2::*_t)(const QString & , const QString & , MessageTypes , MessageResult * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Magic2::ThreadedMessageRequested)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject Magic2::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Magic2.data,
      qt_meta_data_Magic2,  qt_static_metacall, 0, 0}
};


const QMetaObject *Magic2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Magic2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Magic2.stringdata))
        return static_cast<void*>(const_cast< Magic2*>(this));
    if (!strcmp(_clname, "IMessageView"))
        return static_cast< IMessageView*>(const_cast< Magic2*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Magic2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Magic2::MessageRequested(const QString & _t1, const QString & _t2, MessageTypes _t3, MessageResult * _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Magic2::ThreadedMessageRequested(const QString & _t1, const QString & _t2, MessageTypes _t3, MessageResult * _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
