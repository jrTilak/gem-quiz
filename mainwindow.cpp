#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "helpdialog.h"
#include "addupdatequizesmodal.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    helpDialog = new HelpDialog(this);
    addUpdateQuizesDialog = new AddUpdateQuizesModal(this);
    chooseTopicForQuiz = new ChooseTopicForQuiz(this);

    // Connect the signal from HelpDialog to the slot in MainWindow
    connect(helpDialog, &HelpDialog::triggerShowMainWindow, this, &MainWindow::handleShowMainWindow);
    connect(addUpdateQuizesDialog, &AddUpdateQuizesModal::triggerShowMainWindow, this, &MainWindow::handleShowMainWindow);
    connect(chooseTopicForQuiz, &ChooseTopicForQuiz::triggerShowMainWindow, this, &MainWindow::handleShowMainWindow);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleShowMainWindow()
{
    this->show();  // Show the MainWindow when the signal is emitted
}

void MainWindow::on_help_button_clicked()
{
    this->hide();
    helpDialog->show();  // Use the existing instance of HelpDialog
}


void MainWindow::on_add_update_quizes_button_clicked()
{
    this->hide();
    addUpdateQuizesDialog->show();
}


void MainWindow::on_take_quiz_button_clicked()
{
    this->hide();
    chooseTopicForQuiz->show();

}

