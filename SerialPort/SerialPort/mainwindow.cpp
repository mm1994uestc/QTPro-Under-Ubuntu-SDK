#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QThread>
#include <stdio.h>
#include <QtGlobal>

#include <QDebug>
#include <QSerialPort>
#include <QSerialPortInfo>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QStringList ComboBoxContent;

    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        ComboBoxContent << info.portName();
    }
    this->ui->Port_Set->addItems(ComboBoxContent);

    connect(this->ui->Start_Stop_Button,SIGNAL(clicked(bool)),this,SLOT(on_Start_Stop_Button_clicked(bool checked)));
    connect(this->ui->Send,SIGNAL(clicked(bool)),this,SLOT(on_Send_clicked(bool checked)));
    connect(this->ui->Clear,SIGNAL(clicked(bool)),this,SLOT(on_Clear_clicked(bool)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Read_Data()
{
    QByteArray buf;
    buf = PortParam.readAll();
    if(!buf.isEmpty())
    {
        QString str = this->ui->Recieve_Text->toPlainText();
        str += tr(buf);
        this->ui->Recieve_Text->clear();
        this->ui->Recieve_Text->append(str);
    }
    buf.clear();
}

void MainWindow::on_Start_Stop_Button_clicked(bool checked) //on_Port_Set_currentIndexChanged
{
    if(Start_Stop)
    {
        foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
            qDebug() << "Name :" << info.portName();
            qDebug() << "Discription :" << info.description();
            qDebug() << "Manufacturer :" << info.manufacturer();
        }

        QString Port_Select = this->ui->Port_Set->currentText();
        int Port_BaudRate = this->ui->BaudRate->currentIndex();
        int Data_Bit = this->ui->DataBit->currentIndex();
        int Check_Bit = this->ui->CheckBit->currentIndex();
        int Stop_Bit = this->ui->StopBit->currentIndex();
        int Stream_Contrl = this->ui->Stream->currentIndex();

        QSerialPort::BaudRate baudrate;
        switch (Port_BaudRate) {
        case 0: baudrate = QSerialPort::Baud115200; break;
        case 1: baudrate = QSerialPort::Baud57600; break;
        case 2: baudrate = QSerialPort::Baud38400; break;
        case 3: baudrate = QSerialPort::Baud19200; break;
        case 4: baudrate = QSerialPort::Baud9600; break;
        case 5: baudrate = QSerialPort::Baud4800; break;
        case 6: baudrate = QSerialPort::Baud2400; break;
        case 7: baudrate = QSerialPort::Baud1200; break;
        default: break;
        }

        QSerialPort::DataBits databit;
        switch(Data_Bit){
        case 0: databit = QSerialPort::Data5; break;
        case 1: databit = QSerialPort::Data6; break;
        case 2: databit = QSerialPort::Data7; break;
        case 3: databit = QSerialPort::Data8; break;
        default: break;
        }

        QSerialPort::FlowControl flowcontrol;
        switch(Stream_Contrl){
        case 0: flowcontrol = QSerialPort::NoFlowControl; break;
        case 1: flowcontrol = QSerialPort::SoftwareControl; break;
        case 2: flowcontrol = QSerialPort::HardwareControl; break;
        default : break;
        }

        QSerialPort::StopBits stopbit;
        switch(Stop_Bit){
        case 0: stopbit = QSerialPort::OneStop; break;
        case 1: stopbit = QSerialPort::TwoStop; break;
        case 2: stopbit = QSerialPort::OneAndHalfStop; break;
        default: break;
        }

        QSerialPort::Parity checkbit;
        switch(Check_Bit){
        case 0: checkbit = QSerialPort::NoParity; break;
        case 1: checkbit = QSerialPort::EvenParity; break;
        case 2: checkbit = QSerialPort::OddParity; break;
        case 3: checkbit = QSerialPort::MarkParity; break;
        case 4: checkbit = QSerialPort::SpaceParity; break;
        default: break;
        }

        qDebug() << "BaudRate:" << Port_BaudRate;
        qDebug() << "Data Bit:" << Data_Bit;
        qDebug() << "Stop Bit:" << Stop_Bit;
        qDebug() << "FlowControl:" << Stream_Contrl;
        qDebug() << "Data Parity:" << Check_Bit;

        foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
            if(info.portName() == Port_Select)
            {
                PortParam.setPort(info); //Set Serial Port
                PortParam.setPortName(Port_Select);
                if(PortParam.open(QIODevice::ReadWrite))
                {
                    PortParam.setBaudRate(baudrate); //Set Serial Port BaudRate
                    PortParam.setDataBits(databit); // Set Port Data Bit
                    PortParam.setFlowControl(flowcontrol);
                    PortParam.setStopBits(stopbit);
                    PortParam.setParity(checkbit);

//                    QObject::connect(&PortParam,SIGNAL(QSerialPort::readyRead()),this,&MainWindow::Read_Data);
                    QObject::connect(&PortParam,&QSerialPort::readyRead,this,&MainWindow::Read_Data);
//                    QObject::connect(&PortParam,&QSerialPort::readyRead,this,SLOT(Read_Data()));

                    PortParam.clearError();
                    PortParam.clear();

                    qDebug() << "Port Opened!";
                }else
                {
                    qDebug() << "No port Opened!";
                }
            }
        }
    }else
    {
        PortParam.close();
        qDebug() << "Port Closed!";
    }
    Start_Stop = !Start_Stop;
}

void MainWindow::on_Send_clicked(bool checked)
{
    QString T;
    QByteArray Temp;
    char *Data;
    int len,i;
    len = this->ui->Send_Text->toPlainText().size();
    T = this->ui->Send_Text->toPlainText();
    Temp = T.toLatin1();
    Data = Temp.data();

    qDebug() << len;
    qDebug() << T;
    for(i=0;i<len;i++)
    {
        qDebug() << Data[i];
    }
    qDebug() << Data[0] << Data[1] << Data[2];
    PortParam.write(Data);
}

void MainWindow::on_Clear_clicked(bool checked)
{
    this->ui->Recieve_Text->clear();
}
