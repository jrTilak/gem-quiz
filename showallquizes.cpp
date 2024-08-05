#include "showallquizes.h"
#include "ui_showallquizes.h"
#include "utils.h"
#include <QTreeWidget>
#include <QTreeWidgetItem>

ShowAllQuizes::ShowAllQuizes(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ShowAllQuizes)
{
    ui->setupUi(this);
    populateQuizData();
}

ShowAllQuizes::~ShowAllQuizes()
{
    delete ui;
}

void ShowAllQuizes::on_back_button_clicked()
{
    this->hide();
    emit goBack();
}


void ShowAllQuizes::populateQuizData() {
    // Clear existing items
    ui->treeWidget->clear();

    // Get the quiz data
    QVector<QPair<QString, QPair<QString, QVector<QuizItem>>>> quizData = Utils::readFolderAndGetFileData("./db/");

    if (quizData.isEmpty()) {
        // If no quizzes are found, display a message
        QTreeWidgetItem* noQuizzesItem = new QTreeWidgetItem(ui->treeWidget);
        noQuizzesItem->setText(0, "No quizzes found");
        return;
    }

    // Loop over the quiz data and populate the tree widget
    for (const auto& data : quizData) {
        QString topic = data.first;
        QVector<QuizItem> quizItems = data.second.second;
        addQuizToTreeWidget(topic, quizItems);
    }
}

void ShowAllQuizes::addQuizToTreeWidget(const QString& topic, const QVector<QuizItem>& quizItems) {
    // Create a tree widget item for the topic
    QTreeWidgetItem* topicItem = new QTreeWidgetItem(ui->treeWidget);
    topicItem->setText(0, topic);

    // Loop over the quiz items and add them as children of the topic item
    for (const QuizItem& item : quizItems) {
        QTreeWidgetItem* questionItem = new QTreeWidgetItem(topicItem);
        questionItem->setText(0, "Question: " + item.getQuestion());

        // Add options as children of the question item
        QStringList options = item.getOptions();
        for (int i = 0; i < options.size(); ++i) {
            QTreeWidgetItem* optionItem = new QTreeWidgetItem(questionItem);
            optionItem->setText(0, "Option " + QString::number(i + 1) + ": " + options[i]);

            // Highlight the correct answer
            if (i == item.getCorrectOption()) {
                optionItem->setBackground(0, QBrush(Qt::green));
            }
        }
    }
}
