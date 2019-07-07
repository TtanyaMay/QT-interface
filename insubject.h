#ifndef INSUBJECT_H
#define INSUBJECT_H

#include <QWidget>

namespace Ui {
class InSubject;
}

class InSubject : public QWidget
{
    Q_OBJECT

public:
    explicit InSubject(QWidget *parent = nullptr);
    ~InSubject();

signals:
    void firstWindow();  // Сигнал для первого окна на открытие

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_lineEdit_editingFinished();

    void on_lineEdit_2_editingFinished();

    void on_lineEdit_3_editingFinished();

private:
    Ui::InSubject *ui;
    QString idSubject;  //id предмету
    QString nameSubject; // название предмета
    QString numHours; // количество часов предмета

};

#endif // INSUBJECT_H
