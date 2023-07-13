/****************************************************************************
** Meta object code from reading C++ file 'program.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ST-LinkV2_Programmer/program.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'program.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_program_t {
    uint offsetsAndSizes[16];
    char stringdata0[8];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[6];
    char stringdata5[2];
    char stringdata6[23];
    char stringdata7[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_program_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_program_t qt_meta_stringdata_program = {
    {
        QT_MOC_LITERAL(0, 7),  // "program"
        QT_MOC_LITERAL(8, 21),  // "on_selectFile_clicked"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 10),  // "readResult"
        QT_MOC_LITERAL(42, 5),  // "delay"
        QT_MOC_LITERAL(48, 1),  // "n"
        QT_MOC_LITERAL(50, 22),  // "on_programming_clicked"
        QT_MOC_LITERAL(73, 13)   // "on_ok_clicked"
    },
    "program",
    "on_selectFile_clicked",
    "",
    "readResult",
    "delay",
    "n",
    "on_programming_clicked",
    "on_ok_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_program[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    1,   46,    2, 0x08,    3 /* Private */,
       6,    0,   49,    2, 0x08,    5 /* Private */,
       7,    0,   50,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject program::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_program.offsetsAndSizes,
    qt_meta_data_program,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_program_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<program, std::true_type>,
        // method 'on_selectFile_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'delay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_programming_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ok_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void program::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<program *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_selectFile_clicked(); break;
        case 1: _t->readResult(); break;
        case 2: _t->delay((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_programming_clicked(); break;
        case 4: _t->on_ok_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *program::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *program::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_program.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int program::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
