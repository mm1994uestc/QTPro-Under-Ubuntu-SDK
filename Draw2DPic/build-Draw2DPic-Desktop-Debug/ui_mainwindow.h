/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QTabWidget *TextInsert;
    QWidget *TextEdit;
    QPlainTextEdit *InputContent;
    QLabel *label;
    QPlainTextEdit *X_Pos;
    QPlainTextEdit *Y_Pos;
    QLabel *label_2;
    QPushButton *TextDraw;
    QPushButton *TextDelet;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *DrawLine;
    QWidget *DrawFram;
    QWidget *Code;
    QPushButton *pushButton;
    QPlainTextEdit *plainTextEdit;
    QComboBox *comboBox;
    QLabel *label_3;
    QLabel *label_9;
    QWidget *Pic;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(381, 365);
        MainWindow->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 110, 171, 21));
        QFont font;
        font.setPointSize(10);
        font.setItalic(true);
        font.setUnderline(false);
        font.setStrikeOut(false);
        label_4->setFont(font);
        label_4->setCursor(QCursor(Qt::BlankCursor));
        label_4->setAlignment(Qt::AlignCenter);
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
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 0, 321, 51));
        QFont font2;
        font2.setPointSize(28);
        font2.setItalic(true);
        font2.setUnderline(false);
        font2.setStrikeOut(false);
        label_6->setFont(font2);
        label_6->setCursor(QCursor(Qt::BlankCursor));
        label_6->setAlignment(Qt::AlignCenter);
        TextInsert = new QTabWidget(centralWidget);
        TextInsert->setObjectName(QStringLiteral("TextInsert"));
        TextInsert->setGeometry(QRect(10, 140, 361, 161));
        TextInsert->setTabShape(QTabWidget::Rounded);
        TextEdit = new QWidget();
        TextEdit->setObjectName(QStringLiteral("TextEdit"));
        InputContent = new QPlainTextEdit(TextEdit);
        InputContent->setObjectName(QStringLiteral("InputContent"));
        InputContent->setGeometry(QRect(10, 40, 171, 81));
        label = new QLabel(TextEdit);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 111, 17));
        X_Pos = new QPlainTextEdit(TextEdit);
        X_Pos->setObjectName(QStringLiteral("X_Pos"));
        X_Pos->setGeometry(QRect(220, 40, 51, 31));
        Y_Pos = new QPlainTextEdit(TextEdit);
        Y_Pos->setObjectName(QStringLiteral("Y_Pos"));
        Y_Pos->setGeometry(QRect(300, 40, 51, 31));
        label_2 = new QLabel(TextEdit);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(210, 10, 121, 17));
        TextDraw = new QPushButton(TextEdit);
        TextDraw->setObjectName(QStringLiteral("TextDraw"));
        TextDraw->setGeometry(QRect(220, 90, 51, 27));
        TextDelet = new QPushButton(TextEdit);
        TextDelet->setObjectName(QStringLiteral("TextDelet"));
        TextDelet->setGeometry(QRect(300, 90, 51, 27));
        label_7 = new QLabel(TextEdit);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(200, 50, 21, 17));
        label_8 = new QLabel(TextEdit);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(280, 50, 21, 17));
        TextInsert->addTab(TextEdit, QString());
        DrawLine = new QWidget();
        DrawLine->setObjectName(QStringLiteral("DrawLine"));
        TextInsert->addTab(DrawLine, QString());
        DrawFram = new QWidget();
        DrawFram->setObjectName(QStringLiteral("DrawFram"));
        TextInsert->addTab(DrawFram, QString());
        Code = new QWidget();
        Code->setObjectName(QStringLiteral("Code"));
        pushButton = new QPushButton(Code);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 90, 98, 27));
        plainTextEdit = new QPlainTextEdit(Code);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 40, 181, 31));
        comboBox = new QComboBox(Code);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(220, 40, 121, 27));
        label_3 = new QLabel(Code);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 20, 65, 17));
        label_9 = new QLabel(Code);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(250, 20, 81, 17));
        TextInsert->addTab(Code, QString());
        Pic = new QWidget();
        Pic->setObjectName(QStringLiteral("Pic"));
        TextInsert->addTab(Pic, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 381, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        TextInsert->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_4->setText(QApplication::translate("MainWindow", "Designed by : mm1994uestc", 0));
        label_5->setText(QApplication::translate("MainWindow", "2D DrawPainter", 0));
        label_6->setText(QApplication::translate("MainWindow", "Qt interface Demo!", 0));
        label->setText(QApplication::translate("MainWindow", "Input Content:", 0));
        label_2->setText(QApplication::translate("MainWindow", "Content Position:", 0));
        TextDraw->setText(QApplication::translate("MainWindow", "Draw", 0));
        TextDelet->setText(QApplication::translate("MainWindow", "Delet", 0));
        label_7->setText(QApplication::translate("MainWindow", "X:", 0));
        label_8->setText(QApplication::translate("MainWindow", "Y:", 0));
        TextInsert->setTabText(TextInsert->indexOf(TextEdit), QApplication::translate("MainWindow", "TextEdit", 0));
        TextInsert->setTabText(TextInsert->indexOf(DrawLine), QApplication::translate("MainWindow", "DrawLine", 0));
        TextInsert->setTabText(TextInsert->indexOf(DrawFram), QApplication::translate("MainWindow", "DrawFrame", 0));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "CODE-39", 0)
         << QApplication::translate("MainWindow", "CODE-128", 0)
         << QApplication::translate("MainWindow", "EAN-128", 0)
         << QApplication::translate("MainWindow", "CODEBAR", 0)
         << QApplication::translate("MainWindow", "UPC-A", 0)
        );
        label_3->setText(QApplication::translate("MainWindow", "Content", 0));
        label_9->setText(QApplication::translate("MainWindow", "Code Type", 0));
        TextInsert->setTabText(TextInsert->indexOf(Code), QApplication::translate("MainWindow", "Code", 0));
        TextInsert->setTabText(TextInsert->indexOf(Pic), QApplication::translate("MainWindow", "Picture", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
