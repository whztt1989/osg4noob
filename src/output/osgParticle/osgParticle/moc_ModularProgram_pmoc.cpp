/****************************************************************************
** Meta object code from reading C++ file 'ModularProgram_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ModularProgram_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModularProgram_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgParticle__QReflect_ModularProgram_t {
    QByteArrayData data[8];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgParticle__QReflect_ModularProgram_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgParticle__QReflect_ModularProgram_t qt_meta_stringdata_osgParticle__QReflect_ModularProgram = {
    {
QT_MOC_LITERAL(0, 0, 36), // "osgParticle::QReflect_Modular..."
QT_MOC_LITERAL(1, 37, 11), // "updateModel"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 12), // "numOperators"
QT_MOC_LITERAL(4, 63, 11), // "getOperator"
QT_MOC_LITERAL(5, 75, 31), // "osgParticle::QReflect_Operator*"
QT_MOC_LITERAL(6, 107, 11), // "addOperator"
QT_MOC_LITERAL(7, 119, 14) // "removeOperator"

    },
    "osgParticle::QReflect_ModularProgram\0"
    "updateModel\0\0numOperators\0getOperator\0"
    "osgParticle::QReflect_Operator*\0"
    "addOperator\0removeOperator"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgParticle__QReflect_ModularProgram[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x02 /* Public */,
       4,    1,   46,    2, 0x02 /* Public */,
       4,    1,   49,    2, 0x02 /* Public */,
       6,    1,   52,    2, 0x02 /* Public */,
       7,    1,   55,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int,
    0x80000000 | 5, QMetaType::Int,    2,
    0x80000000 | 5, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void osgParticle::QReflect_ModularProgram::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_ModularProgram *_t = static_cast<QReflect_ModularProgram *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { int _r = _t->numOperators();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { osgParticle::QReflect_Operator* _r = _t->getOperator((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< osgParticle::QReflect_Operator**>(_a[0]) = _r; }  break;
        case 3: { osgParticle::QReflect_Operator* _r = _t->getOperator((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< osgParticle::QReflect_Operator**>(_a[0]) = _r; }  break;
        case 4: _t->addOperator((*reinterpret_cast< osgParticle::QReflect_Operator*(*)>(_a[1]))); break;
        case 5: _t->removeOperator((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osgParticle::QReflect_ModularProgram::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osgParticle__QReflect_ModularProgram.data,
      qt_meta_data_osgParticle__QReflect_ModularProgram,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgParticle::QReflect_ModularProgram::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgParticle::QReflect_ModularProgram::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgParticle__QReflect_ModularProgram.stringdata0))
        return static_cast<void*>(const_cast< QReflect_ModularProgram*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osgParticle::QReflect_ModularProgram::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
