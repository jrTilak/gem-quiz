#ifndef SHOWALLQUIZES_H
#define SHOWALLQUIZES_H
#include "quizitem.h"
#include <QDialog>

namespace Ui {
class ShowAllQuizes;
}

class ShowAllQuizes : public QDialog
{
    Q_OBJECT

public:
    explicit ShowAllQuizes(QWidget *parent = nullptr);
    void populateQuizData();
    ~ShowAllQuizes();

signals:
    void goBack();

private slots:
    void on_back_button_clicked();

private:
    Ui::ShowAllQuizes *ui;
    void addQuizToTreeWidget(const QString& topic, const QVector<QuizItem>& quizItems);
};

#endif // SHOWALLQUIZES_H
