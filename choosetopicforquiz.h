#ifndef CHOOSETOPICFORQUIZ_H
#define CHOOSETOPICFORQUIZ_H

#include <QDialog>
#include "takequizmodal.h"

namespace Ui {
class ChooseTopicForQuiz;
}

class ChooseTopicForQuiz : public QDialog
{
    Q_OBJECT

public:
    explicit ChooseTopicForQuiz(QWidget *parent = nullptr);
    ~ChooseTopicForQuiz();

signals:
    void triggerShowMainWindow();

private slots:
    void on_back_button_clicked();
    void on_topic_button_clicked();

private:
    Ui::ChooseTopicForQuiz *ui;
    TakeQuizModal *takeQuizModal;

    void loadQuizTopics();
};

#endif // CHOOSETOPICFORQUIZ_H
