#include "choosetopicforquiz.h"
#include "ui_choosetopicforquiz.h"
#include "utils.h"

ChooseTopicForQuiz::ChooseTopicForQuiz(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ChooseTopicForQuiz)
{
    ui->setupUi(this);
    takeQuizModal = new TakeQuizModal(this);

    loadQuizTopics();
}

ChooseTopicForQuiz::~ChooseTopicForQuiz()
{
    delete ui;
}

void ChooseTopicForQuiz::on_back_button_clicked()
{
    this->hide();
    emit triggerShowMainWindow();
}

void ChooseTopicForQuiz::loadQuizTopics()
{
    // Clear previous UI elements
    QLayoutItem *child;
    while ((child = ui->verticalLayout->takeAt(0)) != nullptr) {
        delete child->widget();
        delete child;
    }

    QVector<QPair<QString, QPair<QString, QVector<QuizItem>>>> quizData = Utils::readFolderAndGetFileData("./db/");

    for (const auto& data : quizData) {
        QString topic = data.first;

        QPushButton *topicButton = new QPushButton(topic);
        connect(topicButton, &QPushButton::clicked, this, &ChooseTopicForQuiz::on_topic_button_clicked);
        ui->verticalLayout->addWidget(topicButton);
    }

    if (quizData.isEmpty()) {
        QLabel *noQuizzesLabel = new QLabel("No quizzes found.");
        ui->verticalLayout->addWidget(noQuizzesLabel);
    }
}


void ChooseTopicForQuiz::on_topic_button_clicked()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (button) {
        QString topic = button->text();
        takeQuizModal->setTopic(topic);
        this->hide();
        takeQuizModal->show();
    }
}
