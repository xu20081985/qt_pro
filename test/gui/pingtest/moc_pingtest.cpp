/****************************************************************************
** Meta object code from reading C++ file 'pingtest.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pingtest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pingtest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pingtest[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      31,    9,    9,    9, 0x08,
      49,    9,    9,    9, 0x08,
      68,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pingtest[] = {
    "pingtest\0\0on_pingbtn_clicked()\0"
    "on_stop_clicked()\0on_clear_clicked()\0"
    "result()\0"
};

void pingtest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pingtest *_t = static_cast<pingtest *>(_o);
        switch (_id) {
        case 0: _t->on_pingbtn_clicked(); break;
        case 1: _t->on_stop_clicked(); break;
        case 2: _t->on_clear_clicked(); break;
        case 3: _t->result(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData pingtest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pingtest::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pingtest,
      qt_meta_data_pingtest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pingtest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pingtest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pingtest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pingtest))
        return static_cast<void*>(const_cast< pingtest*>(this));
    return QWidget::qt_metacast(_clname);
}

int pingtest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
