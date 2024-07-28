/********************************************************************************
** Form generated from reading UI file 'showallquizes.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWALLQUIZES_H
#define UI_SHOWALLQUIZES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowAllQuizes
{
public:
    QPushButton *back_button;
    QLabel *label;
    QTreeWidget *treeWidget;

    void setupUi(QDialog *ShowAllQuizes)
    {
        if (ShowAllQuizes->objectName().isEmpty())
            ShowAllQuizes->setObjectName(QString::fromUtf8("ShowAllQuizes"));
        ShowAllQuizes->resize(785, 593);
        back_button = new QPushButton(ShowAllQuizes);
        back_button->setObjectName(QString::fromUtf8("back_button"));
        back_button->setGeometry(QRect(510, 540, 241, 31));
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
        label = new QLabel(ShowAllQuizes);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 0, 361, 91));
        QFont font1;
        font1.setPointSize(26);
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setKerning(false);
        font1.setStyleStrategy(QFont::PreferDefault);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        treeWidget = new QTreeWidget(ShowAllQuizes);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(20, 90, 741, 421));

        retranslateUi(ShowAllQuizes);

        back_button->setDefault(false);


        QMetaObject::connectSlotsByName(ShowAllQuizes);
    } // setupUi

    void retranslateUi(QDialog *ShowAllQuizes)
    {
        ShowAllQuizes->setWindowTitle(QCoreApplication::translate("ShowAllQuizes", "Dialog", nullptr));
        back_button->setText(QCoreApplication::translate("ShowAllQuizes", "Back", nullptr));
        label->setText(QCoreApplication::translate("ShowAllQuizes", "All Quizes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowAllQuizes: public Ui_ShowAllQuizes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWALLQUIZES_H
