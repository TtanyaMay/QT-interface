#include "changesubject.h"
#include "ui_changesubject.h"

#include <QtDebug>
#include <insubject.h>

ChangeSubject::ChangeSubject(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChangeSubject)
{
    ui->setupUi(this);

    fourWindow = new InSubject;
    connect(ui->pushButton, SIGNAL(clicked()), fourWindow, SLOT(show()));
}

ChangeSubject::~ChangeSubject()
{
    delete ui;
}

void ChangeSubject::on_pushButton_2_clicked()
{
    this->close();      // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие главного окна
}

void ChangeSubject::on_comboBox_editTextChanged(const QString &arg1)
{
    qDebug() << arg1;
    nameSubject = ui->comboBox->currentText();
}

void ChangeSubject::on_pushButton_clicked() // кнопка Прийняти
{

}
