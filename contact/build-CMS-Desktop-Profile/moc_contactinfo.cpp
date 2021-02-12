/****************************************************************************
** Meta object code from reading C++ file 'contactinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../CMS/contactinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contactinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ContactInfo_t {
    QByteArrayData data[14];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ContactInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ContactInfo_t qt_meta_stringdata_ContactInfo = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ContactInfo"
QT_MOC_LITERAL(1, 12, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 19), // "on_btn_save_clicked"
QT_MOC_LITERAL(4, 55, 21), // "on_btn_update_clicked"
QT_MOC_LITERAL(5, 77, 21), // "on_btn_delete_clicked"
QT_MOC_LITERAL(6, 99, 26), // "on_btn_loadContact_clicked"
QT_MOC_LITERAL(7, 126, 21), // "on_btn_search_clicked"
QT_MOC_LITERAL(8, 148, 22), // "on_tableView_activated"
QT_MOC_LITERAL(9, 171, 11), // "QModelIndex"
QT_MOC_LITERAL(10, 183, 5), // "index"
QT_MOC_LITERAL(11, 189, 22), // "on_radioButton_clicked"
QT_MOC_LITERAL(12, 212, 24), // "on_radioButton_2_clicked"
QT_MOC_LITERAL(13, 237, 23) // "on_btn_delete_2_clicked"

    },
    "ContactInfo\0on_pushButton_clicked\0\0"
    "on_btn_save_clicked\0on_btn_update_clicked\0"
    "on_btn_delete_clicked\0on_btn_loadContact_clicked\0"
    "on_btn_search_clicked\0on_tableView_activated\0"
    "QModelIndex\0index\0on_radioButton_clicked\0"
    "on_radioButton_2_clicked\0"
    "on_btn_delete_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ContactInfo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    1,   70,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,
      12,    0,   74,    2, 0x08 /* Private */,
      13,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ContactInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ContactInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_btn_save_clicked(); break;
        case 2: _t->on_btn_update_clicked(); break;
        case 3: _t->on_btn_delete_clicked(); break;
        case 4: _t->on_btn_loadContact_clicked(); break;
        case 5: _t->on_btn_search_clicked(); break;
        case 6: _t->on_tableView_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->on_radioButton_clicked(); break;
        case 8: _t->on_radioButton_2_clicked(); break;
        case 9: _t->on_btn_delete_2_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ContactInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ContactInfo.data,
    qt_meta_data_ContactInfo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ContactInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContactInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ContactInfo.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ContactInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
