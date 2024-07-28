/********************************************************************************
** Form generated from reading UI file 'addupdatequizesmodal.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUPDATEQUIZESMODAL_H
#define UI_ADDUPDATEQUIZESMODAL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddUpdateQuizesModal
{
public:
    QPushButton *back_button;
    QPushButton *update_quizes_button;
    QLabel *label;
    QPushButton *add_quiz_button;

    void setupUi(QDialog *AddUpdateQuizesModal)
    {
        if (AddUpdateQuizesModal->objectName().isEmpty())
            AddUpdateQuizesModal->setObjectName(QString::fromUtf8("AddUpdateQuizesModal"));
        AddUpdateQuizesModal->resize(797, 625);
        back_button = new QPushButton(AddUpdateQuizesModal);
        back_button->setObjectName(QString::fromUtf8("back_button"));
        back_button->setGeometry(QRect(250, 510, 241, 31));
        QFont font;
        font.setPointSize(12);
        back_button->setFont(font);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("go-previous");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        back_button->setIcon(icon);
        back_button->setAutoRepeat(false);
        back_button->setAutoDefault(true);
        back_button->setFlat(false);
        update_quizes_button = new QPushButton(AddUpdateQuizesModal);
        update_quizes_button->setObjectName(QString::fromUtf8("update_quizes_button"));
        update_quizes_button->setGeometry(QRect(250, 300, 241, 31));
        update_quizes_button->setFont(font);
        QIcon icon1;
        iconThemeName = QString::fromUtf8("document-open");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        update_quizes_button->setIcon(icon1);
        update_quizes_button->setAutoRepeat(false);
        update_quizes_button->setAutoDefault(true);
        update_quizes_button->setFlat(false);
        label = new QLabel(AddUpdateQuizesModal);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 40, 361, 91));
        QFont font1;
        font1.setPointSize(26);
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setKerning(false);
        font1.setStyleStrategy(QFont::PreferDefault);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        add_quiz_button = new QPushButton(AddUpdateQuizesModal);
        add_quiz_button->setObjectName(QString::fromUtf8("add_quiz_button"));
        add_quiz_button->setGeometry(QRect(250, 260, 241, 31));
        add_quiz_button->setFont(font);
        QIcon icon2;
        iconThemeName = QString::fromUtf8("document-new");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        add_quiz_button->setIcon(icon2);
        add_quiz_button->setAutoRepeat(false);
        add_quiz_button->setAutoDefault(true);
        add_quiz_button->setFlat(false);

        retranslateUi(AddUpdateQuizesModal);

        back_button->setDefault(false);
        update_quizes_button->setDefault(false);
        add_quiz_button->setDefault(false);


        QMetaObject::connectSlotsByName(AddUpdateQuizesModal);
    } // setupUi

    void retranslateUi(QDialog *AddUpdateQuizesModal)
    {
        AddUpdateQuizesModal->setWindowTitle(QCoreApplication::translate("AddUpdateQuizesModal", "Dialog", nullptr));
        back_button->setText(QCoreApplication::translate("AddUpdateQuizesModal", "Back", nullptr));
        update_quizes_button->setText(QCoreApplication::translate("AddUpdateQuizesModal", "View Quizes", nullptr));
        label->setText(QCoreApplication::translate("AddUpdateQuizesModal", "Add/Update Quizes", nullptr));
        add_quiz_button->setText(QCoreApplication::translate("AddUpdateQuizesModal", "Add Quiz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddUpdateQuizesModal: public Ui_AddUpdateQuizesModal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUPDATEQUIZESMODAL_H
