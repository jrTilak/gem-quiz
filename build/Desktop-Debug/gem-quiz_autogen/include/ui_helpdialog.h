/********************************************************************************
** Form generated from reading UI file 'helpdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPDIALOG_H
#define UI_HELPDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_HelpDialog
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *HelpDialog)
    {
        if (HelpDialog->objectName().isEmpty())
            HelpDialog->setObjectName(QString::fromUtf8("HelpDialog"));
        HelpDialog->resize(400, 300);
        label = new QLabel(HelpDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 60, 341, 41));
        QFont font;
        font.setBold(false);
        label->setFont(font);
        label->setWordWrap(true);
        pushButton = new QPushButton(HelpDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 250, 88, 26));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("go-previous")));
        pushButton->setIcon(icon);
        label_2 = new QLabel(HelpDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 20, 101, 31));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        label_2->setFont(font1);
        label_3 = new QLabel(HelpDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 100, 341, 81));
        label_3->setFont(font);
        label_3->setWordWrap(true);

        retranslateUi(HelpDialog);

        QMetaObject::connectSlotsByName(HelpDialog);
    } // setupUi

    void retranslateUi(QDialog *HelpDialog)
    {
        HelpDialog->setWindowTitle(QCoreApplication::translate("HelpDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("HelpDialog", "1. You can  add quiz  by clicking add quiz section. ", nullptr));
        pushButton->setText(QCoreApplication::translate("HelpDialog", "Back", nullptr));
        label_2->setText(QCoreApplication::translate("HelpDialog", "Help:", nullptr));
        label_3->setText(QCoreApplication::translate("HelpDialog", "2. You can play quiz game selecting Take Quiz Button and you can manually add topic-wise question and get your score  and question are in mcq form each question having 4 option", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelpDialog: public Ui_HelpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPDIALOG_H
