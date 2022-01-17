#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "autorabc_dialog.h"
#include "editorialabc_dialog.h"
#include "libroabc_dialog.h"
#include "libroconsultadialog.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,mBaseDatos("sistemaBiblioteca",
                "root","carlos123","localhost",3307)
{
    ui->setupUi(this);
    QString mensajeError1;
    if(!mBaseDatos.abreConexion(mensajeError1)){
        QMessageBox::critical(this,tr("Error1"),mensajeError1);
        close();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionSalir_triggered()
{
    close();
}

void MainWindow::on_actionLibroABC_triggered()
{
    libroABC_Dialog d(this);
    d.exec();
}

void MainWindow::on_actionAutorABC_triggered()
{
    AutorABC_Dialog d(this);
    d.exec();
}

void MainWindow::on_actionEditorialABC_triggered()
{
    EditorialABC_Dialog d(this);
    d.exec();
}

void MainWindow::on_actionLibroConsulta_triggered()
{
    LibroConsultaDialog d(this);
    d.exec();
}
