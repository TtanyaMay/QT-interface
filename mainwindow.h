#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <anotherwindow.h>
#include <outputwindow.h>
#include <QTextStream>
#include <insubject.h>
#include <inmark.h>
#include <changesubject.h>
#include <changemark.h>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();


    void on_pushButton_3_clicked();

    void on_pushFind_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
    AnotherWindow *sWindow;  // окно ввода данных
    OutputWindow *thirdWindow; //окно вывода данных
    InSubject *fourWindow; // окно введения предмета
    ChangeSubject *fiveWindow; //окно редактирования предмета
    InMark *sixWindow; // окно введения оцінки
    ChangeMark *sevWindow; // окно изменения оценки
};

#endif // MAINWINDOW_H

