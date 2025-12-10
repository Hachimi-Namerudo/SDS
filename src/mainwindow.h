#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QTime>
#include <QFile>
#include <QRadioButton>
#include <QButtonGroup>
#include "question.h"
#include "agreement.h"
#include "instruction.h"

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

    void pull(int index);
    void push(int index);
    void test(int i);
    void debug();
    void calculate();

public slots:
    void on_Agreement_clicked();

    void on_ins_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_Enter_clicked();


    void on_pushButton_3_clicked();

    void on_nextPage_clicked();

    void on_prePage_clicked();

    void on_submit_clicked();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QVector<Question*> questions;
    int currentPage = 0;
    double raw = 0.0;
    double totalScore = 0.0;
    QTime tmps;

};
#endif // MAINWINDOW_H
