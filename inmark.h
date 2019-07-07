#ifndef INMARK_H
#define INMARK_H

#include <QWidget>
//#include "changemark.h"


namespace Ui {
class InMark;
}

class InMark : public QWidget
{
    Q_OBJECT

public:
    explicit InMark(QWidget *parent = nullptr);
    ~InMark();


signals:
    void firstWindow();  // Сигнал для первого окна на открытие

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_lineEdit_editingFinished();

    void on_lineEdit_2_editingFinished();

    void on_lineEdit_3_editingFinished();


private:
    Ui::InMark *ui;
    QString idSubject;  //id предмету
    QString id;
    QString mark;
};

#endif // INMARK_H
