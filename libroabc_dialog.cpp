#include "libroabc_dialog.h"
#include "ui_libroabc_dialog.h"

#include <QSqlRelationalTableModel>
#include <QSqlRelationalDelegate>
#include <QSqlRelation>


enum ColumnaLibro{
    ID,
    TITULO,
    AUTOR,
    EDITORIAL
};

libroABC_Dialog::libroABC_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::libroABC_Dialog)
{
    ui->setupUi(this);
    mModel = new QSqlRelationalTableModel(this);
    mDelegate = new QSqlRelationalDelegate(this);

    mModel->setTable("libro");
    mModel->select();
    mModel->setHeaderData(ID,Qt::Horizontal,tr("ID"));
    mModel->setHeaderData(TITULO,Qt::Horizontal, tr("Título"));
    mModel->setHeaderData(AUTOR,Qt::Horizontal,tr("Autor"));
    mModel->setHeaderData(EDITORIAL,Qt::Horizontal,tr("Editorial"));

    mModel->setRelation(AUTOR, QSqlRelation("autor","id","nombre"));
    mModel->setRelation(EDITORIAL, QSqlRelation("editorial","id","nombre"));

    ui->tableView->setModel(mModel);
    ui->tableView->setItemDelegate(mDelegate);
    ui->tableView->addActions({ui->actionAlta,ui->actionBaja});
}

libroABC_Dialog::~libroABC_Dialog()
{
    delete ui;
}

void libroABC_Dialog::on_actionAlta_triggered()
{
    mModel->insertRow(mModel->rowCount());
}

void libroABC_Dialog::on_actionBaja_triggered()
{
    mModel->removeRow(ui->tableView->currentIndex().row());
    mModel->select();
}
