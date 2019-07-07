#ifndef CHANGEMARK_H
#define CHANGEMARK_H

#include <QWidget>
#include <inmark.h>


namespace Ui {
class ChangeMark;
}

class ChangeMark : public QWidget
{
    Q_OBJECT

public:
    explicit ChangeMark(QWidget *parent = nullptr);
    ~ChangeMark();

signals:
    void firstWindow();  // Сигнал для первого окна на открытие


private slots:
    void on_lineEdit_editingFinished();

    void on_comboBox_editTextChanged(const QString &arg1);

    void on_pushButton_2_clicked();



    void on_pushButton_clicked();

private:
    Ui::ChangeMark *ui;
    InMark *myMark; //окно ввода оценок
    QString id; // студента
    QString nameSubject; // название предмета
};

#endif // CHANGEMARK_H
