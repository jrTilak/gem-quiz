#ifndef QUIZITEM_H
#define QUIZITEM_H
#include <QJsonObject>
#include <QString>
#include <QStringList>

class QuizItem
{
public:
    QuizItem(const QString& question, const QStringList& options, int correctOption);

    QString getQuestion() const;
    QStringList getOptions() const;
    int getCorrectOption() const;

    QJsonObject toJson() const;
     void fromJson(const QJsonObject& json);

private:
    QString question;
    QStringList options;
    int correctOption;
};

#endif // QUIZITEM_H
