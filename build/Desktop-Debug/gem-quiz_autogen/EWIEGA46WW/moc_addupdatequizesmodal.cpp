/****************************************************************************
** Meta object code from reading C++ file 'addupdatequizesmodal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../addupdatequizesmodal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addupdatequizesmodal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddUpdateQuizesModal_t {
    QByteArrayData data[7];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddUpdateQuizesModal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddUpdateQuizesModal_t qt_meta_stringdata_AddUpdateQuizesModal = {
    {
QT_MOC_LITERAL(0, 0, 20), // "AddUpdateQuizesModal"
QT_MOC_LITERAL(1, 21, 21), // "triggerShowMainWindow"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 22), // "on_back_button_clicked"
QT_MOC_LITERAL(4, 67, 16), // "handleShowWindow"
QT_MOC_LITERAL(5, 84, 26), // "on_add_quiz_button_clicked"
QT_MOC_LITERAL(6, 111, 31) // "on_update_quizes_button_clicked"

    },
    "AddUpdateQuizesModal\0triggerShowMainWindow\0"
    "\0on_back_button_clicked\0handleShowWindow\0"
    "on_add_quiz_button_clicked\0"
    "on_update_quizes_button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddUpdateQuizesModal[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddUpdateQuizesModal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddUpdateQuizesModal *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->triggerShowMainWindow(); break;
        case 1: _t->on_back_button_clicked(); break;
        case 2: _t->handleShowWindow(); break;
        case 3: _t->on_add_quiz_button_clicked(); break;
        case 4: _t->on_update_quizes_button_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AddUpdateQuizesModal::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddUpdateQuizesModal::triggerShowMainWindow)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject AddUpdateQuizesModal::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AddUpdateQuizesModal.data,
    qt_meta_data_AddUpdateQuizesModal,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AddUpdateQuizesModal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddUpdateQuizesModal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddUpdateQuizesModal.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AddUpdateQuizesModal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void AddUpdateQuizesModal::triggerShowMainWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
