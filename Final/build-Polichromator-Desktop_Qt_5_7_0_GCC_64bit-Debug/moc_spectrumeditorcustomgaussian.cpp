/****************************************************************************
** Meta object code from reading C++ file 'spectrumeditorcustomgaussian.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Polichromator/spectrumeditorcustomgaussian.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spectrumeditorcustomgaussian.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SpectrumEditorCustomGaussian_t {
    QByteArrayData data[9];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpectrumEditorCustomGaussian_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpectrumEditorCustomGaussian_t qt_meta_stringdata_SpectrumEditorCustomGaussian = {
    {
QT_MOC_LITERAL(0, 0, 28), // "SpectrumEditorCustomGaussian"
QT_MOC_LITERAL(1, 29, 21), // "functionUpdateRequest"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 10), // "ExpParser*"
QT_MOC_LITERAL(4, 63, 6), // "parser"
QT_MOC_LITERAL(5, 70, 28), // "on_lineAmplitude_textChanged"
QT_MOC_LITERAL(6, 99, 4), // "arg1"
QT_MOC_LITERAL(7, 104, 21), // "on_lineMu_textChanged"
QT_MOC_LITERAL(8, 126, 24) // "on_lineSigma_textChanged"

    },
    "SpectrumEditorCustomGaussian\0"
    "functionUpdateRequest\0\0ExpParser*\0"
    "parser\0on_lineAmplitude_textChanged\0"
    "arg1\0on_lineMu_textChanged\0"
    "on_lineSigma_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpectrumEditorCustomGaussian[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   37,    2, 0x08 /* Private */,
       7,    1,   40,    2, 0x08 /* Private */,
       8,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void SpectrumEditorCustomGaussian::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SpectrumEditorCustomGaussian *_t = static_cast<SpectrumEditorCustomGaussian *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->functionUpdateRequest((*reinterpret_cast< ExpParser*(*)>(_a[1]))); break;
        case 1: _t->on_lineAmplitude_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_lineMu_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_lineSigma_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SpectrumEditorCustomGaussian::*_t)(ExpParser * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpectrumEditorCustomGaussian::functionUpdateRequest)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SpectrumEditorCustomGaussian::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SpectrumEditorCustomGaussian.data,
      qt_meta_data_SpectrumEditorCustomGaussian,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SpectrumEditorCustomGaussian::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpectrumEditorCustomGaussian::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SpectrumEditorCustomGaussian.stringdata0))
        return static_cast<void*>(const_cast< SpectrumEditorCustomGaussian*>(this));
    return QWidget::qt_metacast(_clname);
}

int SpectrumEditorCustomGaussian::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SpectrumEditorCustomGaussian::functionUpdateRequest(ExpParser * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
