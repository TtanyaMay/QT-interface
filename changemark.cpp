#include "changemark.h"
#include "ui_changemark.h"

#include <QtDebug>
//#include "inmark.h"

ChangeMark::ChangeMark(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChangeMark)
{
    ui->setupUi(this);

    myMark = new InMark;

    connect(ui->pushButton, SIGNAL(clicked()), myMark, SLOT(show()));

   // connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(onButtonSend()));

}

ChangeMark::~ChangeMark()
{
    delete ui;

}
void ChangeMark::on_lineEdit_editingFinished()
{
    id = ui->lineEdit->text();
}

void ChangeMark::on_comboBox_editTextChanged(const QString &arg1)
{
    qDebug() <<arg1;
    nameSubject = ui->comboBox->currentText();
}

void ChangeMark::on_pushButton_2_clicked()
{
    this->close();      // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие главного окна
}

void ChangeMark::on_pushButton_clicked() // кнопка Прийняти
{

}
