/****************************************************************************
** Meta object code from reading C++ file 'spectrumeditorcustomcfunction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SubSpectrumEditor/spectrumeditorcustomcfunction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spectrumeditorcustomcfunction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SpectrumEditorCustomCFunction_t {
    QByteArrayData data[7];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpectrumEditorCustomCFunction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpectrumEditorCustomCFunction_t qt_meta_stringdata_SpectrumEditorCustomCFunction = {
    {
QT_MOC_LITERAL(0, 0, 29), // "SpectrumEditorCustomCFunction"
QT_MOC_LITERAL(1, 30, 21), // "functionUpdateRequest"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 10), // "ExpParser*"
QT_MOC_LITERAL(4, 64, 6), // "parser"
QT_MOC_LITERAL(5, 71, 34), // "on_lineFunctionExp_editingFin..."
QT_MOC_LITERAL(6, 106, 21) // "on_buttonHelp_clicked"

    },
    "SpectrumEditorCustomCFunction\0"
    "functionUpdateRequest\0\0ExpParser*\0"
    "parser\0on_lineFunctionExp_editingFinished\0"
    "on_buttonHelp_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpectrumEditorCustomCFunction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   32,    2, 0x08 /* Private */,
       6,    0,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SpectrumEditorCustomCFunction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SpectrumEditorCustomCFunction *_t = static_cast<SpectrumEditorCustomCFunction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->functionUpdateRequest((*reinterpret_cast< ExpParser*(*)>(_a[1]))); break;
        case 1: _t->on_lineFunctionExp_editingFinished(); break;
        case 2: _t->on_buttonHelp_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SpectrumEditorCustomCFunction::*_t)(ExpParser * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpectrumEditorCustomCFunction::functionUpdateRequest)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SpectrumEditorCustomCFunction::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SpectrumEditorCustomCFunction.data,
      qt_meta_data_SpectrumEditorCustomCFunction,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SpectrumEditorCustomCFunction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpectrumEditorCustomCFunction::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SpectrumEditorCustomCFunction.stringdata0))
        return static_cast<void*>(const_cast< SpectrumEditorCustomCFunction*>(this));
    return QWidget::qt_metacast(_clname);
}

int SpectrumEditorCustomCFunction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SpectrumEditorCustomCFunction::functionUpdateRequest(ExpParser * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE