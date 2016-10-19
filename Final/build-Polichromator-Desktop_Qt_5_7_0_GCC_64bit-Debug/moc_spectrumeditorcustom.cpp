/****************************************************************************
** Meta object code from reading C++ file 'spectrumeditorcustom.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Polichromator/spectrumeditorcustom.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spectrumeditorcustom.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SpectrumEditorCustom_t {
    QByteArrayData data[9];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpectrumEditorCustom_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpectrumEditorCustom_t qt_meta_stringdata_SpectrumEditorCustom = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SpectrumEditorCustom"
QT_MOC_LITERAL(1, 21, 28), // "on_buttonAddFunction_clicked"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 14), // "deleteItemSlot"
QT_MOC_LITERAL(4, 66, 25), // "SpectrumEditorCustomItem*"
QT_MOC_LITERAL(5, 92, 4), // "item"
QT_MOC_LITERAL(6, 97, 14), // "updatePlotSlot"
QT_MOC_LITERAL(7, 112, 33), // "on_comboMerge_currentIndexCha..."
QT_MOC_LITERAL(8, 146, 5) // "index"

    },
    "SpectrumEditorCustom\0on_buttonAddFunction_clicked\0"
    "\0deleteItemSlot\0SpectrumEditorCustomItem*\0"
    "item\0updatePlotSlot\0"
    "on_comboMerge_currentIndexChanged\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpectrumEditorCustom[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    1,   35,    2, 0x08 /* Private */,
       6,    0,   38,    2, 0x08 /* Private */,
       7,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void SpectrumEditorCustom::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SpectrumEditorCustom *_t = static_cast<SpectrumEditorCustom *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_buttonAddFunction_clicked(); break;
        case 1: _t->deleteItemSlot((*reinterpret_cast< SpectrumEditorCustomItem*(*)>(_a[1]))); break;
        case 2: _t->updatePlotSlot(); break;
        case 3: _t->on_comboMerge_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SpectrumEditorCustomItem* >(); break;
            }
            break;
        }
    }
}

const QMetaObject SpectrumEditorCustom::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SpectrumEditorCustom.data,
      qt_meta_data_SpectrumEditorCustom,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SpectrumEditorCustom::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpectrumEditorCustom::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SpectrumEditorCustom.stringdata0))
        return static_cast<void*>(const_cast< SpectrumEditorCustom*>(this));
    return QDialog::qt_metacast(_clname);
}

int SpectrumEditorCustom::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
