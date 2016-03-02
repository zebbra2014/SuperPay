/****************************************************************************
** Meta object code from reading C++ file 'coincontroldialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/coincontroldialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'coincontroldialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CoinControlDialog_t {
    QByteArrayData data[23];
    char stringdata[354];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CoinControlDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CoinControlDialog_t qt_meta_stringdata_CoinControlDialog = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 11),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 8),
QT_MOC_LITERAL(4, 40, 10),
QT_MOC_LITERAL(5, 51, 9),
QT_MOC_LITERAL(6, 61, 11),
QT_MOC_LITERAL(7, 73, 19),
QT_MOC_LITERAL(8, 93, 17),
QT_MOC_LITERAL(9, 111, 15),
QT_MOC_LITERAL(10, 127, 12),
QT_MOC_LITERAL(11, 140, 17),
QT_MOC_LITERAL(12, 158, 14),
QT_MOC_LITERAL(13, 173, 17),
QT_MOC_LITERAL(14, 191, 18),
QT_MOC_LITERAL(15, 210, 15),
QT_MOC_LITERAL(16, 226, 13),
QT_MOC_LITERAL(17, 240, 13),
QT_MOC_LITERAL(18, 254, 15),
QT_MOC_LITERAL(19, 270, 16),
QT_MOC_LITERAL(20, 287, 20),
QT_MOC_LITERAL(21, 308, 21),
QT_MOC_LITERAL(22, 330, 22)
    },
    "CoinControlDialog\0beforeClose\0\0showMenu\0"
    "copyAmount\0copyLabel\0copyAddress\0"
    "copyTransactionHash\0clipboardQuantity\0"
    "clipboardAmount\0clipboardFee\0"
    "clipboardAfterFee\0clipboardBytes\0"
    "clipboardPriority\0clipboardLowOutput\0"
    "clipboardChange\0radioTreeMode\0"
    "radioListMode\0viewItemChanged\0"
    "QTreeWidgetItem*\0headerSectionClicked\0"
    "on_buttonBox_accepted\0buttonSelectAllClicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CoinControlDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  114,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    1,  115,    2, 0x08,
       4,    0,  118,    2, 0x08,
       5,    0,  119,    2, 0x08,
       6,    0,  120,    2, 0x08,
       7,    0,  121,    2, 0x08,
       8,    0,  122,    2, 0x08,
       9,    0,  123,    2, 0x08,
      10,    0,  124,    2, 0x08,
      11,    0,  125,    2, 0x08,
      12,    0,  126,    2, 0x08,
      13,    0,  127,    2, 0x08,
      14,    0,  128,    2, 0x08,
      15,    0,  129,    2, 0x08,
      16,    1,  130,    2, 0x08,
      17,    1,  133,    2, 0x08,
      18,    2,  136,    2, 0x08,
      20,    1,  141,    2, 0x08,
      21,    0,  144,    2, 0x08,
      22,    0,  145,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 19, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CoinControlDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CoinControlDialog *_t = static_cast<CoinControlDialog *>(_o);
        switch (_id) {
        case 0: _t->beforeClose(); break;
        case 1: _t->showMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->copyAmount(); break;
        case 3: _t->copyLabel(); break;
        case 4: _t->copyAddress(); break;
        case 5: _t->copyTransactionHash(); break;
        case 6: _t->clipboardQuantity(); break;
        case 7: _t->clipboardAmount(); break;
        case 8: _t->clipboardFee(); break;
        case 9: _t->clipboardAfterFee(); break;
        case 10: _t->clipboardBytes(); break;
        case 11: _t->clipboardPriority(); break;
        case 12: _t->clipboardLowOutput(); break;
        case 13: _t->clipboardChange(); break;
        case 14: _t->radioTreeMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->radioListMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->viewItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->headerSectionClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->on_buttonBox_accepted(); break;
        case 19: _t->buttonSelectAllClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CoinControlDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CoinControlDialog::beforeClose)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject CoinControlDialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CoinControlDialog.data,
      qt_meta_data_CoinControlDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *CoinControlDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CoinControlDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CoinControlDialog.stringdata))
        return static_cast<void*>(const_cast< CoinControlDialog*>(this));
    return QWidget::qt_metacast(_clname);
}

int CoinControlDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void CoinControlDialog::beforeClose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
