#ifndef ADDQUIZMODAL_H
#define ADDQUIZMODAL_H
#include "quizitem.h"
#include <QDialog>

namespace Ui {
class AddQuizModal;
}

class AddQuizModal : public QDialog
{
    Q_OBJECT

public:
    explicit AddQuizModal(QWidget *parent = nullptr);
    ~AddQuizModal();

signals:
    void returnToAddUpdateQuizesModal();

private slots:
    void on_add_quiz_button_clicked();

    void on_save_question_button_clicked();

    void on_save_topic_button_clicked();

private:
    Ui::AddQuizModal *ui;

    QVector<QuizItem> quizItems;
    QString topic;

    void resetQuestionInput();
    void resetUIToInitialState();
};

#endif // ADDQUIZMODAL_H
