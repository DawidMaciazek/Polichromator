/****************************************************************************
** Meta object code from reading C++ file 'spectrumeditorcustomitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SubSpectrumEditor/spectrumeditorcustomitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spectrumeditorcustomitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SpectrumEditorCustomItem_t {
    QByteArrayData data[12];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpectrumEditorCustomItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpectrumEditorCustomItem_t qt_meta_stringdata_SpectrumEditorCustomItem = {
    {
QT_MOC_LITERAL(0, 0, 24), // "SpectrumEditorCustomItem"
QT_MOC_LITERAL(1, 25, 13), // "deleteRequest"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 25), // "SpectrumEditorCustomItem*"
QT_MOC_LITERAL(4, 66, 4), // "item"
QT_MOC_LITERAL(5, 71, 13), // "updateRequest"
QT_MOC_LITERAL(6, 85, 21), // "on_toolButton_clicked"
QT_MOC_LITERAL(7, 107, 36), // "on_comboFunction_currentIndex..."
QT_MOC_LITERAL(8, 144, 4), // "arg1"
QT_MOC_LITERAL(9, 149, 18), // "functionUpdateSlot"
QT_MOC_LITERAL(10, 168, 10), // "ExpParser*"
QT_MOC_LITERAL(11, 179, 6) // "parser"

    },
    "SpectrumEditorCustomItem\0deleteRequest\0"
    "\0SpectrumEditorCustomItem*\0item\0"
    "updateRequest\0on_toolButton_clicked\0"
    "on_comboFunction_currentIndexChanged\0"
    "arg1\0functionUpdateSlot\0ExpParser*\0"
    "parser"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpectrumEditorCustomItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   43,    2, 0x08 /* Private */,
       7,    1,   44,    2, 0x08 /* Private */,
       9,    1,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void SpectrumEditorCustomItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SpectrumEditorCustomItem *_t = static_cast<SpectrumEditorCustomItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteRequest((*reinterpret_cast< SpectrumEditorCustomItem*(*)>(_a[1]))); break;
        case 1: _t->updateRequest(); break;
        case 2: _t->on_toolButton_clicked(); break;
        case 3: _t->on_comboFunction_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->functionUpdateSlot((*reinterpret_cast< ExpParser*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SpectrumEditorCustomItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SpectrumEditorCustomItem::*_t)(SpectrumEditorCustomItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpectrumEditorCustomItem::deleteRequest)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SpectrumEditorCustomItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpectrumEditorCustomItem::updateRequest)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject SpectrumEditorCustomItem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SpectrumEditorCustomItem.data,
      qt_meta_data_SpectrumEditorCustomItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SpectrumEditorCustomItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpectrumEditorCustomItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SpectrumEditorCustomItem.stringdata0))
        return static_cast<void*>(const_cast< SpectrumEditorCustomItem*>(this));
    return QWidget::qt_metacast(_clname);
}

int SpectrumEditorCustomItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SpectrumEditorCustomItem::deleteRequest(SpectrumEditorCustomItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SpectrumEditorCustomItem::updateRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
