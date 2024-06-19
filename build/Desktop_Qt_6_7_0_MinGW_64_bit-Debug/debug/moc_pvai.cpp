/****************************************************************************
** Meta object code from reading C++ file 'pvai.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../pvai.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pvai.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSpvaiENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSpvaiENDCLASS = QtMocHelpers::stringData(
    "pvai",
    "handleButtonClick",
    "",
    "QPushButton*",
    "button",
    "setupConnections",
    "on_easy_clicked",
    "on_medium_clicked",
    "on_hard_clicked",
    "iswon",
    "isdraw",
    "init",
    "update",
    "computer_turn_easy",
    "computer_turn_medium",
    "move",
    "r",
    "c",
    "turn",
    "isMovesLeft",
    "evaluate",
    "minimax",
    "depth",
    "isMax",
    "alpha",
    "beta",
    "findBestMove",
    "std::pair<int,int>",
    "save_state",
    "on_main_menu_clicked",
    "saveIntoMemory"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSpvaiENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  128,    2, 0x08,    1 /* Private */,
       5,    0,  131,    2, 0x08,    3 /* Private */,
       6,    0,  132,    2, 0x08,    4 /* Private */,
       7,    0,  133,    2, 0x08,    5 /* Private */,
       8,    0,  134,    2, 0x08,    6 /* Private */,
       9,    0,  135,    2, 0x08,    7 /* Private */,
      10,    0,  136,    2, 0x08,    8 /* Private */,
      11,    0,  137,    2, 0x08,    9 /* Private */,
      12,    0,  138,    2, 0x08,   10 /* Private */,
      13,    0,  139,    2, 0x08,   11 /* Private */,
      14,    0,  140,    2, 0x08,   12 /* Private */,
      15,    3,  141,    2, 0x08,   13 /* Private */,
      19,    0,  148,    2, 0x08,   17 /* Private */,
      20,    0,  149,    2, 0x08,   18 /* Private */,
      21,    4,  150,    2, 0x08,   19 /* Private */,
      26,    0,  159,    2, 0x08,   24 /* Private */,
      28,    0,  160,    2, 0x08,   25 /* Private */,
      29,    0,  161,    2, 0x08,   26 /* Private */,
      30,    0,  162,    2, 0x08,   27 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,   16,   17,   18,
    QMetaType::Bool,
    QMetaType::Int,
    QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Int, QMetaType::Int,   22,   23,   24,   25,
    0x80000000 | 27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject pvai::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSpvaiENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSpvaiENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSpvaiENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<pvai, std::true_type>,
        // method 'handleButtonClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPushButton *, std::false_type>,
        // method 'setupConnections'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_easy_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_medium_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_hard_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'iswon'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isdraw'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'init'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'computer_turn_easy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'computer_turn_medium'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'move'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString, std::false_type>,
        // method 'isMovesLeft'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'evaluate'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'minimax'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'findBestMove'
        QtPrivate::TypeAndForceComplete<std::pair<int,int>, std::false_type>,
        // method 'save_state'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_main_menu_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveIntoMemory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void pvai::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<pvai *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->handleButtonClick((*reinterpret_cast< std::add_pointer_t<QPushButton*>>(_a[1]))); break;
        case 1: _t->setupConnections(); break;
        case 2: _t->on_easy_clicked(); break;
        case 3: _t->on_medium_clicked(); break;
        case 4: _t->on_hard_clicked(); break;
        case 5: { bool _r = _t->iswon();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->isdraw();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->init(); break;
        case 8: _t->update(); break;
        case 9: _t->computer_turn_easy(); break;
        case 10: _t->computer_turn_medium(); break;
        case 11: _t->move((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 12: { bool _r = _t->isMovesLeft();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { int _r = _t->evaluate();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 14: { int _r = _t->minimax((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 15: { std::pair<int,int> _r = _t->findBestMove();
            if (_a[0]) *reinterpret_cast< std::pair<int,int>*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->save_state(); break;
        case 17: _t->on_main_menu_clicked(); break;
        case 18: _t->saveIntoMemory(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QPushButton* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *pvai::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pvai::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSpvaiENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int pvai::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
QT_WARNING_POP
