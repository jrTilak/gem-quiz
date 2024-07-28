/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *take_quiz_button;
    QPushButton *add_update_quizes_button;
    QPushButton *help_button;
    QPushButton *exit_button;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 50, 361, 91));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        font.setUnderline(true);
        font.setKerning(false);
        font.setStyleStrategy(QFont::PreferDefault);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        take_quiz_button = new QPushButton(centralwidget);
        take_quiz_button->setObjectName(QString::fromUtf8("take_quiz_button"));
        take_quiz_button->setGeometry(QRect(270, 220, 241, 31));
        QFont font1;
        font1.setPointSize(12);
        take_quiz_button->setFont(font1);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("document-new")));
        take_quiz_button->setIcon(icon);
        take_quiz_button->setAutoRepeat(false);
        take_quiz_button->setAutoDefault(true);
        take_quiz_button->setFlat(false);
        add_update_quizes_button = new QPushButton(centralwidget);
        add_update_quizes_button->setObjectName(QString::fromUtf8("add_update_quizes_button"));
        add_update_quizes_button->setGeometry(QRect(270, 260, 241, 31));
        add_update_quizes_button->setFont(font1);
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("document-open")));
        add_update_quizes_button->setIcon(icon1);
        add_update_quizes_button->setAutoRepeat(false);
        add_update_quizes_button->setAutoDefault(true);
        add_update_quizes_button->setFlat(false);
        help_button = new QPushButton(centralwidget);
        help_button->setObjectName(QString::fromUtf8("help_button"));
        help_button->setGeometry(QRect(270, 300, 241, 31));
        help_button->setFont(font1);
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("system-help")));
        help_button->setIcon(icon2);
        help_button->setAutoRepeat(false);
        help_button->setAutoDefault(true);
        help_button->setFlat(false);
        exit_button = new QPushButton(centralwidget);
        exit_button->setObjectName(QString::fromUtf8("exit_button"));
        exit_button->setGeometry(QRect(270, 520, 241, 31));
        exit_button->setFont(font1);
        QIcon icon3(QIcon::fromTheme(QString::fromUtf8("system-log-out")));
        exit_button->setIcon(icon3);
        exit_button->setAutoRepeat(false);
        exit_button->setAutoDefault(true);
        exit_button->setFlat(false);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(exit_button, SIGNAL(clicked()), MainWindow, SLOT(close()));

        take_quiz_button->setDefault(false);
        add_update_quizes_button->setDefault(false);
        help_button->setDefault(false);
        exit_button->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Welcome to GemQuiz", nullptr));
        take_quiz_button->setText(QCoreApplication::translate("MainWindow", "Take Quiz", nullptr));
        add_update_quizes_button->setText(QCoreApplication::translate("MainWindow", "Add / Update Quizes", nullptr));
        help_button->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        exit_button->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
