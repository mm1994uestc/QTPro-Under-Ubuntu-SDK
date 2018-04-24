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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *Send_Text;
    QTextEdit *Recieve_Text;
    QPushButton *Send;
    QPushButton *Clear;
    QComboBox *BaudRate;
    QLabel *label_3;
    QLabel *label_7;
    QComboBox *Port_Set;
    QComboBox *DataBit;
    QLabel *label_8;
    QComboBox *CheckBit;
    QLabel *label_9;
    QComboBox *StopBit;
    QLabel *label_10;
    QComboBox *Stream;
    QLabel *label_11;
    QPushButton *Start_Stop_Button;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(473, 382);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 0, 321, 51));
        QFont font;
        font.setPointSize(28);
        font.setItalic(true);
        font.setUnderline(false);
        font.setStrikeOut(false);
        label_6->setFont(font);
        label_6->setCursor(QCursor(Qt::BlankCursor));
        label_6->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 50, 171, 51));
        QFont font1;
        font1.setPointSize(16);
        font1.setItalic(true);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        label_5->setFont(font1);
        label_5->setCursor(QCursor(Qt::BlankCursor));
        label_5->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 100, 171, 21));
        QFont font2;
        font2.setPointSize(10);
        font2.setItalic(true);
        font2.setUnderline(false);
        font2.setStrikeOut(false);
        label_4->setFont(font2);
        label_4->setCursor(QCursor(Qt::BlankCursor));
        label_4->setAlignment(Qt::AlignCenter);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 210, 91, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 250, 111, 17));
        Send_Text = new QTextEdit(centralWidget);
        Send_Text->setObjectName(QStringLiteral("Send_Text"));
        Send_Text->setGeometry(QRect(120, 200, 231, 31));
        Recieve_Text = new QTextEdit(centralWidget);
        Recieve_Text->setObjectName(QStringLiteral("Recieve_Text"));
        Recieve_Text->setGeometry(QRect(120, 240, 231, 81));
        Send = new QPushButton(centralWidget);
        Send->setObjectName(QStringLiteral("Send"));
        Send->setGeometry(QRect(360, 200, 98, 27));
        Clear = new QPushButton(centralWidget);
        Clear->setObjectName(QStringLiteral("Clear"));
        Clear->setGeometry(QRect(360, 260, 98, 27));
        BaudRate = new QComboBox(centralWidget);
        BaudRate->setObjectName(QStringLiteral("BaudRate"));
        BaudRate->setGeometry(QRect(280, 80, 78, 27));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(290, 60, 61, 17));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(200, 60, 65, 17));
        Port_Set = new QComboBox(centralWidget);
        Port_Set->setObjectName(QStringLiteral("Port_Set"));
        Port_Set->setGeometry(QRect(190, 80, 78, 27));
        DataBit = new QComboBox(centralWidget);
        DataBit->setObjectName(QStringLiteral("DataBit"));
        DataBit->setGeometry(QRect(380, 80, 78, 27));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(390, 60, 61, 17));
        CheckBit = new QComboBox(centralWidget);
        CheckBit->setObjectName(QStringLiteral("CheckBit"));
        CheckBit->setGeometry(QRect(190, 150, 78, 27));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(190, 130, 81, 20));
        StopBit = new QComboBox(centralWidget);
        StopBit->setObjectName(QStringLiteral("StopBit"));
        StopBit->setGeometry(QRect(280, 150, 78, 27));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(290, 130, 61, 17));
        Stream = new QComboBox(centralWidget);
        Stream->setObjectName(QStringLiteral("Stream"));
        Stream->setGeometry(QRect(380, 150, 78, 27));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(370, 130, 121, 17));
        Start_Stop_Button = new QPushButton(centralWidget);
        Start_Stop_Button->setObjectName(QStringLiteral("Start_Stop_Button"));
        Start_Stop_Button->setGeometry(QRect(20, 130, 71, 71));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 473, 25));
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
        label_6->setText(QApplication::translate("MainWindow", "Qt interface Demo!", 0));
        label_5->setText(QApplication::translate("MainWindow", "SerialPort Control", 0));
        label_4->setText(QApplication::translate("MainWindow", "Designed by : mm1994uestc", 0));
        label->setText(QApplication::translate("MainWindow", "Send Content", 0));
        label_2->setText(QApplication::translate("MainWindow", "Recieve Content", 0));
        Send->setText(QApplication::translate("MainWindow", "SEND", 0));
        Clear->setText(QApplication::translate("MainWindow", "CLEAR", 0));
        BaudRate->clear();
        BaudRate->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "115200", 0)
         << QApplication::translate("MainWindow", "57600", 0)
         << QApplication::translate("MainWindow", "38400", 0)
         << QApplication::translate("MainWindow", "19200", 0)
         << QApplication::translate("MainWindow", "9600", 0)
         << QApplication::translate("MainWindow", "4800", 0)
         << QApplication::translate("MainWindow", "2400", 0)
         << QApplication::translate("MainWindow", "1200", 0)
        );
        label_3->setText(QApplication::translate("MainWindow", "Baud Set", 0));
        label_7->setText(QApplication::translate("MainWindow", "Port Set", 0));
        DataBit->clear();
        DataBit->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "8", 0)
         << QApplication::translate("MainWindow", "7", 0)
         << QApplication::translate("MainWindow", "6", 0)
         << QApplication::translate("MainWindow", "5", 0)
        );
        label_8->setText(QApplication::translate("MainWindow", "Data Bit", 0));
        CheckBit->clear();
        CheckBit->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "None", 0)
         << QApplication::translate("MainWindow", "Even", 0)
         << QApplication::translate("MainWindow", "Odd", 0)
         << QApplication::translate("MainWindow", "Mark", 0)
         << QApplication::translate("MainWindow", "Space", 0)
        );
        label_9->setText(QApplication::translate("MainWindow", "Data Parity", 0));
        StopBit->clear();
        StopBit->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", 0)
         << QApplication::translate("MainWindow", "1.5", 0)
         << QApplication::translate("MainWindow", "2", 0)
        );
        label_10->setText(QApplication::translate("MainWindow", "Stop Bit", 0));
        Stream->clear();
        Stream->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "NoFlowCtl", 0)
         << QApplication::translate("MainWindow", "SoftWareCtl", 0)
         << QApplication::translate("MainWindow", "HardWareCtl", 0)
        );
        label_11->setText(QApplication::translate("MainWindow", "Stream Control", 0));
        Start_Stop_Button->setText(QApplication::translate("MainWindow", "Start/Stop", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
