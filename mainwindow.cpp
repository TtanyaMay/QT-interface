#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QDebug>

   MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    sWindow = new AnotherWindow; //окно ввода данных
    connect(sWindow, &AnotherWindow::firstWindow, this, &MainWindow::show);

    thirdWindow = new OutputWindow();   //окно редактирования информации
    connect(thirdWindow, &OutputWindow::firstWindow, this, &MainWindow::show);

    fourWindow = new InSubject(); // окно введения предмета
    connect(fourWindow, &InSubject::firstWindow, this, &MainWindow::show);

    fiveWindow = new ChangeSubject(); //окно редактирования предмета
    connect(fiveWindow, &ChangeSubject::firstWindow, this, &MainWindow::show);

    sixWindow = new InMark(); //окно внесения оценок
    connect(sixWindow, &InMark::firstWindow, this, &MainWindow::show);

    sevWindow = new ChangeMark(); //окно редактирования оценок
    connect(sevWindow, &ChangeMark::firstWindow, this, &MainWindow::show);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked(){ // открытие окна внесения данных

    sWindow->show();
    this->close();
}

void MainWindow::on_pushButton_3_clicked()
{
    this->close();
}

void MainWindow::on_pushButton_2_clicked() // открытие окна редактирования данных
{
    thirdWindow->show();
    this->close();
}

void MainWindow::on_pushButton_6_clicked() // открытие окна внесения нового предмета
{
    fourWindow->show();
    this->close();
}

void MainWindow::on_pushButton_7_clicked() // открытие окна редактирования предмета
{
    fiveWindow->show();
    this->close();
}

void MainWindow::on_pushButton_4_clicked() // открытие окна внесения оценок
{
    sixWindow->show();
    this->close();
}

void MainWindow::on_pushButton_5_clicked() // открытие окна редактирования оценки
{
    sevWindow->show();
    this->close();
}



void MainWindow::on_pushFind_clicked()
{
    setStyleSheet("QMessageBox{"
                  "border: none; "
                  "width: 900; "
                  //"height: auto; "
                  "margin: 20; "
                  //"font-family: Arial; "
                  "font-style: normal; "
                  "font-size: 13pt; "
                  "color: #000000 ; }");
    QString surname = ui->surname->text();
    if(surname.size()){
        QMessageBox::StandardButton reply;
          reply = QMessageBox::question(this, "Результат пошуку", "Дані знайдено    .<br><br>       Друкувати?     ",
                                        QMessageBox::Yes|QMessageBox::No);
          if (reply == QMessageBox::Yes) {


          } else {

          }
        }
    else{
        QMessageBox::critical(this,"  Результат пошуку  ","  Дані відсутні     ") ;
    }   
}





