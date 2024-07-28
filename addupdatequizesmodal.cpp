#include "addupdatequizesmodal.h"
#include "ui_addupdatequizesmodal.h"
#include "showallquizes.h"

AddUpdateQuizesModal::AddUpdateQuizesModal(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddUpdateQuizesModal)
{
    ui->setupUi(this);

    addQuizModal = new AddQuizModal(this);
    showAllQuizes = new ShowAllQuizes(this);
    connect(addQuizModal, &AddQuizModal::returnToAddUpdateQuizesModal, this, &AddUpdateQuizesModal::handleShowWindow);
    connect(showAllQuizes, &ShowAllQuizes::goBack, this, &AddUpdateQuizesModal::handleShowWindow);
}

AddUpdateQuizesModal::~AddUpdateQuizesModal()
{
    delete ui;
}

void AddUpdateQuizesModal::on_back_button_clicked()
{
    emit triggerShowMainWindow();  // Emit the signal before closing
    this->close();
}

void AddUpdateQuizesModal::handleShowWindow()
{
    this->show();
}


void AddUpdateQuizesModal::on_add_quiz_button_clicked()
{
    this->close();
    addQuizModal->show();
}


void AddUpdateQuizesModal::on_update_quizes_button_clicked()
{
    this->hide();
    showAllQuizes->populateQuizData();
    showAllQuizes->show();
}

