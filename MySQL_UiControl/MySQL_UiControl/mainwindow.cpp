#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QFile>
#include <QLabel>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    db.setDatabaseName("Tempreture_Data"); // initial the db via
    db.setHostName("localhost");
    db.setUserName("root"); // login the mysql database
    db.setPassword("mysql"); // input the mysql passwd

    QPixmap pixmap;

    pixmap = QPixmap(":/MySQL0.jpg");
    this->ui->label_10->setPixmap(pixmap.scaled(this->ui->label_10->size())); //Set the logo for the App

    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(on_pushButton_clicked())); // connect the signal and slot
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked(bool checked)
{
    QString ID,NAME,TEMP;
    ID = ui->textEdit->toPlainText(); // Get the input content
    NAME = ui->textEdit_2->toPlainText();
    TEMP = ui->textEdit_3->toPlainText();
    qDebug() << "ID:" << ID << "  " << "NAME:" << NAME << "  " << "TEMP:" << TEMP;

    qDebug() << "Aviliable SQL drivers!";
    QStringList drivers = QSqlDatabase::drivers(); //Getting the support databases,if do not have the database driver,we can not use this databse
    foreach(QString driver,drivers)
        qDebug() << driver;

    if(!db.open()) // Connect to the database
    {
        qDebug() << "failed to connect to the mysql database!";
    }
    else
    {
        qDebug() << "Mysql is successfully Opened!";
    }

    QSqlQuery query(db); //Create a new query for db,use query to change the content


    QString Command_insert[] = {"insert into ","GanSu","BeiJing"," values(",")"};
    QString Command = "";
    Command = Command_insert[0]+Command_insert[1]+Command_insert[3]+ID+","+"\""+NAME+"\""+","+TEMP+Command_insert[4]; // Combine the command

    qDebug() << Command;

    query.exec(Command); // excute the command to control the database
}

void MainWindow::on_pushButton_2_clicked()
{
    if(!db.open())
    {
        qDebug() << "failed to connect to the mysql database!";
    }
    else
    {
        qDebug() << "Mysql is successfully Opened!";
    }

    QSqlQuery query(db);
    QString name,command;
    QString Command_search[] = {"select * from GanSu where name=","'"};

    name = ui->SearchInput->toPlainText();
    qDebug() << name;
    command = Command_search[0] + Command_search[1] + name + Command_search[1];

    qDebug() << command;

    query.exec(command);

    while(query.next()) // wait for database finish the command just now
    {
        int val1 = query.value(0).toInt();
        QString val2 = query.value(1).toString(); // Getting the content in the query!
        int val3 = query.value(3).toInt();
        qDebug() << val1 << val2 << val3;

        ui->SearchRes->setText(query.value(0).toString()+query.value(1).toString()+query.value(2).toString());
    }
}
