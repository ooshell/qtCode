/****************************************************************************
** Meta object code from reading C++ file 'fileview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fileview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_fileview_t {
    QByteArrayData data[16];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_fileview_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_fileview_t qt_meta_stringdata_fileview = {
    {
QT_MOC_LITERAL(0, 0, 8), // "fileview"
QT_MOC_LITERAL(1, 9, 15), // "listDoubleClick"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "index"
QT_MOC_LITERAL(4, 32, 15), // "treeDoubleClick"
QT_MOC_LITERAL(5, 48, 11), // "detailClick"
QT_MOC_LITERAL(6, 60, 9), // "listClick"
QT_MOC_LITERAL(7, 70, 9), // "backClick"
QT_MOC_LITERAL(8, 80, 12), // "forwardClick"
QT_MOC_LITERAL(9, 93, 10), // "aheadClick"
QT_MOC_LITERAL(10, 104, 11), // "displayMenu"
QT_MOC_LITERAL(11, 116, 16), // "triggerdelAction"
QT_MOC_LITERAL(12, 133, 17), // "triggercopyAction"
QT_MOC_LITERAL(13, 151, 18), // "triggerpasteAction"
QT_MOC_LITERAL(14, 170, 17), // "triggeropenAction"
QT_MOC_LITERAL(15, 188, 11) // "changeModel"

    },
    "fileview\0listDoubleClick\0\0index\0"
    "treeDoubleClick\0detailClick\0listClick\0"
    "backClick\0forwardClick\0aheadClick\0"
    "displayMenu\0triggerdelAction\0"
    "triggercopyAction\0triggerpasteAction\0"
    "triggeropenAction\0changeModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_fileview[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x0a /* Public */,
       4,    1,   82,    2, 0x0a /* Public */,
       5,    0,   85,    2, 0x0a /* Public */,
       6,    0,   86,    2, 0x0a /* Public */,
       7,    0,   87,    2, 0x0a /* Public */,
       8,    0,   88,    2, 0x0a /* Public */,
       9,    0,   89,    2, 0x0a /* Public */,
      10,    0,   90,    2, 0x0a /* Public */,
      11,    0,   91,    2, 0x0a /* Public */,
      12,    0,   92,    2, 0x0a /* Public */,
      13,    0,   93,    2, 0x0a /* Public */,
      14,    0,   94,    2, 0x0a /* Public */,
      15,    0,   95,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void fileview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        fileview *_t = static_cast<fileview *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->listDoubleClick((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 1: _t->treeDoubleClick((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 2: _t->detailClick(); break;
        case 3: _t->listClick(); break;
        case 4: _t->backClick(); break;
        case 5: _t->forwardClick(); break;
        case 6: _t->aheadClick(); break;
        case 7: _t->displayMenu(); break;
        case 8: _t->triggerdelAction(); break;
        case 9: _t->triggercopyAction(); break;
        case 10: _t->triggerpasteAction(); break;
        case 11: _t->triggeropenAction(); break;
        case 12: _t->changeModel(); break;
        default: ;
        }
    }
}

const QMetaObject fileview::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_fileview.data,
      qt_meta_data_fileview,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *fileview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fileview::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_fileview.stringdata0))
        return static_cast<void*>(const_cast< fileview*>(this));
    return QWidget::qt_metacast(_clname);
}

int fileview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
