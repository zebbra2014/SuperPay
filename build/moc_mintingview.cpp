/****************************************************************************
** Meta object code from reading C++ file 'mintingview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/mintingview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mintingview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MintingView_t {
    QByteArrayData data[11];
    char stringdata[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MintingView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MintingView_t qt_meta_stringdata_MintingView = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 13),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 21),
QT_MOC_LITERAL(4, 49, 3),
QT_MOC_LITERAL(5, 53, 8),
QT_MOC_LITERAL(6, 62, 11),
QT_MOC_LITERAL(7, 74, 15),
QT_MOC_LITERAL(8, 90, 12),
QT_MOC_LITERAL(9, 103, 14),
QT_MOC_LITERAL(10, 118, 5)
    },
    "MintingView\0exportClicked\0\0"
    "chooseMintingInterval\0idx\0copyTxID\0"
    "copyAddress\0showHideAddress\0showHideTxID\0"
    "contextualMenu\0point\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MintingView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a,
       3,    1,   50,    2, 0x0a,
       5,    0,   53,    2, 0x0a,
       6,    0,   54,    2, 0x0a,
       7,    0,   55,    2, 0x0a,
       8,    0,   56,    2, 0x0a,
       9,    1,   57,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   10,

       0        // eod
};

void MintingView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MintingView *_t = static_cast<MintingView *>(_o);
        switch (_id) {
        case 0: _t->exportClicked(); break;
        case 1: _t->chooseMintingInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->copyTxID(); break;
        case 3: _t->copyAddress(); break;
        case 4: _t->showHideAddress(); break;
        case 5: _t->showHideTxID(); break;
        case 6: _t->contextualMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MintingView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MintingView.data,
      qt_meta_data_MintingView,  qt_static_metacall, 0, 0}
};


const QMetaObject *MintingView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MintingView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MintingView.stringdata))
        return static_cast<void*>(const_cast< MintingView*>(this));
    return QWidget::qt_metacast(_clname);
}

int MintingView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
