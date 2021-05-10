/****************************************************************************
** Meta object code from reading C++ file 'flasher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../flasher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flasher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Flasher_t {
    QByteArrayData data[18];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Flasher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Flasher_t qt_meta_stringdata_Flasher = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Flasher"
QT_MOC_LITERAL(1, 8, 14), // "changeProgress"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 7), // "percent"
QT_MOC_LITERAL(4, 32, 8), // "finished"
QT_MOC_LITERAL(5, 41, 12), // "infoCritical"
QT_MOC_LITERAL(6, 54, 5), // "title"
QT_MOC_LITERAL(7, 60, 4), // "info"
QT_MOC_LITERAL(8, 65, 11), // "infoWarning"
QT_MOC_LITERAL(9, 77, 8), // "infoInfo"
QT_MOC_LITERAL(10, 86, 9), // "infoDebug"
QT_MOC_LITERAL(11, 96, 7), // "go_boot"
QT_MOC_LITERAL(12, 104, 10), // "leave_boot"
QT_MOC_LITERAL(13, 115, 10), // "get_status"
QT_MOC_LITERAL(14, 126, 11), // "open_serial"
QT_MOC_LITERAL(15, 138, 20), // "send_flash_from_file"
QT_MOC_LITERAL(16, 159, 11), // "hexFilePath"
QT_MOC_LITERAL(17, 171, 9) // "page_size"

    },
    "Flasher\0changeProgress\0\0percent\0"
    "finished\0infoCritical\0title\0info\0"
    "infoWarning\0infoInfo\0infoDebug\0go_boot\0"
    "leave_boot\0get_status\0open_serial\0"
    "send_flash_from_file\0hexFilePath\0"
    "page_size"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Flasher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    0,   72,    2, 0x06 /* Public */,
       5,    2,   73,    2, 0x06 /* Public */,
       8,    2,   78,    2, 0x06 /* Public */,
       9,    2,   83,    2, 0x06 /* Public */,
      10,    1,   88,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   91,    2, 0x0a /* Public */,
      12,    0,   92,    2, 0x0a /* Public */,
      13,    1,   93,    2, 0x0a /* Public */,
      13,    0,   96,    2, 0x2a /* Public | MethodCloned */,
      15,    2,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::QString, QMetaType::Bool,   14,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   16,   17,

       0        // eod
};

void Flasher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Flasher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->infoCritical((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->infoWarning((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->infoInfo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->infoDebug((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: { bool _r = _t->go_boot();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->leave_boot();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->get_status((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: { QString _r = _t->get_status();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->send_flash_from_file((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Flasher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Flasher::changeProgress)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Flasher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Flasher::finished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Flasher::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Flasher::infoCritical)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Flasher::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Flasher::infoWarning)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Flasher::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Flasher::infoInfo)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Flasher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Flasher::infoDebug)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Flasher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Flasher.data,
    qt_meta_data_Flasher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Flasher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Flasher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Flasher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Flasher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Flasher::changeProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Flasher::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Flasher::infoCritical(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Flasher::infoWarning(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Flasher::infoInfo(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Flasher::infoDebug(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
