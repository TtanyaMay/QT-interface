#ifndef ANOTHERWINDOW_H
#define ANOTHERWINDOW_H

#include <QWidget>
#include <QTextStream>

#include "base\Base.h"

namespace Ui {
    class AnotherWindow;
};

class AnotherWindow : public QWidget, 
	public I_Database
{
    Q_OBJECT

    public:
        explicit AnotherWindow(QWidget *parent = nullptr);
        ~AnotherWindow();

    signals:
        void firstWindow();  // Сигнал для первого окна на открытие

    private slots:
        // Слот-обработчик нажатия кнопки
        void on_pushButton_clicked();

        void on_pushButton_2_clicked();

        void on_lineEdit_editingFinished();

        void on_lineEdit_2_editingFinished();

        void on_lineEdit_3_editingFinished();

        void on_comboBox_4_currentIndexChanged(const QString &arg1);

        void on_lineEdit_6_editingFinished();

        void on_lineEdit_4_editingFinished();

        void on_lineEdit_8_editingFinished();

        void on_lineEdit_5_editingFinished();

        void on_lineEdit_9_editingFinished();

        void on_comboBox_currentIndexChanged(const QString &arg1);

        void on_comboBox_2_currentIndexChanged(const QString &arg1);

        void on_comboBox_3_currentIndexChanged(const QString &arg1);

        void on_comboBox_8_currentIndexChanged(const QString &arg1);

        void on_comboBox_9_currentIndexChanged(const QString &arg1);

        void on_comboBox_10_currentIndexChanged(const QString &arg1);

        void on_comboBox_5_currentIndexChanged(const QString &arg1);

        void on_comboBox_6_currentIndexChanged(const QString &arg1);

        void on_comboBox_7_currentIndexChanged(const QString &arg1);


private:
        Ui::AnotherWindow *ui;
//        Ui::AnotherWindow *comboBox;
//        Ui::AnotherWindow *comboBox_2;
//        Ui::AnotherWindow *comboBox_3;
//        Ui::AnotherWindow *comboBox_4;
        QString birsday; //Дата рождения
        QString dayBirsday;
        QString monthBirsday;
        QString yearBirsday;
        QString Deduction();
        QString Birsday();
        QString BirsdayEN();
        QString NameUA();
        QString NameEn();
        QString NameEN;
        QString NameUa;
       // QString InsertIntoDatabase(): InsertIntoDatabase();
        QString nameUkr;
        QString surnameUkr;
        QString otchestvoUkr;
        QString entrance;  //год поступления
        QString group;
        QString lastName;
        QString nameEN;
        QString reason;
        QString id; // студента
        QString deduction;
        QString dayBirsEN;
        QString monthBirsEN;
        QString yearBirsEN;
        QString birsdayEN;
        QString dayQuit;
        QString monthQuit;
        QString yearQuit;
};


#endif // ANOTHERWINDOW_H
