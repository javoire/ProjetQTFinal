/****************************************************************************
** Meta object code from reading C++ file 'filmspaceupdater.h'
**
** Created: Mon May 14 01:57:06 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/controller/filmspaceupdater.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filmspaceupdater.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FilmSpaceUpdater[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   18,   17,   17, 0x0a,
      48,   43,   17,   17, 0x0a,
      67,   43,   17,   17, 0x0a,
     101,   87,   17,   17, 0x0a,
     127,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FilmSpaceUpdater[] = {
    "FilmSpaceUpdater\0\0name\0updateName(QString)\0"
    "year\0updateYearLow(int)\0updateYearHigh(int)\0"
    "checked,genre\0updateGenre(bool,QString)\0"
    "updateInterfaces()\0"
};

void FilmSpaceUpdater::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FilmSpaceUpdater *_t = static_cast<FilmSpaceUpdater *>(_o);
        switch (_id) {
        case 0: _t->updateName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->updateYearLow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->updateYearHigh((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateGenre((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->updateInterfaces(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FilmSpaceUpdater::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FilmSpaceUpdater::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FilmSpaceUpdater,
      qt_meta_data_FilmSpaceUpdater, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FilmSpaceUpdater::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FilmSpaceUpdater::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FilmSpaceUpdater::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FilmSpaceUpdater))
        return static_cast<void*>(const_cast< FilmSpaceUpdater*>(this));
    if (!strcmp(_clname, "Singleton<FilmSpaceUpdater>"))
        return static_cast< Singleton<FilmSpaceUpdater>*>(const_cast< FilmSpaceUpdater*>(this));
    return QObject::qt_metacast(_clname);
}

int FilmSpaceUpdater::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
