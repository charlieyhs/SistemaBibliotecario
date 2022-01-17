#include "libroconsultadialog.h"
#include "ui_libroconsultadialog.h"
#include <QSqlQueryModel>

#define SELECT_LIBRO "SELECT libro.id AS ID,libro.titulo AS Título,autor.nombre AS autor,"\
    "editorial.nombre AS editorial FROM libro INNER JOIN editorial,autor "\
    "WHERE libro.idAutor=autor.id "\
    "AND libro.idEditorial=editorial.id"

LibroConsultaDialog::LibroConsultaDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LibroConsultaDialog)
{
    ui->setupUi(this);
    mModel = new QSqlQueryModel(this);
    mModel->setQuery(SELECT_LIBRO);
    ui->tableView->setModel(mModel);
}

LibroConsultaDialog::~LibroConsultaDialog()
{
    delete ui;
}
