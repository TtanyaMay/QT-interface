#include "outputwindow.h"
#include "ui_outputwindow.h"
#include <QtDebug>


OutputWindow::OutputWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OutputWindow)
{
    ui->setupUi(this);

    for(int i = 01; i < 32; i++){
        ui->comboBox->addItem(QString::number(i));
    }

     ui->comboBox_2->addItem("Січня");
     ui->comboBox_2->addItem("Лютого");
     ui->comboBox_2->addItem("Березня");
     ui->comboBox_2->addItem("Квітня");
     ui->comboBox_2->addItem("Травня");
     ui->comboBox_2->addItem("Червня");
     ui->comboBox_2->addItem("Липня");
     ui->comboBox_2->addItem("Серпня");
     ui->comboBox_2->addItem("Вересня");
     ui->comboBox_2->addItem("Жовтня");
     ui->comboBox_2->addItem("Листопада");
     ui->comboBox_2->addItem("Грудня");

    for(int i = 1970; i < 2020; i++){
        ui->comboBox_3->addItem(QString::number(i));
    }

    for(int i = 1991; i < 2050; i++){
        ui->comboBox_4->addItem(QString::number(i));
    }

    for(int i = 01; i < 32; i++){
        ui->comboBox_5->addItem(QString::number(i));
    }

    ui->comboBox_6->addItem("Січня");
    ui->comboBox_6->addItem("Лютого");
    ui->comboBox_6->addItem("Березня");
    ui->comboBox_6->addItem("Квітня");
    ui->comboBox_6->addItem("Травня");
    ui->comboBox_6->addItem("Червня");
    ui->comboBox_6->addItem("Липня");
    ui->comboBox_6->addItem("Серпня");
    ui->comboBox_6->addItem("Вересня");
    ui->comboBox_6->addItem("Жовтня");
    ui->comboBox_6->addItem("Листопада");
    ui->comboBox_6->addItem("Грудня");

    for(int i = 01; i < 32; i++){
        ui->comboBox_8->addItem(QString::number(i));
    }

     ui->comboBox_9->addItem("January");
     ui->comboBox_9->addItem("February");
     ui->comboBox_9->addItem("March");
     ui->comboBox_9->addItem("April");
     ui->comboBox_9->addItem("May");
     ui->comboBox_9->addItem("June");
     ui->comboBox_9->addItem("July");
     ui->comboBox_9->addItem("August");
     ui->comboBox_9->addItem("September ");
     ui->comboBox_9->addItem("October ");
     ui->comboBox_9->addItem("November ");
     ui->comboBox_9->addItem("December ");

     for(int i = 1970; i < 2020; i++){
         ui->comboBox_10->addItem(QString::number(i));
     }

    for(int i = 1991; i < 2050; i++){
        ui->comboBox_7->addItem(QString::number(i));
    }
}

OutputWindow::~OutputWindow()
{
    delete ui;
}

void OutputWindow::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие главного окна
}

void OutputWindow::on_pushButton_2_clicked()
{

}

void OutputWindow::on_comboBox_currentIndexChanged(const QString)
{
   //
    dayBirsday = ui->comboBox->currentText();
//   QTextStream Qcout(stdout); //вывод в консоль
//   Qcout << dayBirsday;
}

void OutputWindow::on_comboBox_2_currentTextChanged(const QString)
{
    monthBirsday = ui->comboBox_2->currentText();
}

void OutputWindow::on_comboBox_3_currentIndexChanged(const QString)
{
    yearBirsday = ui->comboBox_3->currentText();
}

QString OutputWindow::Birsday()
{
    return birsday = dayBirsday + monthBirsday + yearBirsday;
}

void OutputWindow::on_lineEdit_editingFinished()
{
    surnameUkr = ui->lineEdit->text();
}

void OutputWindow::on_lineEdit_2_editingFinished()
{
    nameUkr = ui->lineEdit_2->text();
}

void OutputWindow:: on_lineEdit_3_editingFinished()
{
    otchestvoUkr= ui->lineEdit_3->text();
}

void OutputWindow::on_comboBox_4_currentIndexChanged(const QString)
{
    entrance = ui->comboBox_4->currentText();
//    QTextStream Qcout(stdout); //вывод в консоль
//    Qcout << entrance;
}

void OutputWindow::on_lineEdit_6_editingFinished()
{
    group= ui->lineEdit_6->text();
}

void OutputWindow::on_lineEdit_4_editingFinished()
{
    lastName = ui->lineEdit_4->text();
}

void OutputWindow::on_lineEdit_5_editingFinished()
{
    nameEN = ui->lineEdit_5->text();
}

void OutputWindow::on_lineEdit_7_editingFinished()
{
    id = ui->lineEdit_7->text();
}

void OutputWindow::on_comboBox_5_currentIndexChanged(const QString &arg1)
{
    qDebug() << arg1;
    dayQuit = ui->comboBox_5->currentText();
}

void OutputWindow::on_comboBox_6_currentIndexChanged(const QString &arg1)
{
    qDebug() << arg1;
    monthQuit = ui->comboBox_6->currentText();
}

void OutputWindow::on_comboBox_7_currentIndexChanged(const QString &arg1)
{
    qDebug() << arg1;
    yearQuit = ui->comboBox_7->currentText();
}

QString OutputWindow::Deduction () // дата отчисления
{
    return deduction  = dayQuit + monthQuit + yearQuit;
}

void OutputWindow::on_lineEdit_8_editingFinished()
{
    reason = ui->lineEdit_8->text();
}

void OutputWindow::on_comboBox_8_currentIndexChanged(const QString &arg1)
{
    qDebug() << arg1;
    dayBirsEN = ui->comboBox_8->currentText();
}

void OutputWindow::on_comboBox_9_currentIndexChanged(const QString &arg1)
{
    qDebug() << arg1;
    monthBirsEN = ui->comboBox_9->currentText();
}

void OutputWindow::on_comboBox_10_currentIndexChanged(const QString &arg1)
{
    qDebug() << arg1;
    yearBirsEN = ui->comboBox_10->currentText();
}

QString OutputWindow::BirsdayEN () // дата отчисления
{
    return birsdayEN  = dayBirsEN + monthBirsEN + yearBirsEN;
}
