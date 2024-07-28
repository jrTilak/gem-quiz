#include "quizitem.h"
#include <QJsonArray>

QuizItem::QuizItem(const QString& question, const QStringList& options, int correctOption)
    : question(question), options(options), correctOption(correctOption)
{
}

QString QuizItem::getQuestion() const
{
    return question;
}

QStringList QuizItem::getOptions() const
{
    return options;
}

int QuizItem::getCorrectOption() const
{
    return correctOption;
}

QJsonObject QuizItem::toJson() const
{
    QJsonObject json;
    json["question"] = question;
    QJsonArray optionsArray;
    for (const QString& option : options) {
        optionsArray.append(option);
    }
    json["options"] = optionsArray;
    json["correctOption"] = correctOption;
    return json;
}

void QuizItem::fromJson(const QJsonObject& json) {
    question = json["question"].toString();
    QJsonArray optionsArray = json["options"].toArray();
    options.clear();
    for (const QJsonValue& value : optionsArray) {
        options.append(value.toString());
    }
    correctOption = json["correctOption"].toInt();
}
