#include <QCoreApplication>

#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Aviliable SQL drivers!";
    QStringList drivers = QSqlDatabase::drivers();
    foreach(QString driver,drivers)
        qDebug() << driver;
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setDatabaseName("Tempreture_Data");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("mysql");

    if(!db.open())
    {
        qDebug() << "failed to connect to the mysql database!";
    }
    else
    {
        qDebug() << "Mysql is successfully Opened!";
    }

    QSqlQuery query(db);
    query.exec("create table BeiJing(id int(4) not null primary key auto_increment,name char(20) not null,temp int(4) not null default '0')");
    query.exec("insert into BeiJing values(1,'HaiDian',30)");
    query.exec("select * from BeiJing");

    while(query.next())
    {
        int val1 = query.value(0).toInt();
        QString val2 = query.value(1).toString();
        qDebug() << val1 << val2;
    }

    query.exec("drop table GanSu_Data");

    query.exec("create table GanSu(id int(4) not null primary key auto_increment,name char(20) not null,temp int(4) not null default '0')");
    query.exec("insert into GanSu values(1,'HuiXian',27)");

    return a.exec();
}
