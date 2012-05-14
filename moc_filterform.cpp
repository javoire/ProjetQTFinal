/****************************************************************************
** Meta object code from reading C++ file 'filterform.h'
**
** Created: Mon May 14 01:57:46 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/gui/form/filterform.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filterform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FilterForm[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   12,   11,   11, 0x05,
      62,   54,   11,   11, 0x05,
      90,   82,   11,   11, 0x05,
     116,  110,   11,   11, 0x05,
     138,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     166,  160,   11,   11, 0x0a,
     199,  160,   11,   11, 0x0a,
     232,  160,   11,   11, 0x0a,
     267,  160,   11,   11, 0x0a,
     302,   12,   11,   11, 0x0a,
     336,  329,   11,   11, 0x0a,
     376,  371,   11,   11, 0x08,
     411,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FilterForm[] = {
    "FilterForm\0\0checked,name\0"
    "genreIsClicked(bool,QString)\0yearMin\0"
    "yearMinChanged(int)\0yearMax\0"
    "yearMaxChanged(int)\0title\0"
    "titleChanged(QString)\0searchButtonClicked()\0"
    "value\0DoubleSlider_yearMinChanged(int)\0"
    "DoubleSlider_yearMaxChanged(int)\0"
    "DoubleSlider_yearMinSetByUser(int)\0"
    "DoubleSlider_yearMaxSetByUser(int)\0"
    "checkToggled(bool,QString)\0catRes\0"
    "resultListChanged(CategoryResult*)\0"
    "arg1\0on_titleInput_textChanged(QString)\0"
    "on_Search_released()\0"
};

void FilterForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FilterForm *_t = static_cast<FilterForm *>(_o);
        switch (_id) {
        case 0: _t->genreIsClicked((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->yearMinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->yearMaxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->titleChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->searchButtonClicked(); break;
        case 5: _t->DoubleSlider_yearMinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->DoubleSlider_yearMaxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->DoubleSlider_yearMinSetByUser((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->DoubleSlider_yearMaxSetByUser((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->checkToggled((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->resultListChanged((*reinterpret_cast< CategoryResult*(*)>(_a[1]))); break;
        case 11: _t->on_titleInput_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->on_Search_released(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FilterForm::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FilterForm::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_FilterForm,
      qt_meta_data_FilterForm, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FilterForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FilterForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FilterForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FilterForm))
        return static_cast<void*>(const_cast< FilterForm*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int FilterForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void FilterForm::genreIsClicked(bool _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FilterForm::yearMinChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FilterForm::yearMaxChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FilterForm::titleChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FilterForm::searchButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
