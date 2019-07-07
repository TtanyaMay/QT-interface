#include "insubject.h"
#include "ui_insubject.h"

InSubject::InSubject(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InSubject)
{
    ui->setupUi(this);

}

InSubject::~InSubject()
{
    delete ui;
}

void InSubject::on_pushButton_2_clicked()
{
    this->close();      // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие главного окна
}

void InSubject::on_pushButton_clicked()// кнопрка Прийняти
{

    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();

}

void InSubject::on_lineEdit_editingFinished()
{
    idSubject = ui->lineEdit->text();
}

void InSubject::on_lineEdit_2_editingFinished()
{
    nameSubject = ui->lineEdit_2->text();
}

void InSubject::on_lineEdit_3_editingFinished()
{
    numHours = ui->lineEdit_3->text();
}
