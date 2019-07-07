#ifndef OUTPUTWINDOW_H
#define OUTPUTWINDOW_H

#include <QWidget>
#include <QTextStream>

namespace Ui {
class OutputWindow;
}

class OutputWindow : public QWidget
{
    Q_OBJECT

public:
    explicit OutputWindow(QWidget *parent = nullptr);
    ~OutputWindow();

signals:
    void firstWindow();  // Сигнал для первого окна на открытие

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_comboBox_currentIndexChanged(const QString);

    void on_comboBox_2_currentTextChanged(const QString);

    void on_comboBox_3_currentIndexChanged(const QString);

    void on_lineEdit_editingFinished();

    void on_lineEdit_2_editingFinished();

    void on_lineEdit_3_editingFinished();

    void on_comboBox_4_currentIndexChanged(const QString);

    void on_lineEdit_6_editingFinished();
   // QString Birsday();

    void on_lineEdit_4_editingFinished();

    void on_lineEdit_5_editingFinished();

    void on_lineEdit_7_editingFinished();

    void on_comboBox_5_currentIndexChanged(const QString &arg1);

    void on_comboBox_6_currentIndexChanged(const QString &arg1);

    void on_comboBox_7_currentIndexChanged(const QString &arg1);

    void on_lineEdit_8_editingFinished();


    void on_comboBox_8_currentIndexChanged(const QString &arg1);

    void on_comboBox_9_currentIndexChanged(const QString &arg1);

    void on_comboBox_10_currentIndexChanged(const QString &arg1);

private:
    Ui::OutputWindow *ui;
    Ui::OutputWindow *comboBox;
    Ui::OutputWindow *comboBox_2;
    Ui::OutputWindow *comboBox_3;
    Ui::OutputWindow *comboBox_4;
    Ui::OutputWindow *comboBox_5;
    Ui::OutputWindow *comboBox_6;
    Ui::OutputWindow *comboBox_7;
    QString birsday; //Дата рождения
    QString dayBirsday;
    QString monthBirsday;
    QString yearBirsday;
    QString nameUkr;
    QString surnameUkr;
    QString otchestvoUkr;
    QString entrance;
    QString group;
    QString Birsday();
    QString lastName;
    QString nameEN;
    QString reason;
    QString id;
    QString deduction; // полная дата отчисления
    QString dayQuit;
    QString monthQuit;
    QString yearQuit;
    QString Deduction();
    QString BirsdayEN();
    QString dayBirsEN;
    QString monthBirsEN;
    QString yearBirsEN;
    QString birsdayEN;




};

#endif // OUTPUTWINDOW_H
