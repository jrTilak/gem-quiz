#include "takequizmodal.h"
#include "ui_takequizmodal.h"
#include "utils.h"
#include <QMessageBox>

TakeQuizModal::TakeQuizModal(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TakeQuizModal)
    , currentQuestionIndex(0)
    , correctAnswers(0)
{
    ui->setupUi(this);
}

TakeQuizModal::~TakeQuizModal()
{
    delete ui;
}

void TakeQuizModal::setTopic(const QString &topic)
{
    this->topic = topic;
    loadQuiz();
}

void TakeQuizModal::loadQuiz()
{
    QVector<QPair<QString, QPair<QString, QVector<QuizItem>>>> quizData = Utils::readFolderAndGetFileData("./db/");

    for (const auto& data : quizData) {
        if (data.first == topic) {
            quizItems = data.second.second;
            break;
        }
    }

    // if (quizItems.size() > 10) {
        // std::random_shuffle(quizItems.begin(), quizItems.end());
        // quizItems.resize(10);
    // }

    currentQuestionIndex = 0;
    correctAnswers = 0;

    showQuestion();
}

void TakeQuizModal::showQuestion()
{
    if (currentQuestionIndex >= quizItems.size()) {
        showFinalScore();
        return;
    }

    const QuizItem &item = quizItems[currentQuestionIndex];

    ui->label->setText(QString("Question %1 of %2: %3")
                           .arg(currentQuestionIndex + 1)
                           .arg(quizItems.size())
                           .arg(item.getQuestion()));
    ui->question_label->setText(item.getQuestion());
    ui->radioButton->setText(item.getOptions().at(0));
    ui->radioButton_2->setText(item.getOptions().at(1));
    ui->radioButton_3->setText(item.getOptions().at(2));
    ui->radioButton_4->setText(item.getOptions().at(3));

    ui->radioButton->setAutoExclusive(false);
    ui->radioButton->setChecked(false);
    ui->radioButton->setAutoExclusive(true);

    ui->radioButton_2->setAutoExclusive(false);
    ui->radioButton_2->setChecked(false);
    ui->radioButton_2->setAutoExclusive(true);

    ui->radioButton_3->setAutoExclusive(false);
    ui->radioButton_3->setChecked(false);
    ui->radioButton_3->setAutoExclusive(true);

    ui->radioButton_4->setAutoExclusive(false);
    ui->radioButton_4->setChecked(false);
    ui->radioButton_4->setAutoExclusive(true);
}

void TakeQuizModal::showFinalScore()
{
    QMessageBox::information(this, "Quiz Completed", QString("You scored %1 out of %2").arg(correctAnswers).arg(quizItems.size()));
    this->close();
}

void TakeQuizModal::on_pushButton_clicked()
{
    if (currentQuestionIndex < quizItems.size()) {
        int selectedOption = -1;
        if (ui->radioButton->isChecked()) selectedOption = 0;
        else if (ui->radioButton_2->isChecked()) selectedOption = 1;
        else if (ui->radioButton_3->isChecked()) selectedOption = 2;
        else if (ui->radioButton_4->isChecked()) selectedOption = 3;

        if (selectedOption == -1) {
            QMessageBox::warning(this, "No Option Selected", "Please select an option before proceeding.");
            return;
        }

        if (selectedOption + 1 == quizItems[currentQuestionIndex].getCorrectOption()) {
            correctAnswers++;
        }

        currentQuestionIndex++;
        showQuestion();
    }
}
