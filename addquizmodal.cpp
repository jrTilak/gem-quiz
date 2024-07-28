#include "addquizmodal.h"
#include "ui_addquizmodal.h"
#include "utils.h"
#include <QMessageBox>
#include "quizitem.h"

AddQuizModal::AddQuizModal(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddQuizModal)
{
    ui->setupUi(this);
    resetUIToInitialState();
}

AddQuizModal::~AddQuizModal()
{
    delete ui;
}

void AddQuizModal::on_add_quiz_button_clicked()
{
    topic = ui->topic_input->text().trimmed();

    if (topic.isEmpty()) {
        QMessageBox::critical(this, "Error", "Please choose a topic!");
        return;
    }

    if (Utils::fileExists("./db/" + topic + ".json")) {
        QMessageBox::critical(this, "Error", topic + " already exists, choose another one.");
        ui->topic_input->clear();
        return;
    }

    ui->header->setText("Topic: " + topic);

    ui->label_2->hide();
    ui->topic_input->hide();
    ui->add_quiz_button->hide();

    ui->correct_option_label->show();
    ui->question_label->show();
    ui->question_input->show();
    ui->option1_label->show();
    ui->option1_input->show();
    ui->option1_radio->show();
    ui->option2_label->show();
    ui->option2_input->show();
    ui->option2_radio->show();
    ui->option3_label->show();
    ui->option3_input->show();
    ui->option3_radio->show();
    ui->option4_label->show();
    ui->option4_input->show();
    ui->option4_radio->show();
    ui->save_question_button->show();
    ui->save_topic_button->show();
}

void AddQuizModal::on_save_question_button_clicked()
{
    QString question = ui->question_input->text().trimmed();

    if (question.isEmpty()) {
        QMessageBox::critical(this, "Error", "Please enter a question!");
        return;
    }

    QStringList options = {
        ui->option1_input->text().trimmed(),
        ui->option2_input->text().trimmed(),
        ui->option3_input->text().trimmed(),
        ui->option4_input->text().trimmed()
    };

    for (const QString &option : options) {
        if (option.isEmpty()) {
            QMessageBox::critical(this, "Error", "Please enter all options!");
            return;
        }
    }

    int correctIndex = -1;
    if (ui->option1_radio->isChecked()) {
        correctIndex = 0;
    } else if (ui->option2_radio->isChecked()) {
        correctIndex = 1;
    } else if (ui->option3_radio->isChecked()) {
        correctIndex = 2;
    } else if (ui->option4_radio->isChecked()) {
        correctIndex = 3;
    }

    if (correctIndex == -1) {
        QMessageBox::critical(this, "Error", "Please choose a correct option!");
        return;
    }

    QuizItem quizItem(question, options, correctIndex);
    quizItems.push_back(quizItem);

    QMessageBox::information(this, "Saved", "This question is added to this topic, add another question or save the topic!");

    resetQuestionInput();
}

void AddQuizModal::on_save_topic_button_clicked()
{
    if (quizItems.isEmpty()) {
        QMessageBox::critical(this, "Error", "Please add some questions!");
        return;
    }

    Utils::writeQuizItemsToJson("./db/" + topic + ".json", quizItems);
    QMessageBox::information(this, "Saved", "This topic is saved successfully!");

    emit returnToAddUpdateQuizesModal();
    this->close();
}

void AddQuizModal::resetQuestionInput()
{
    ui->question_input->clear();
    ui->option1_input->clear();
    ui->option2_input->clear();
    ui->option3_input->clear();
    ui->option4_input->clear();

    ui->option1_radio->setAutoExclusive(false);
    ui->option1_radio->setChecked(false);
    ui->option1_radio->setAutoExclusive(true);

    ui->option2_radio->setAutoExclusive(false);
    ui->option2_radio->setChecked(false);
    ui->option2_radio->setAutoExclusive(true);

    ui->option3_radio->setAutoExclusive(false);
    ui->option3_radio->setChecked(false);
    ui->option3_radio->setAutoExclusive(true);

    ui->option4_radio->setAutoExclusive(false);
    ui->option4_radio->setChecked(false);
    ui->option4_radio->setAutoExclusive(true);
}

void AddQuizModal::resetUIToInitialState()
{
    ui->header->setText("Add New Quiz");
    ui->topic_input->clear();
    ui->label_2->show();
    ui->topic_input->show();
    ui->add_quiz_button->show();

    ui->correct_option_label->hide();
    ui->question_label->hide();
    ui->question_input->hide();
    ui->option1_label->hide();
    ui->option1_input->hide();
    ui->option1_radio->hide();
    ui->option2_label->hide();
    ui->option2_input->hide();
    ui->option2_radio->hide();
    ui->option3_label->hide();
    ui->option3_input->hide();
    ui->option3_radio->hide();
    ui->option4_label->hide();
    ui->option4_input->hide();
    ui->option4_radio->hide();
    ui->save_question_button->hide();
    ui->save_topic_button->hide();
}

