/****************************************************************************
** Meta object code from reading C++ file 'ClusterStubImpl.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/ClusterStubImpl.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ClusterStubImpl.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ClusterStubImpl_t {
    QByteArrayData data[8];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClusterStubImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClusterStubImpl_t qt_meta_stringdata_ClusterStubImpl = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ClusterStubImpl"
QT_MOC_LITERAL(1, 16, 11), // "signalSpeed"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 9), // "signalRPM"
QT_MOC_LITERAL(4, 39, 13), // "signalButtons"
QT_MOC_LITERAL(5, 53, 11), // "std::string"
QT_MOC_LITERAL(6, 65, 11), // "signalImage"
QT_MOC_LITERAL(7, 77, 20) // "std::vector<uint8_t>"

    },
    "ClusterStubImpl\0signalSpeed\0\0signalRPM\0"
    "signalButtons\0std::string\0signalImage\0"
    "std::vector<uint8_t>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClusterStubImpl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    1,   37,    2, 0x06 /* Public */,
       4,    1,   40,    2, 0x06 /* Public */,
       6,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7,    2,

       0        // eod
};

void ClusterStubImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClusterStubImpl *_t = static_cast<ClusterStubImpl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->signalRPM((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->signalButtons((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 3: _t->signalImage((*reinterpret_cast< std::vector<uint8_t>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ClusterStubImpl::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClusterStubImpl::signalSpeed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ClusterStubImpl::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClusterStubImpl::signalRPM)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ClusterStubImpl::*_t)(std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClusterStubImpl::signalButtons)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ClusterStubImpl::*_t)(std::vector<uint8_t> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClusterStubImpl::signalImage)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject ClusterStubImpl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ClusterStubImpl.data,
      qt_meta_data_ClusterStubImpl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ClusterStubImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClusterStubImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClusterStubImpl.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "v1_0::commonapi::ClusterStubDefault"))
        return static_cast< v1_0::commonapi::ClusterStubDefault*>(this);
    return QObject::qt_metacast(_clname);
}

int ClusterStubImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ClusterStubImpl::signalSpeed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClusterStubImpl::signalRPM(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ClusterStubImpl::signalButtons(std::string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ClusterStubImpl::signalImage(std::vector<uint8_t> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
