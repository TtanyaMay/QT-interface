#include "inmark.h"
#include "ui_inmark.h"

InMark::InMark(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InMark)
{
    ui->setupUi(this);
}

InMark::~InMark()
{
    delete ui;
}

void InMark::on_pushButton_2_clicked()
{
    emit firstWindow();
    this->close();      // Закрываем окно
    // И вызываем сигнал на открытие главного окна
}

void InMark::on_pushButton_clicked()
{

    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
}

void InMark::on_lineEdit_editingFinished()
{
    id =  ui->lineEdit->text();
}

void InMark::on_lineEdit_2_editingFinished()
{
    idSubject = ui->lineEdit_2->text();
}

void InMark::on_lineEdit_3_editingFinished()
{
    mark = ui->lineEdit_3->text();
}



