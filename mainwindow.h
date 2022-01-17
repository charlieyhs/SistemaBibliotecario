#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dubasedatos.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionSalir_triggered();

    void on_actionLibroABC_triggered();

    void on_actionAutorABC_triggered();

    void on_actionEditorialABC_triggered();

    void on_actionLibroConsulta_triggered();

private:
    Ui::MainWindow *ui;
    DuBaseDatos mBaseDatos;
};
#endif // MAINWINDOW_H
