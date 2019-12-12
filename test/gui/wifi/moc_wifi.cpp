/****************************************************************************
** Meta object code from reading C++ file 'wifi.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wifi.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wifi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Wifi[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x08,
      28,    5,    5,    5, 0x08,
      53,    5,    5,    5, 0x08,
      75,    5,    5,    5, 0x08,
      96,    5,    5,    5, 0x08,
     116,    5,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Wifi[] = {
    "Wifi\0\0on_pbt_scan_clicked()\0"
    "on_pbt_connect_clicked()\0on_pbt_open_clicked()\0"
    "readScanningOutput()\0readConnectOutput()\0"
    "closeEvent(QCloseEvent*)\0"
};

void Wifi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Wifi *_t = static_cast<Wifi *>(_o);
        switch (_id) {
        case 0: _t->on_pbt_scan_clicked(); break;
        case 1: _t->on_pbt_connect_clicked(); break;
        case 2: _t->on_pbt_open_clicked(); break;
        case 3: _t->readScanningOutput(); break;
        case 4: _t->readConnectOutput(); break;
        case 5: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Wifi::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Wifi::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Wifi,
      qt_meta_data_Wifi, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Wifi::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Wifi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Wifi::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Wifi))
        return static_cast<void*>(const_cast< Wifi*>(this));
    return QWidget::qt_metacast(_clname);
}

int Wifi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
