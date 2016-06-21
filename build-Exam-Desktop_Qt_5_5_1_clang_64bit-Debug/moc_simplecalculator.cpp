/****************************************************************************
** Meta object code from reading C++ file 'simplecalculator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Exam/simplecalculator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simplecalculator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SimpleCalculator_t {
    QByteArrayData data[11];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SimpleCalculator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SimpleCalculator_t qt_meta_stringdata_SimpleCalculator = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SimpleCalculator"
QT_MOC_LITERAL(1, 17, 20), // "on_SumButton_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 22), // "on_MinusButton_clicked"
QT_MOC_LITERAL(4, 62, 24), // "on_MultipyButton_clicked"
QT_MOC_LITERAL(5, 87, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(6, 109, 24), // "on_AverageButton_clicked"
QT_MOC_LITERAL(7, 134, 26), // "on_FactorialButton_clicked"
QT_MOC_LITERAL(8, 161, 31), // "on_actionInstructions_triggered"
QT_MOC_LITERAL(9, 193, 26), // "on_actionGo_Back_triggered"
QT_MOC_LITERAL(10, 220, 23) // "on_actionExit_triggered"

    },
    "SimpleCalculator\0on_SumButton_clicked\0"
    "\0on_MinusButton_clicked\0"
    "on_MultipyButton_clicked\0on_pushButton_clicked\0"
    "on_AverageButton_clicked\0"
    "on_FactorialButton_clicked\0"
    "on_actionInstructions_triggered\0"
    "on_actionGo_Back_triggered\0"
    "on_actionExit_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SimpleCalculator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SimpleCalculator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SimpleCalculator *_t = static_cast<SimpleCalculator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_SumButton_clicked(); break;
        case 1: _t->on_MinusButton_clicked(); break;
        case 2: _t->on_MultipyButton_clicked(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_AverageButton_clicked(); break;
        case 5: _t->on_FactorialButton_clicked(); break;
        case 6: _t->on_actionInstructions_triggered(); break;
        case 7: _t->on_actionGo_Back_triggered(); break;
        case 8: _t->on_actionExit_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SimpleCalculator::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SimpleCalculator.data,
      qt_meta_data_SimpleCalculator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SimpleCalculator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimpleCalculator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SimpleCalculator.stringdata0))
        return static_cast<void*>(const_cast< SimpleCalculator*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int SimpleCalculator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
