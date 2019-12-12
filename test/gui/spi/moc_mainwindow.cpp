/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      38,   30,   11,   11, 0x08,
      60,   30,   11,   11, 0x08,
      88,   30,   11,   11, 0x08,
     119,   30,   11,   11, 0x08,
     140,   30,   11,   11, 0x08,
     164,   30,   11,   11, 0x08,
     186,   30,   11,   11, 0x08,
     208,   30,   11,   11, 0x08,
     231,   11,   11,   11, 0x08,
     252,  247,   11,   11, 0x08,
     282,  247,   11,   11, 0x08,
     312,  247,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_send_clicked()\0checked\0"
    "on_loop_clicked(bool)\0on_clockphase_clicked(bool)\0"
    "on_clockpolarity_clicked(bool)\0"
    "on_lsb_clicked(bool)\0on_cshigh_clicked(bool)\0"
    "on_wire_clicked(bool)\0on_nocs_clicked(bool)\0"
    "on_ready_clicked(bool)\0update_params()\0"
    "arg1\0on_speed_textChanged(QString)\0"
    "on_delay_textChanged(QString)\0"
    "on_bits_textChanged(QString)\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_send_clicked(); break;
        case 1: _t->on_loop_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_clockphase_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_clockpolarity_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_lsb_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_cshigh_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_wire_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_nocs_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_ready_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->update_params(); break;
        case 10: _t->on_speed_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_delay_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->on_bits_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
