/****************************************************************************
** Meta object code from reading C++ file 'Transform_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Transform_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Transform_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_Transform_t {
    QByteArrayData data[12];
    char stringdata0[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_Transform_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_Transform_t qt_meta_stringdata_osg__QReflect_Transform = {
    {
QT_MOC_LITERAL(0, 0, 23), // "osg::QReflect_Transform"
QT_MOC_LITERAL(1, 24, 11), // "updateModel"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 11), // "asTransform"
QT_MOC_LITERAL(4, 49, 24), // "osg::QReflect_Transform*"
QT_MOC_LITERAL(5, 74, 17), // "getReferenceFrame"
QT_MOC_LITERAL(6, 92, 39), // "osg::QReflect_Transform::Refe..."
QT_MOC_LITERAL(7, 132, 17), // "setReferenceFrame"
QT_MOC_LITERAL(8, 150, 14), // "ReferenceFrame"
QT_MOC_LITERAL(9, 165, 11), // "RELATIVE_RF"
QT_MOC_LITERAL(10, 177, 11), // "ABSOLUTE_RF"
QT_MOC_LITERAL(11, 189, 29) // "ABSOLUTE_RF_INHERIT_VIEWPOINT"

    },
    "osg::QReflect_Transform\0updateModel\0"
    "\0asTransform\0osg::QReflect_Transform*\0"
    "getReferenceFrame\0"
    "osg::QReflect_Transform::ReferenceFrame\0"
    "setReferenceFrame\0ReferenceFrame\0"
    "RELATIVE_RF\0ABSOLUTE_RF\0"
    "ABSOLUTE_RF_INHERIT_VIEWPOINT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_Transform[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       1,   46, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x02 /* Public */,
       3,    0,   41,    2, 0x02 /* Public */,
       5,    0,   42,    2, 0x02 /* Public */,
       7,    1,   43,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 4,
    0x80000000 | 4,
    0x80000000 | 6,
    QMetaType::Void, 0x80000000 | 6,    2,

 // enums: name, flags, count, data
       8, 0x0,    3,   50,

 // enum data: key, value
       9, uint(osg::QReflect_Transform::RELATIVE_RF),
      10, uint(osg::QReflect_Transform::ABSOLUTE_RF),
      11, uint(osg::QReflect_Transform::ABSOLUTE_RF_INHERIT_VIEWPOINT),

       0        // eod
};

void osg::QReflect_Transform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_Transform *_t = static_cast<QReflect_Transform *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { osg::QReflect_Transform* _r = _t->asTransform();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Transform**>(_a[0]) = _r; }  break;
        case 2: { osg::QReflect_Transform* _r = _t->asTransform();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Transform**>(_a[0]) = _r; }  break;
        case 3: { osg::QReflect_Transform::ReferenceFrame _r = _t->getReferenceFrame();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Transform::ReferenceFrame*>(_a[0]) = _r; }  break;
        case 4: _t->setReferenceFrame((*reinterpret_cast< osg::QReflect_Transform::ReferenceFrame(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_Transform::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_Transform.data,
      qt_meta_data_osg__QReflect_Transform,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_Transform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_Transform::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_Transform.stringdata0))
        return static_cast<void*>(const_cast< QReflect_Transform*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_Transform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
