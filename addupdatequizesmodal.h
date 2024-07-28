#ifndef ADDUPDATEQUIZESMODAL_H
#define ADDUPDATEQUIZESMODAL_H

#include <QDialog>

#include "addquizmodal.h"
#include "showallquizes.h"

namespace Ui {
class AddUpdateQuizesModal;
}

class AddUpdateQuizesModal : public QDialog
{
    Q_OBJECT

public:
    explicit AddUpdateQuizesModal(QWidget *parent = nullptr);
    ~AddUpdateQuizesModal();

signals:
    void triggerShowMainWindow();

private slots:
    void on_back_button_clicked();
    void handleShowWindow();
    void on_add_quiz_button_clicked();

    void on_update_quizes_button_clicked();

private:
    Ui::AddUpdateQuizesModal *ui;
    AddQuizModal * addQuizModal;
    ShowAllQuizes * showAllQuizes;
};

#endif // ADDUPDATEQUIZESMODAL_H
