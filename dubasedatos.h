#ifndef DUBASEDATOS_H
#define DUBASEDATOS_H

#include <QSqlDatabase>

class DuBaseDatos
{
public:
    DuBaseDatos(const QString &nombreBaseDatos,
                const QString &nombreUsuario,
                const QString &password,
                const QString &direccionServidor,
                int puertoConexion);
    bool abreConexion(QString &mensajeError);


private:
    QSqlDatabase mDb;
};

#endif // DUBASEDATOS_H
