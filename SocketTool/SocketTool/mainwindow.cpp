#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    client = new QTcpSocket(this);
    server = new QTcpSocket(this);

    connect(this->ui->Client_Button,SIGNAL(clicked(bool)),this,SLOT(on_Client_Button_clicked()));
    connect(this->ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(on_pushButton_clicked()));

    connect(this->ui->Client_Clear,SIGNAL(clicked(bool)),this,SLOT(on_Client_Clear_clicked()));
    connect(this->ui->Server_Clear,SIGNAL(clicked(bool)),this,SLOT(on_Server_Clear_clicked()));

    connect(this->ui->ServerSend,SIGNAL(clicked(bool)),this,SLOT(on_ServerSend_clicked()));

    connect(this->ui->Server_Button,SIGNAL(clicked(bool)),this,SLOT(on_Server_Button_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Client_Recieve_Data(void)
{
    QByteArray buf;
    buf = client->readAll();
    if(!buf.isEmpty())
    {
        QString str = this->ui->Client_Recieve->toPlainText();
        str += tr(buf);
        this->ui->Client_Recieve->clear();
        this->ui->Client_Recieve->appendPlainText(str);
    }
    buf.clear();
}

void MainWindow::on_Client_Button_clicked(bool checked)
{
    if(!ClientFlag)
    {
        QString IP,PORT;
        IP = this->ui->IP_Address->text();
        PORT = this->ui->Client_Port->text();

        qDebug() << IP;
        qDebug() << PORT;

        client->connectToHost(QHostAddress(IP),PORT.toInt(),QTcpSocket::ReadWrite);
        qDebug() << "Client is Started!";

        QObject::connect(client,&QTcpSocket::readyRead,this,&MainWindow::Client_Recieve_Data);
    }
    else
    {
        client->close();
        qDebug() << "Client is Closed!";
    }

    ClientFlag = !ClientFlag;
}

void MainWindow::on_pushButton_clicked(bool checked)
{
    if(ClientFlag)
    {
        QString Send_data;
        Send_data = this->ui->Client_Send->toPlainText();
        qDebug() << Send_data;
        client->write(Send_data.toLatin1());
        qDebug() << "Data sended!";
    }
}

void MainWindow::on_Client_Clear_clicked(bool checked)
{
    this->ui->Client_Recieve->clear();
    qDebug() << "Client_Recieve_CLear!";
}

void MainWindow::on_Server_Clear_clicked(bool checked)
{
    this->ui->Server_Recieve->clear();
    qDebug() << "Server_Recieve_Clear!";
}

void MainWindow::on_ServerSend_clicked(bool checked)
{
    qDebug() << "ServerData send!";
}

void MainWindow::on_Server_Button_clicked(bool checked)
{
    qDebug() << "Server Started!";
}
