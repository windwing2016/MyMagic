/****************************************************************************
** Meta object code from reading C++ file 'NotifiableProperties.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../McfCore/mcf/ViewModels/NotifiableProperties.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NotifiableProperties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Mcf__Test_t {
    QByteArrayData data[1];
    char stringdata[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mcf__Test_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mcf__Test_t qt_meta_stringdata_Mcf__Test = {
    {
QT_MOC_LITERAL(0, 0, 9)
    },
    "Mcf::Test"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mcf__Test[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Mcf::Test::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Mcf::Test::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Mcf__Test.data,
      qt_meta_data_Mcf__Test,  qt_static_metacall, 0, 0}
};


const QMetaObject *Mcf::Test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mcf::Test::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Mcf__Test.stringdata))
        return static_cast<void*>(const_cast< Test*>(this));
    return QObject::qt_metacast(_clname);
}

int Mcf::Test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_Mcf__BoolProperty_t {
    QByteArrayData data[12];
    char stringdata[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mcf__BoolProperty_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mcf__BoolProperty_t qt_meta_stringdata_Mcf__BoolProperty = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 12),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 8),
QT_MOC_LITERAL(4, 41, 7),
QT_MOC_LITERAL(5, 49, 8),
QT_MOC_LITERAL(6, 58, 8),
QT_MOC_LITERAL(7, 67, 5),
QT_MOC_LITERAL(8, 73, 9),
QT_MOC_LITERAL(9, 83, 10),
QT_MOC_LITERAL(10, 94, 8),
QT_MOC_LITERAL(11, 103, 28)
    },
    "Mcf::BoolProperty\0ValueChanged\0\0"
    "newValue\0TrueSet\0FalseSet\0SetValue\0"
    "value\0SetToTrue\0SetToFalse\0MCF_UINT\0"
    "OnLinkedPropertyValueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mcf__BoolProperty[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    0,   57,    2, 0x06 /* Public */,
       5,    0,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   59,    2, 0x0a /* Public */,
       8,    0,   62,    2, 0x0a /* Public */,
       9,    0,   63,    2, 0x0a /* Public */,
       6,    1,   64,    2, 0x0a /* Public */,
      11,    1,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,    7,
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void Mcf::BoolProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BoolProperty *_t = static_cast<BoolProperty *>(_o);
        switch (_id) {
        case 0: _t->ValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->TrueSet(); break;
        case 2: _t->FalseSet(); break;
        case 3: _t->SetValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->SetToTrue(); break;
        case 5: _t->SetToFalse(); break;
        case 6: _t->SetValue((*reinterpret_cast< MCF_UINT(*)>(_a[1]))); break;
        case 7: _t->OnLinkedPropertyValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BoolProperty::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BoolProperty::ValueChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (BoolProperty::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BoolProperty::TrueSet)) {
                *result = 1;
            }
        }
        {
            typedef void (BoolProperty::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BoolProperty::FalseSet)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject Mcf::BoolProperty::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Mcf__BoolProperty.data,
      qt_meta_data_Mcf__BoolProperty,  qt_static_metacall, 0, 0}
};


const QMetaObject *Mcf::BoolProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mcf::BoolProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Mcf__BoolProperty.stringdata))
        return static_cast<void*>(const_cast< BoolProperty*>(this));
    return QObject::qt_metacast(_clname);
}

int Mcf::BoolProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Mcf::BoolProperty::ValueChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Mcf::BoolProperty::TrueSet()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Mcf::BoolProperty::FalseSet()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
struct qt_meta_stringdata_Mcf__IntProperty_t {
    QByteArrayData data[7];
    char stringdata[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mcf__IntProperty_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mcf__IntProperty_t qt_meta_stringdata_Mcf__IntProperty = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 12),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 8),
QT_MOC_LITERAL(4, 40, 8),
QT_MOC_LITERAL(5, 49, 5),
QT_MOC_LITERAL(6, 55, 8)
    },
    "Mcf::IntProperty\0ValueChanged\0\0newValue\0"
    "SetValue\0value\0MCF_UINT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mcf__IntProperty[] = {

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
       1,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   45,    2, 0x0a /* Public */,
       4,    1,   48,    2, 0x0a /* Public */,
       4,    1,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 6,    5,

       0        // eod
};

void Mcf::IntProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IntProperty *_t = static_cast<IntProperty *>(_o);
        switch (_id) {
        case 0: _t->ValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->ValueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->SetValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->SetValue((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->SetValue((*reinterpret_cast< MCF_UINT(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (IntProperty::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IntProperty::ValueChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (IntProperty::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IntProperty::ValueChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject Mcf::IntProperty::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Mcf__IntProperty.data,
      qt_meta_data_Mcf__IntProperty,  qt_static_metacall, 0, 0}
};


const QMetaObject *Mcf::IntProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mcf::IntProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Mcf__IntProperty.stringdata))
        return static_cast<void*>(const_cast< IntProperty*>(this));
    return QObject::qt_metacast(_clname);
}

int Mcf::IntProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void Mcf::IntProperty::ValueChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Mcf::IntProperty::ValueChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
