/********************************************************************************
** Form generated from reading UI file 'addquizmodal.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDQUIZMODAL_H
#define UI_ADDQUIZMODAL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_AddQuizModal
{
public:
    QPushButton *add_quiz_button;
    QLabel *header;
    QLineEdit *topic_input;
    QLabel *label_2;
    QLabel *question_label;
    QLineEdit *question_input;
    QLabel *option1_label;
    QLineEdit *option1_input;
    QLabel *option2_label;
    QLineEdit *option2_input;
    QLineEdit *option4_input;
    QLabel *option4_label;
    QLabel *option3_label;
    QLineEdit *option3_input;
    QRadioButton *option1_radio;
    QLabel *correct_option_label;
    QRadioButton *option2_radio;
    QRadioButton *option3_radio;
    QRadioButton *option4_radio;
    QPushButton *save_question_button;
    QPushButton *save_topic_button;

    void setupUi(QDialog *AddQuizModal)
    {
        if (AddQuizModal->objectName().isEmpty())
            AddQuizModal->setObjectName(QString::fromUtf8("AddQuizModal"));
        AddQuizModal->resize(722, 587);
        add_quiz_button = new QPushButton(AddQuizModal);
        add_quiz_button->setObjectName(QString::fromUtf8("add_quiz_button"));
        add_quiz_button->setGeometry(QRect(460, 180, 131, 31));
        QFont font;
        font.setPointSize(12);
        add_quiz_button->setFont(font);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("document-new");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        add_quiz_button->setIcon(icon);
        add_quiz_button->setAutoRepeat(false);
        add_quiz_button->setAutoDefault(true);
        add_quiz_button->setFlat(false);
        header = new QLabel(AddQuizModal);
        header->setObjectName(QString::fromUtf8("header"));
        header->setGeometry(QRect(0, 20, 711, 91));
        QFont font1;
        font1.setPointSize(26);
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setKerning(false);
        font1.setStyleStrategy(QFont::PreferDefault);
        header->setFont(font1);
        header->setAlignment(Qt::AlignCenter);
        topic_input = new QLineEdit(AddQuizModal);
        topic_input->setObjectName(QString::fromUtf8("topic_input"));
        topic_input->setGeometry(QRect(140, 180, 301, 31));
        label_2 = new QLabel(AddQuizModal);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 140, 141, 31));
        QFont font2;
        font2.setPointSize(14);
        label_2->setFont(font2);
        question_label = new QLabel(AddQuizModal);
        question_label->setObjectName(QString::fromUtf8("question_label"));
        question_label->setEnabled(true);
        question_label->setGeometry(QRect(80, 140, 141, 31));
        question_label->setFont(font2);
        question_label->setStyleSheet(QString::fromUtf8(""));
        question_input = new QLineEdit(AddQuizModal);
        question_input->setObjectName(QString::fromUtf8("question_input"));
        question_input->setGeometry(QRect(80, 170, 551, 31));
        option1_label = new QLabel(AddQuizModal);
        option1_label->setObjectName(QString::fromUtf8("option1_label"));
        option1_label->setGeometry(QRect(80, 220, 141, 31));
        option1_label->setFont(font);
        option1_input = new QLineEdit(AddQuizModal);
        option1_input->setObjectName(QString::fromUtf8("option1_input"));
        option1_input->setGeometry(QRect(80, 250, 251, 31));
        option2_label = new QLabel(AddQuizModal);
        option2_label->setObjectName(QString::fromUtf8("option2_label"));
        option2_label->setGeometry(QRect(350, 220, 141, 31));
        option2_label->setFont(font);
        option2_input = new QLineEdit(AddQuizModal);
        option2_input->setObjectName(QString::fromUtf8("option2_input"));
        option2_input->setGeometry(QRect(350, 250, 281, 31));
        option4_input = new QLineEdit(AddQuizModal);
        option4_input->setObjectName(QString::fromUtf8("option4_input"));
        option4_input->setGeometry(QRect(350, 320, 281, 31));
        option4_label = new QLabel(AddQuizModal);
        option4_label->setObjectName(QString::fromUtf8("option4_label"));
        option4_label->setGeometry(QRect(350, 290, 141, 31));
        option4_label->setFont(font);
        option3_label = new QLabel(AddQuizModal);
        option3_label->setObjectName(QString::fromUtf8("option3_label"));
        option3_label->setGeometry(QRect(80, 290, 141, 31));
        option3_label->setFont(font);
        option3_input = new QLineEdit(AddQuizModal);
        option3_input->setObjectName(QString::fromUtf8("option3_input"));
        option3_input->setGeometry(QRect(80, 320, 251, 31));
        option1_radio = new QRadioButton(AddQuizModal);
        option1_radio->setObjectName(QString::fromUtf8("option1_radio"));
        option1_radio->setGeometry(QRect(80, 410, 111, 24));
        correct_option_label = new QLabel(AddQuizModal);
        correct_option_label->setObjectName(QString::fromUtf8("correct_option_label"));
        correct_option_label->setGeometry(QRect(80, 380, 141, 31));
        correct_option_label->setFont(font);
        option2_radio = new QRadioButton(AddQuizModal);
        option2_radio->setObjectName(QString::fromUtf8("option2_radio"));
        option2_radio->setGeometry(QRect(190, 410, 111, 24));
        option3_radio = new QRadioButton(AddQuizModal);
        option3_radio->setObjectName(QString::fromUtf8("option3_radio"));
        option3_radio->setGeometry(QRect(310, 410, 111, 24));
        option4_radio = new QRadioButton(AddQuizModal);
        option4_radio->setObjectName(QString::fromUtf8("option4_radio"));
        option4_radio->setGeometry(QRect(420, 410, 111, 24));
        save_question_button = new QPushButton(AddQuizModal);
        save_question_button->setObjectName(QString::fromUtf8("save_question_button"));
        save_question_button->setGeometry(QRect(540, 480, 171, 31));
        save_question_button->setFont(font);
        QIcon icon1;
        iconThemeName = QString::fromUtf8("list-add");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        save_question_button->setIcon(icon1);
        save_question_button->setAutoRepeat(false);
        save_question_button->setAutoDefault(true);
        save_question_button->setFlat(false);
        save_topic_button = new QPushButton(AddQuizModal);
        save_topic_button->setObjectName(QString::fromUtf8("save_topic_button"));
        save_topic_button->setGeometry(QRect(540, 530, 171, 31));
        save_topic_button->setFont(font);
        QIcon icon2;
        iconThemeName = QString::fromUtf8("media-floppy");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        save_topic_button->setIcon(icon2);
        save_topic_button->setAutoRepeat(false);
        save_topic_button->setAutoDefault(true);
        save_topic_button->setFlat(false);

        retranslateUi(AddQuizModal);

        add_quiz_button->setDefault(false);
        save_question_button->setDefault(false);
        save_topic_button->setDefault(true);


        QMetaObject::connectSlotsByName(AddQuizModal);
    } // setupUi

    void retranslateUi(QDialog *AddQuizModal)
    {
        AddQuizModal->setWindowTitle(QCoreApplication::translate("AddQuizModal", "Dialog", nullptr));
        add_quiz_button->setText(QCoreApplication::translate("AddQuizModal", "Add", nullptr));
        header->setText(QCoreApplication::translate("AddQuizModal", "Add Quizes", nullptr));
        label_2->setText(QCoreApplication::translate("AddQuizModal", "Choose Topic", nullptr));
        question_label->setText(QCoreApplication::translate("AddQuizModal", "Question", nullptr));
        question_input->setText(QString());
        option1_label->setText(QCoreApplication::translate("AddQuizModal", "Option 1", nullptr));
        option1_input->setText(QString());
        option2_label->setText(QCoreApplication::translate("AddQuizModal", "Option 2", nullptr));
        option2_input->setText(QString());
        option4_input->setText(QString());
        option4_label->setText(QCoreApplication::translate("AddQuizModal", "Option 4", nullptr));
        option3_label->setText(QCoreApplication::translate("AddQuizModal", "Option 3", nullptr));
        option3_input->setText(QString());
        option1_radio->setText(QCoreApplication::translate("AddQuizModal", "Option 1", nullptr));
        correct_option_label->setText(QCoreApplication::translate("AddQuizModal", "Correct Option", nullptr));
        option2_radio->setText(QCoreApplication::translate("AddQuizModal", "Option 2", nullptr));
        option3_radio->setText(QCoreApplication::translate("AddQuizModal", "Option 3", nullptr));
        option4_radio->setText(QCoreApplication::translate("AddQuizModal", "Option 4", nullptr));
        save_question_button->setText(QCoreApplication::translate("AddQuizModal", "Save Question", nullptr));
        save_topic_button->setText(QCoreApplication::translate("AddQuizModal", "Save Topic", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddQuizModal: public Ui_AddQuizModal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDQUIZMODAL_H
