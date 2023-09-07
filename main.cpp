#include <QCoreApplication>
#include <QHostAddress>
#include <QSqlDatabase>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QHostAddress ip;
    ip.setAddress("1.2.3.4");
    QSqlDatabase datab;
    qDebug() << "IP address: "+ip.toString() + ",  Database Name - " + datab.databaseName();

    return a.exec();
}
