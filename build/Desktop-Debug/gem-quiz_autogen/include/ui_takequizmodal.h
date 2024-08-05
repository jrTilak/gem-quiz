/********************************************************************************
** Form generated from reading UI file 'takequizmodal.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAKEQUIZMODAL_H
#define UI_TAKEQUIZMODAL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_TakeQuizModal
{
public:
    QLabel *label;
    QLabel *question_label;
    QLabel *label_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QPushButton *pushButton;

    void setupUi(QDialog *TakeQuizModal)
    {
        if (TakeQuizModal->objectName().isEmpty())
            TakeQuizModal->setObjectName(QString::fromUtf8("TakeQuizModal"));
        TakeQuizModal->resize(778, 644);
        label = new QLabel(TakeQuizModal);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 201, 20));
        question_label = new QLabel(TakeQuizModal);
        question_label->setObjectName(QString::fromUtf8("question_label"));
        question_label->setGeometry(QRect(20, 60, 741, 151));
        QFont font;
        font.setFamily(QString::fromUtf8("URW Gothic"));
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(false);
        question_label->setFont(font);
        question_label->setWordWrap(true);
        label_2 = new QLabel(TakeQuizModal);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 220, 91, 31));
        QFont font1;
        font1.setPointSize(16);
        label_2->setFont(font1);
        radioButton = new QRadioButton(TakeQuizModal);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(40, 260, 711, 24));
        QFont font2;
        font2.setPointSize(14);
        radioButton->setFont(font2);
        radioButton_2 = new QRadioButton(TakeQuizModal);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(40, 290, 711, 24));
        radioButton_2->setFont(font2);
        radioButton_3 = new QRadioButton(TakeQuizModal);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(40, 320, 711, 24));
        radioButton_3->setFont(font2);
        radioButton_4 = new QRadioButton(TakeQuizModal);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(40, 350, 730, 24));
        radioButton_4->setFont(font2);
        pushButton = new QPushButton(TakeQuizModal);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(597, 595, 151, 31));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("go-next");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        pushButton->setIcon(icon);

        retranslateUi(TakeQuizModal);

        QMetaObject::connectSlotsByName(TakeQuizModal);
    } // setupUi

    void retranslateUi(QDialog *TakeQuizModal)
    {
        TakeQuizModal->setWindowTitle(QCoreApplication::translate("TakeQuizModal", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TakeQuizModal", "Question 1 out of 5", nullptr));
        question_label->setText(QCoreApplication::translate("TakeQuizModal", "Question", nullptr));
        label_2->setText(QCoreApplication::translate("TakeQuizModal", "Options", nullptr));
        radioButton->setText(QCoreApplication::translate("TakeQuizModal", "RadioButton", nullptr));
        radioButton_2->setText(QCoreApplication::translate("TakeQuizModal", "RadioButton", nullptr));
        radioButton_3->setText(QCoreApplication::translate("TakeQuizModal", "RadioButton", nullptr));
        radioButton_4->setText(QCoreApplication::translate("TakeQuizModal", "RadioButton", nullptr));
        pushButton->setText(QCoreApplication::translate("TakeQuizModal", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TakeQuizModal: public Ui_TakeQuizModal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAKEQUIZMODAL_H
