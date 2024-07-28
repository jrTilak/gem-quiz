/********************************************************************************
** Form generated from reading UI file 'choosetopicforquiz.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSETOPICFORQUIZ_H
#define UI_CHOOSETOPICFORQUIZ_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChooseTopicForQuiz
{
public:
    QLabel *header;
    QPushButton *back_button;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;

    void setupUi(QDialog *ChooseTopicForQuiz)
    {
        if (ChooseTopicForQuiz->objectName().isEmpty())
            ChooseTopicForQuiz->setObjectName(QString::fromUtf8("ChooseTopicForQuiz"));
        ChooseTopicForQuiz->resize(799, 630);
        header = new QLabel(ChooseTopicForQuiz);
        header->setObjectName(QString::fromUtf8("header"));
        header->setGeometry(QRect(30, -10, 711, 91));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        font.setUnderline(true);
        font.setKerning(false);
        font.setStyleStrategy(QFont::PreferDefault);
        header->setFont(font);
        header->setAlignment(Qt::AlignCenter);
        back_button = new QPushButton(ChooseTopicForQuiz);
        back_button->setObjectName(QString::fromUtf8("back_button"));
        back_button->setGeometry(QRect(530, 570, 241, 31));
        QFont font1;
        font1.setPointSize(12);
        back_button->setFont(font1);
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
        verticalLayoutWidget = new QWidget(ChooseTopicForQuiz);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(29, 79, 751, 461));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(ChooseTopicForQuiz);

        back_button->setDefault(false);


        QMetaObject::connectSlotsByName(ChooseTopicForQuiz);
    } // setupUi

    void retranslateUi(QDialog *ChooseTopicForQuiz)
    {
        ChooseTopicForQuiz->setWindowTitle(QCoreApplication::translate("ChooseTopicForQuiz", "Dialog", nullptr));
        header->setText(QCoreApplication::translate("ChooseTopicForQuiz", "Choose A Topic", nullptr));
        back_button->setText(QCoreApplication::translate("ChooseTopicForQuiz", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseTopicForQuiz: public Ui_ChooseTopicForQuiz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSETOPICFORQUIZ_H
