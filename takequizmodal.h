#ifndef TAKEQUIZMODAL_H
#define TAKEQUIZMODAL_H

#include <QDialog>
#include "quizitem.h"

namespace Ui {
class TakeQuizModal;
}

class TakeQuizModal : public QDialog
{
    Q_OBJECT

public:
    explicit TakeQuizModal(QWidget *parent = nullptr);
    ~TakeQuizModal();

    void setTopic(const QString &topic);

private slots:
    void on_pushButton_clicked();

private: signals:
    void returnToPreviousWindow();

private:
    Ui::TakeQuizModal *ui;
    QVector<QuizItem> quizItems;
    int currentQuestionIndex;
    int correctAnswers;
    QString topic;

    void loadQuiz();
    void showQuestion();
    void showFinalScore();
};

#endif // TAKEQUIZMODAL_H
