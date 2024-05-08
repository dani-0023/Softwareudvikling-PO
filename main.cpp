#include <QCoreApplication>
#include <QDebug>
#include <QSql>
#include <QSqlDatabase>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "version" << QSqlDatabase::drivers();

    return a.exec();
}
