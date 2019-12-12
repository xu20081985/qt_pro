/****************************************************************************
** Meta object code from reading C++ file 'gprs.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gprs.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gprs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gprs[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x08,
      27,    5,    5,    5, 0x08,
      49,    5,    5,    5, 0x08,
      71,    5,    5,    5, 0x08,
      93,    5,    5,    5, 0x08,
     114,    5,    5,    5, 0x08,
     127,    5,    5,    5, 0x08,
     145,    5,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Gprs[] = {
    "Gprs\0\0on_pbt_set_clicked()\0"
    "on_pbt_call_clicked()\0on_pbt_send_clicked()\0"
    "on_pbt_gprs_clicked()\0remoteDataIncoming()\0"
    "readOutput()\0on_ping_clicked()\0result()\0"
};

void Gprs::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Gprs *_t = static_cast<Gprs *>(_o);
        switch (_id) {
        case 0: _t->on_pbt_set_clicked(); break;
        case 1: _t->on_pbt_call_clicked(); break;
        case 2: _t->on_pbt_send_clicked(); break;
        case 3: _t->on_pbt_gprs_clicked(); break;
        case 4: _t->remoteDataIncoming(); break;
        case 5: _t->readOutput(); break;
        case 6: _t->on_ping_clicked(); break;
        case 7: _t->result(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gprs::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gprs::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Gprs,
      qt_meta_data_Gprs, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gprs::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gprs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gprs::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gprs))
        return static_cast<void*>(const_cast< Gprs*>(this));
    return QWidget::qt_metacast(_clname);
}

int Gprs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
