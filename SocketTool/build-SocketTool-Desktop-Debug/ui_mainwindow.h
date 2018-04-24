/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *IP_Address;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *Client_Port;
    QPushButton *Client_Button;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *Server_Port;
    QLabel *label_3;
    QPushButton *Server_Button;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *Corver;
    QPushButton *pushButton;
    QPushButton *ServerSend;
    QPlainTextEdit *Client_Recieve;
    QPlainTextEdit *Client_Send;
    QPlainTextEdit *Server_Recieve;
    QPlainTextEdit *Server_Send;
    QPushButton *Client_Clear;
    QPushButton *Server_Clear;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(418, 553);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        IP_Address = new QLineEdit(centralWidget);
        IP_Address->setObjectName(QStringLiteral("IP_Address"));
        IP_Address->setGeometry(QRect(30, 140, 113, 27));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 100, 171, 21));
        QFont font;
        font.setPointSize(10);
        font.setItalic(true);
        font.setUnderline(false);
        font.setStrikeOut(false);
        label_4->setFont(font);
        label_4->setCursor(QCursor(Qt::BlankCursor));
        label_4->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, -10, 321, 51));
        QFont font1;
        font1.setPointSize(28);
        font1.setItalic(true);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        label_6->setFont(font1);
        label_6->setCursor(QCursor(Qt::BlankCursor));
        label_6->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 40, 171, 51));
        QFont font2;
        font2.setPointSize(16);
        font2.setItalic(true);
        font2.setUnderline(false);
        font2.setStrikeOut(false);
        label_5->setFont(font2);
        label_5->setCursor(QCursor(Qt::BlankCursor));
        label_5->setAlignment(Qt::AlignCenter);
        Client_Port = new QLineEdit(centralWidget);
        Client_Port->setObjectName(QStringLiteral("Client_Port"));
        Client_Port->setGeometry(QRect(200, 140, 51, 27));
        Client_Button = new QPushButton(centralWidget);
        Client_Button->setObjectName(QStringLiteral("Client_Button"));
        Client_Button->setGeometry(QRect(260, 140, 141, 27));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 130, 21, 41));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 130, 51, 41));
        Server_Port = new QLineEdit(centralWidget);
        Server_Port->setObjectName(QStringLiteral("Server_Port"));
        Server_Port->setGeometry(QRect(60, 320, 51, 27));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 310, 51, 41));
        Server_Button = new QPushButton(centralWidget);
        Server_Button->setObjectName(QStringLiteral("Server_Button"));
        Server_Button->setGeometry(QRect(120, 320, 141, 27));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 170, 151, 41));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(230, 170, 151, 41));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 350, 151, 41));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(230, 350, 151, 41));
        Corver = new QLabel(centralWidget);
        Corver->setObjectName(QStringLiteral("Corver"));
        Corver->setGeometry(QRect(200, 40, 191, 91));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(350, 180, 51, 27));
        ServerSend = new QPushButton(centralWidget);
        ServerSend->setObjectName(QStringLiteral("ServerSend"));
        ServerSend->setGeometry(QRect(350, 360, 51, 27));
        Client_Recieve = new QPlainTextEdit(centralWidget);
        Client_Recieve->setObjectName(QStringLiteral("Client_Recieve"));
        Client_Recieve->setGeometry(QRect(10, 210, 171, 101));
        Client_Send = new QPlainTextEdit(centralWidget);
        Client_Send->setObjectName(QStringLiteral("Client_Send"));
        Client_Send->setGeometry(QRect(230, 210, 171, 101));
        Server_Recieve = new QPlainTextEdit(centralWidget);
        Server_Recieve->setObjectName(QStringLiteral("Server_Recieve"));
        Server_Recieve->setGeometry(QRect(10, 390, 171, 101));
        Server_Send = new QPlainTextEdit(centralWidget);
        Server_Send->setObjectName(QStringLiteral("Server_Send"));
        Server_Send->setGeometry(QRect(230, 390, 171, 101));
        Client_Clear = new QPushButton(centralWidget);
        Client_Clear->setObjectName(QStringLiteral("Client_Clear"));
        Client_Clear->setGeometry(QRect(150, 180, 51, 27));
        Server_Clear = new QPushButton(centralWidget);
        Server_Clear->setObjectName(QStringLiteral("Server_Clear"));
        Server_Clear->setGeometry(QRect(150, 360, 51, 27));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 418, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_4->setText(QApplication::translate("MainWindow", "Designed by : mm1994uestc", 0));
        label_6->setText(QApplication::translate("MainWindow", "Qt interface Demo!", 0));
        label_5->setText(QApplication::translate("MainWindow", "Socket Control", 0));
        Client_Button->setText(QApplication::translate("MainWindow", "TCP-Client-Connect", 0));
        label->setText(QApplication::translate("MainWindow", "IP:", 0));
        label_2->setText(QApplication::translate("MainWindow", "PORT:", 0));
        label_3->setText(QApplication::translate("MainWindow", "PORT:", 0));
        Server_Button->setText(QApplication::translate("MainWindow", "TCP-Server-Monitor", 0));
        label_7->setText(QApplication::translate("MainWindow", "Data Ricieve Frame:", 0));
        label_8->setText(QApplication::translate("MainWindow", "Data Send Frame:", 0));
        label_9->setText(QApplication::translate("MainWindow", "Data Ricieve Frame:", 0));
        label_10->setText(QApplication::translate("MainWindow", "Data Send Frame:", 0));
        Corver->setText(QApplication::translate("MainWindow", "                     Corver", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Send", 0));
        ServerSend->setText(QApplication::translate("MainWindow", "Send", 0));
        Client_Clear->setText(QApplication::translate("MainWindow", "Clear", 0));
        Server_Clear->setText(QApplication::translate("MainWindow", "Clear", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
