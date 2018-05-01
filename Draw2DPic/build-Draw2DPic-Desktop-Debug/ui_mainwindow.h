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
    QLabel *label_7;
    QLabel *label_8;
    QWidget *DrawLine;
    QLabel *label_10;
    QPlainTextEdit *Y_Pos_2;
    QLabel *label_11;
    QLabel *label_12;
    QPlainTextEdit *X_Pos_2;
    QPlainTextEdit *Y_Pos_3;
    QLabel *label_13;
    QPlainTextEdit *X_Pos_3;
    QLabel *label_14;
    QWidget *DrawFram;
    QLabel *label_44;
    QPlainTextEdit *Y_Pos_11;
    QLabel *label_45;
    QLabel *label_46;
    QPlainTextEdit *X_Pos_11;
    QLabel *label_47;
    QPlainTextEdit *Y_Pos_12;
    QLabel *label_48;
    QLabel *label_49;
    QPlainTextEdit *X_Pos_12;
    QWidget *Code;
    QPlainTextEdit *plainTextEdit;
    QComboBox *comboBox;
    QLabel *label_3;
    QLabel *label_9;
    QLabel *label_40;
    QPlainTextEdit *Y_Pos_10;
    QLabel *label_41;
    QLabel *label_42;
    QPlainTextEdit *X_Pos_10;
    QLabel *label_43;
    QWidget *Pic;
    QLabel *label_15;
    QLabel *label_50;
    QPlainTextEdit *X_Pos_13;
    QPlainTextEdit *Y_Pos_13;
    QLabel *label_51;
    QLabel *label_52;
    QPushButton *TextDraw;
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
        X_Pos->setGeometry(QRect(220, 60, 51, 31));
        Y_Pos = new QPlainTextEdit(TextEdit);
        Y_Pos->setObjectName(QStringLiteral("Y_Pos"));
        Y_Pos->setGeometry(QRect(300, 60, 51, 31));
        label_2 = new QLabel(TextEdit);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(210, 30, 121, 17));
        label_7 = new QLabel(TextEdit);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(200, 70, 21, 17));
        label_8 = new QLabel(TextEdit);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(280, 70, 21, 17));
        TextInsert->addTab(TextEdit, QString());
        DrawLine = new QWidget();
        DrawLine->setObjectName(QStringLiteral("DrawLine"));
        label_10 = new QLabel(DrawLine);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(120, 30, 121, 17));
        Y_Pos_2 = new QPlainTextEdit(DrawLine);
        Y_Pos_2->setObjectName(QStringLiteral("Y_Pos_2"));
        Y_Pos_2->setGeometry(QRect(130, 60, 51, 31));
        label_11 = new QLabel(DrawLine);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 70, 21, 17));
        label_12 = new QLabel(DrawLine);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(100, 70, 21, 17));
        X_Pos_2 = new QPlainTextEdit(DrawLine);
        X_Pos_2->setObjectName(QStringLiteral("X_Pos_2"));
        X_Pos_2->setGeometry(QRect(40, 60, 51, 31));
        Y_Pos_3 = new QPlainTextEdit(DrawLine);
        Y_Pos_3->setObjectName(QStringLiteral("Y_Pos_3"));
        Y_Pos_3->setGeometry(QRect(300, 60, 51, 31));
        label_13 = new QLabel(DrawLine);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(190, 70, 21, 17));
        X_Pos_3 = new QPlainTextEdit(DrawLine);
        X_Pos_3->setObjectName(QStringLiteral("X_Pos_3"));
        X_Pos_3->setGeometry(QRect(220, 60, 51, 31));
        label_14 = new QLabel(DrawLine);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(270, 70, 21, 17));
        TextInsert->addTab(DrawLine, QString());
        DrawFram = new QWidget();
        DrawFram->setObjectName(QStringLiteral("DrawFram"));
        label_44 = new QLabel(DrawFram);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setGeometry(QRect(20, 30, 121, 17));
        Y_Pos_11 = new QPlainTextEdit(DrawFram);
        Y_Pos_11->setObjectName(QStringLiteral("Y_Pos_11"));
        Y_Pos_11->setGeometry(QRect(110, 60, 51, 31));
        label_45 = new QLabel(DrawFram);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setGeometry(QRect(10, 70, 21, 17));
        label_46 = new QLabel(DrawFram);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setGeometry(QRect(90, 70, 21, 17));
        X_Pos_11 = new QPlainTextEdit(DrawFram);
        X_Pos_11->setObjectName(QStringLiteral("X_Pos_11"));
        X_Pos_11->setGeometry(QRect(30, 60, 51, 31));
        label_47 = new QLabel(DrawFram);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setGeometry(QRect(230, 30, 81, 17));
        Y_Pos_12 = new QPlainTextEdit(DrawFram);
        Y_Pos_12->setObjectName(QStringLiteral("Y_Pos_12"));
        Y_Pos_12->setGeometry(QRect(280, 60, 51, 31));
        label_48 = new QLabel(DrawFram);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setGeometry(QRect(200, 100, 51, 17));
        label_49 = new QLabel(DrawFram);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setGeometry(QRect(280, 100, 51, 17));
        X_Pos_12 = new QPlainTextEdit(DrawFram);
        X_Pos_12->setObjectName(QStringLiteral("X_Pos_12"));
        X_Pos_12->setGeometry(QRect(200, 60, 51, 31));
        TextInsert->addTab(DrawFram, QString());
        Code = new QWidget();
        Code->setObjectName(QStringLiteral("Code"));
        plainTextEdit = new QPlainTextEdit(Code);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 20, 181, 31));
        comboBox = new QComboBox(Code);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(220, 20, 121, 27));
        label_3 = new QLabel(Code);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 0, 65, 17));
        label_9 = new QLabel(Code);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(250, 0, 81, 17));
        label_40 = new QLabel(Code);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setGeometry(QRect(30, 60, 121, 17));
        Y_Pos_10 = new QPlainTextEdit(Code);
        Y_Pos_10->setObjectName(QStringLiteral("Y_Pos_10"));
        Y_Pos_10->setGeometry(QRect(120, 90, 51, 31));
        label_41 = new QLabel(Code);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(20, 100, 21, 17));
        label_42 = new QLabel(Code);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setGeometry(QRect(100, 100, 21, 17));
        X_Pos_10 = new QPlainTextEdit(Code);
        X_Pos_10->setObjectName(QStringLiteral("X_Pos_10"));
        X_Pos_10->setGeometry(QRect(40, 90, 51, 31));
        label_43 = new QLabel(Code);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setGeometry(QRect(200, 60, 151, 61));
        TextInsert->addTab(Code, QString());
        Pic = new QWidget();
        Pic->setObjectName(QStringLiteral("Pic"));
        label_15 = new QLabel(Pic);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(190, 10, 151, 101));
        label_50 = new QLabel(Pic);
        label_50->setObjectName(QStringLiteral("label_50"));
        label_50->setGeometry(QRect(30, 30, 121, 17));
        X_Pos_13 = new QPlainTextEdit(Pic);
        X_Pos_13->setObjectName(QStringLiteral("X_Pos_13"));
        X_Pos_13->setGeometry(QRect(40, 60, 51, 31));
        Y_Pos_13 = new QPlainTextEdit(Pic);
        Y_Pos_13->setObjectName(QStringLiteral("Y_Pos_13"));
        Y_Pos_13->setGeometry(QRect(120, 60, 51, 31));
        label_51 = new QLabel(Pic);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setGeometry(QRect(20, 70, 21, 17));
        label_52 = new QLabel(Pic);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setGeometry(QRect(100, 70, 21, 17));
        TextInsert->addTab(Pic, QString());
        TextDraw = new QPushButton(centralWidget);
        TextDraw->setObjectName(QStringLiteral("TextDraw"));
        TextDraw->setGeometry(QRect(210, 80, 51, 27));
        TextDraw->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
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

        TextInsert->setCurrentIndex(2);


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
        label_7->setText(QApplication::translate("MainWindow", "X:", 0));
        label_8->setText(QApplication::translate("MainWindow", "Y:", 0));
        TextInsert->setTabText(TextInsert->indexOf(TextEdit), QApplication::translate("MainWindow", "TextEdit", 0));
        label_10->setText(QApplication::translate("MainWindow", "Content Position:", 0));
        label_11->setText(QApplication::translate("MainWindow", "X0:", 0));
        label_12->setText(QApplication::translate("MainWindow", "Y0:", 0));
        label_13->setText(QApplication::translate("MainWindow", "X1:", 0));
        label_14->setText(QApplication::translate("MainWindow", "Y1:", 0));
        TextInsert->setTabText(TextInsert->indexOf(DrawLine), QApplication::translate("MainWindow", "DrawLine", 0));
        label_44->setText(QApplication::translate("MainWindow", "Content Position:", 0));
        label_45->setText(QApplication::translate("MainWindow", "X:", 0));
        label_46->setText(QApplication::translate("MainWindow", "Y:", 0));
        label_47->setText(QApplication::translate("MainWindow", "Frame Size", 0));
        label_48->setText(QApplication::translate("MainWindow", "Width", 0));
        label_49->setText(QApplication::translate("MainWindow", "Height", 0));
        TextInsert->setTabText(TextInsert->indexOf(DrawFram), QApplication::translate("MainWindow", "DrawFrame", 0));
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
        label_40->setText(QApplication::translate("MainWindow", "Content Position:", 0));
        label_41->setText(QApplication::translate("MainWindow", "X:", 0));
        label_42->setText(QApplication::translate("MainWindow", "Y:", 0));
        label_43->setText(QApplication::translate("MainWindow", "              PreView", 0));
        TextInsert->setTabText(TextInsert->indexOf(Code), QApplication::translate("MainWindow", "Code", 0));
        label_15->setText(QApplication::translate("MainWindow", "            PreView", 0));
        label_50->setText(QApplication::translate("MainWindow", "Content Position:", 0));
        label_51->setText(QApplication::translate("MainWindow", "X:", 0));
        label_52->setText(QApplication::translate("MainWindow", "Y:", 0));
        TextInsert->setTabText(TextInsert->indexOf(Pic), QApplication::translate("MainWindow", "Picture", 0));
        TextDraw->setText(QApplication::translate("MainWindow", "Draw", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
