#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    client = new QTcpSocket(this);

    server = new QTcpServer(this);
    client_connect = new QTcpSocket(this);

    TimeMonitor = new QTimer(this);
    TimeMonitor->setInterval(1000);
    TimeMonitor->start();

    QPixmap pixmap;

    pixmap = QPixmap(":/new/prefix1/socket.jpg");
    this->ui->Corver->setPixmap(pixmap.scaled(this->ui->Corver->size()));

    connect(this->ui->Client_Button,SIGNAL(clicked(bool)),this,SLOT(on_Client_Button_clicked()));
    connect(this->ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(on_pushButton_clicked()));

    connect(this->ui->Client_Clear,SIGNAL(clicked(bool)),this,SLOT(on_Client_Clear_clicked()));
    connect(this->ui->Server_Clear,SIGNAL(clicked(bool)),this,SLOT(on_Server_Clear_clicked()));

    connect(this->ui->ServerSend,SIGNAL(clicked(bool)),this,SLOT(on_ServerSend_clicked()));

    connect(this->ui->Server_Button,SIGNAL(clicked(bool)),this,SLOT(on_Server_Button_clicked()));

    connect(TimeMonitor,&QTimer::timeout,this,&MainWindow::TimeOutProcess);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::TimeOutProcess(void)
{
//    if(!server->isListening()){
//        this->ui->Server_Button->setStyleSheet("background-color: rgb(0,0,0);");
//    }
//    if(!client_connect->isOpen())
//    {
//        this->ui->Client_Button->setStyleSheet("background-color: rgb(0,0,0);");
//    }
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
        this->ui->Client_Button->setStyleSheet("background-color: rgb(85,170,0);");
    }
    else
    {
        this->ui->Client_Button->setStyleSheet("background-color: rgb(0,0,0);");
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

/************************************************************
 * Server Side Programming!
 * The Qt Socket Programming have ever finished binding the port!
 * The accept func is trigger by a new connection signal!
 ***********************************************************/

void MainWindow::readClient(void)
{
    QByteArray buf;
    buf = client_connect->readAll();
    if(!buf.isEmpty())
    {
        QString str = this->ui->Server_Recieve->toPlainText();
        str += tr(buf);
        this->ui->Server_Recieve->clear();
        this->ui->Server_Recieve->appendPlainText(str);
    }
    buf.clear();
}

void MainWindow::accepConnection(void)
{
    client_connect = server->nextPendingConnection();
    QObject::connect(client_connect,&QTcpSocket::readyRead,this,&MainWindow::readClient);
}

void MainWindow::on_Server_Clear_clicked(bool checked)
{
    this->ui->Server_Recieve->clear();
    qDebug() << "Server_Recieve_Clear!";
}

void MainWindow::on_ServerSend_clicked(bool checked)
{
    if(ServerFlag)
    {
        QString SendData;
        SendData = this->ui->Server_Send->toPlainText();
        client_connect->write(SendData.toLatin1());

        qDebug() << SendData;
        qDebug() << "ServerData send!";
    }
}

void MainWindow::on_Server_Button_clicked(bool checked)
{
    if(!ServerFlag)
    {
        QString MonitorPort;
        MonitorPort = this->ui->Server_Port->text();

        int PortNum;
        PortNum = MonitorPort.toInt();

        server->listen(QHostAddress::Any,PortNum);

        QObject::connect(server,&QTcpServer::newConnection,this,&MainWindow::accepConnection);

        qDebug() << "Server Started!";
        qDebug() << "PortNum:" << PortNum;
        this->ui->Server_Button->setStyleSheet("background-color: rgb(85,170,0);");
    }
    else
    {
        this->ui->Server_Button->setStyleSheet("background-color: rgb(0,0,0);");
        client_connect->close();
        server->close();
        qDebug() << "Server Closed!";
    }
    ServerFlag = !ServerFlag;
}
