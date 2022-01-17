#ifndef LIBROABC_DIALOG_H
#define LIBROABC_DIALOG_H

#include <QDialog>

namespace Ui {
class libroABC_Dialog;
}

class QSqlRelationalTableModel;
class QSqlRelationalDelegate;

class libroABC_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit libroABC_Dialog(QWidget *parent = nullptr);
    ~libroABC_Dialog();

private slots:
    void on_actionAlta_triggered();

    void on_actionBaja_triggered();

private:
    Ui::libroABC_Dialog *ui;
    QSqlRelationalTableModel *mModel;
    QSqlRelationalDelegate *mDelegate;

};

#endif // LIBROABC_DIALOG_H
