#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "helpdialog.h"
#include "addupdatequizesmodal.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_help_button_clicked();

    void on_add_update_quizes_button_clicked();

public slots:
    void handleShowMainWindow();

private:
    Ui::MainWindow *ui;
    HelpDialog * helpDialog;
    AddUpdateQuizesModal *addUpdateQuizesDialog;
};
#endif // MAINWINDOW_H
