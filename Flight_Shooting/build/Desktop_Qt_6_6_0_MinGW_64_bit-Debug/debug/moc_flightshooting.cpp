/****************************************************************************
** Meta object code from reading C++ file 'flightshooting.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../flightshooting.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flightshooting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
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
struct qt_meta_stringdata_CLASSFlightShootingENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSFlightShootingENDCLASS = QtMocHelpers::stringData(
    "FlightShooting",
    "on_start_btn_clicked",
    "",
    "on_close_btn_clicked",
    "updateScore",
    "newScore",
    "onGameOver",
    "on_pause_btn_clicked",
    "pauseGame",
    "resumeGame"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFlightShootingENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[15];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[12];
    char stringdata5[9];
    char stringdata6[11];
    char stringdata7[21];
    char stringdata8[10];
    char stringdata9[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFlightShootingENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFlightShootingENDCLASS_t qt_meta_stringdata_CLASSFlightShootingENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "FlightShooting"
        QT_MOC_LITERAL(15, 20),  // "on_start_btn_clicked"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 20),  // "on_close_btn_clicked"
        QT_MOC_LITERAL(58, 11),  // "updateScore"
        QT_MOC_LITERAL(70, 8),  // "newScore"
        QT_MOC_LITERAL(79, 10),  // "onGameOver"
        QT_MOC_LITERAL(90, 20),  // "on_pause_btn_clicked"
        QT_MOC_LITERAL(111, 9),  // "pauseGame"
        QT_MOC_LITERAL(121, 10)   // "resumeGame"
    },
    "FlightShooting",
    "on_start_btn_clicked",
    "",
    "on_close_btn_clicked",
    "updateScore",
    "newScore",
    "onGameOver",
    "on_pause_btn_clicked",
    "pauseGame",
    "resumeGame"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFlightShootingENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    1,   58,    2, 0x08,    3 /* Private */,
       6,    0,   61,    2, 0x08,    5 /* Private */,
       7,    0,   62,    2, 0x08,    6 /* Private */,
       8,    0,   63,    2, 0x08,    7 /* Private */,
       9,    0,   64,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FlightShooting::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSFlightShootingENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFlightShootingENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFlightShootingENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FlightShooting, std::true_type>,
        // method 'on_start_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_close_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateScore'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onGameOver'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pause_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pauseGame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resumeGame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FlightShooting::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FlightShooting *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_start_btn_clicked(); break;
        case 1: _t->on_close_btn_clicked(); break;
        case 2: _t->updateScore((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->onGameOver(); break;
        case 4: _t->on_pause_btn_clicked(); break;
        case 5: _t->pauseGame(); break;
        case 6: _t->resumeGame(); break;
        default: ;
        }
    }
}

const QMetaObject *FlightShooting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightShooting::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFlightShootingENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int FlightShooting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
