#ifndef CHANGESUBJECT_H
#define CHANGESUBJECT_H

#include <QWidget>
#include <insubject.h>

namespace Ui {
class ChangeSubject;
}

class ChangeSubject : public QWidget
{
    Q_OBJECT

public:
    explicit ChangeSubject(QWidget *parent = nullptr);
    ~ChangeSubject();

signals:
    void firstWindow();  // Сигнал для первого окна на открытие

private slots:
    void on_pushButton_2_clicked();

    void on_comboBox_editTextChanged(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::ChangeSubject *ui;
    InSubject *fourWindow;
    QString nameSubject; // название предмета
};

#endif // CHANGESUBJECT_H
