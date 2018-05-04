/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton;
    QFrame *frame;
    QTabWidget *TextInsert;
    QWidget *TextEdit;
    QPlainTextEdit *InputContent;
    QLabel *label;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QFontComboBox *fontComboBox;
    QLabel *label_2;
    QLabel *label_7;
    QComboBox *comboBox_2;
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
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
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
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
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
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_16;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(484, 328);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(390, 140, 71, 27));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        frame = new QFrame(Widget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 180, 461, 141));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        TextInsert = new QTabWidget(Widget);
        TextInsert->setObjectName(QStringLiteral("TextInsert"));
        TextInsert->setGeometry(QRect(10, 10, 361, 161));
        TextInsert->setTabShape(QTabWidget::Rounded);
        TextEdit = new QWidget();
        TextEdit->setObjectName(QStringLiteral("TextEdit"));
        InputContent = new QPlainTextEdit(TextEdit);
        InputContent->setObjectName(QStringLiteral("InputContent"));
        InputContent->setGeometry(QRect(10, 30, 171, 51));
        label = new QLabel(TextEdit);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 101, 17));
        pushButton_8 = new QPushButton(TextEdit);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(290, 90, 51, 27));
        pushButton_9 = new QPushButton(TextEdit);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(210, 90, 51, 27));
        fontComboBox = new QFontComboBox(TextEdit);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        fontComboBox->setGeometry(QRect(190, 30, 151, 27));
        label_2 = new QLabel(TextEdit);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 10, 81, 17));
        label_7 = new QLabel(TextEdit);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 86, 91, 31));
        comboBox_2 = new QComboBox(TextEdit);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(100, 90, 78, 27));
        TextInsert->addTab(TextEdit, QString());
        DrawLine = new QWidget();
        DrawLine->setObjectName(QStringLiteral("DrawLine"));
        label_10 = new QLabel(DrawLine);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(120, 10, 121, 17));
        Y_Pos_2 = new QPlainTextEdit(DrawLine);
        Y_Pos_2->setObjectName(QStringLiteral("Y_Pos_2"));
        Y_Pos_2->setGeometry(QRect(130, 40, 51, 31));
        label_11 = new QLabel(DrawLine);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 50, 21, 17));
        label_12 = new QLabel(DrawLine);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(100, 50, 21, 17));
        X_Pos_2 = new QPlainTextEdit(DrawLine);
        X_Pos_2->setObjectName(QStringLiteral("X_Pos_2"));
        X_Pos_2->setGeometry(QRect(40, 40, 51, 31));
        Y_Pos_3 = new QPlainTextEdit(DrawLine);
        Y_Pos_3->setObjectName(QStringLiteral("Y_Pos_3"));
        Y_Pos_3->setGeometry(QRect(300, 40, 51, 31));
        label_13 = new QLabel(DrawLine);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(190, 50, 21, 17));
        X_Pos_3 = new QPlainTextEdit(DrawLine);
        X_Pos_3->setObjectName(QStringLiteral("X_Pos_3"));
        X_Pos_3->setGeometry(QRect(220, 40, 51, 31));
        label_14 = new QLabel(DrawLine);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(270, 50, 21, 17));
        pushButton_6 = new QPushButton(DrawLine);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(170, 90, 51, 27));
        pushButton_7 = new QPushButton(DrawLine);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(90, 90, 51, 27));
        TextInsert->addTab(DrawLine, QString());
        DrawFram = new QWidget();
        DrawFram->setObjectName(QStringLiteral("DrawFram"));
        label_44 = new QLabel(DrawFram);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setGeometry(QRect(20, 10, 121, 17));
        Y_Pos_11 = new QPlainTextEdit(DrawFram);
        Y_Pos_11->setObjectName(QStringLiteral("Y_Pos_11"));
        Y_Pos_11->setGeometry(QRect(110, 40, 51, 31));
        label_45 = new QLabel(DrawFram);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setGeometry(QRect(10, 50, 21, 17));
        label_46 = new QLabel(DrawFram);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setGeometry(QRect(90, 50, 21, 17));
        X_Pos_11 = new QPlainTextEdit(DrawFram);
        X_Pos_11->setObjectName(QStringLiteral("X_Pos_11"));
        X_Pos_11->setGeometry(QRect(30, 40, 51, 31));
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
        pushButton_4 = new QPushButton(DrawFram);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(100, 90, 51, 27));
        pushButton_5 = new QPushButton(DrawFram);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(20, 90, 51, 27));
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
        label_50->setGeometry(QRect(30, 10, 121, 17));
        X_Pos_13 = new QPlainTextEdit(Pic);
        X_Pos_13->setObjectName(QStringLiteral("X_Pos_13"));
        X_Pos_13->setGeometry(QRect(40, 40, 51, 31));
        Y_Pos_13 = new QPlainTextEdit(Pic);
        Y_Pos_13->setObjectName(QStringLiteral("Y_Pos_13"));
        Y_Pos_13->setGeometry(QRect(120, 40, 51, 31));
        label_51 = new QLabel(Pic);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setGeometry(QRect(20, 50, 21, 17));
        label_52 = new QLabel(Pic);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setGeometry(QRect(100, 50, 21, 17));
        pushButton_2 = new QPushButton(Pic);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 90, 51, 27));
        pushButton_3 = new QPushButton(Pic);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(110, 90, 51, 27));
        TextInsert->addTab(Pic, QString());
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(400, 30, 61, 31));
        QFont font;
        font.setItalic(true);
        font.setUnderline(true);
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(400, 60, 61, 21));
        QFont font1;
        font1.setItalic(true);
        font1.setUnderline(true);
        font1.setStrikeOut(false);
        label_5->setFont(font1);
        label_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        label_6 = new QLabel(Widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(380, 90, 101, 17));
        QFont font2;
        font2.setPointSize(8);
        font2.setItalic(true);
        label_6->setFont(font2);
        label_6->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 0);"));
        label_16 = new QLabel(Widget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(410, 110, 71, 20));
        label_16->setFont(font2);
        label_16->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));

        retranslateUi(Widget);

        TextInsert->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        pushButton->setText(QApplication::translate("Widget", "Printer", 0));
        label->setText(QApplication::translate("Widget", "Input Content:", 0));
        pushButton_8->setText(QApplication::translate("Widget", "Delet", 0));
        pushButton_9->setText(QApplication::translate("Widget", "Prew", 0));
        label_2->setText(QApplication::translate("Widget", "Font Style:", 0));
        label_7->setText(QApplication::translate("Widget", "Symbol Size:", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Widget", "6", 0)
         << QApplication::translate("Widget", "7", 0)
         << QApplication::translate("Widget", "8", 0)
         << QApplication::translate("Widget", "9", 0)
         << QApplication::translate("Widget", "10", 0)
         << QApplication::translate("Widget", "11", 0)
         << QApplication::translate("Widget", "12", 0)
        );
        TextInsert->setTabText(TextInsert->indexOf(TextEdit), QApplication::translate("Widget", "TextEdit", 0));
        label_10->setText(QApplication::translate("Widget", "Content Position:", 0));
        label_11->setText(QApplication::translate("Widget", "X0:", 0));
        label_12->setText(QApplication::translate("Widget", "Y0:", 0));
        label_13->setText(QApplication::translate("Widget", "X1:", 0));
        label_14->setText(QApplication::translate("Widget", "Y1:", 0));
        pushButton_6->setText(QApplication::translate("Widget", "Delet", 0));
        pushButton_7->setText(QApplication::translate("Widget", "Prew", 0));
        TextInsert->setTabText(TextInsert->indexOf(DrawLine), QApplication::translate("Widget", "DrawLine", 0));
        label_44->setText(QApplication::translate("Widget", "Content Position:", 0));
        label_45->setText(QApplication::translate("Widget", "X:", 0));
        label_46->setText(QApplication::translate("Widget", "Y:", 0));
        label_47->setText(QApplication::translate("Widget", "Frame Size", 0));
        label_48->setText(QApplication::translate("Widget", "Width", 0));
        label_49->setText(QApplication::translate("Widget", "Height", 0));
        pushButton_4->setText(QApplication::translate("Widget", "Delet", 0));
        pushButton_5->setText(QApplication::translate("Widget", "Prew", 0));
        TextInsert->setTabText(TextInsert->indexOf(DrawFram), QApplication::translate("Widget", "DrawFrame", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Widget", "CODE-39", 0)
         << QApplication::translate("Widget", "CODE-128", 0)
         << QApplication::translate("Widget", "EAN-128", 0)
         << QApplication::translate("Widget", "CODEBAR", 0)
         << QApplication::translate("Widget", "UPC-A", 0)
        );
        label_3->setText(QApplication::translate("Widget", "Content", 0));
        label_9->setText(QApplication::translate("Widget", "Code Type", 0));
        label_40->setText(QApplication::translate("Widget", "Content Position:", 0));
        label_41->setText(QApplication::translate("Widget", "X:", 0));
        label_42->setText(QApplication::translate("Widget", "Y:", 0));
        label_43->setText(QApplication::translate("Widget", "              PreView", 0));
        TextInsert->setTabText(TextInsert->indexOf(Code), QApplication::translate("Widget", "Code", 0));
        label_15->setText(QApplication::translate("Widget", "            PreView", 0));
        label_50->setText(QApplication::translate("Widget", "Content Position:", 0));
        label_51->setText(QApplication::translate("Widget", "X:", 0));
        label_52->setText(QApplication::translate("Widget", "Y:", 0));
        pushButton_2->setText(QApplication::translate("Widget", "Prew", 0));
        pushButton_3->setText(QApplication::translate("Widget", "Delet", 0));
        TextInsert->setTabText(TextInsert->indexOf(Pic), QApplication::translate("Widget", "Picture", 0));
        label_4->setText(QApplication::translate("Widget", "2D Code", 0));
        label_5->setText(QApplication::translate("Widget", " Creator", 0));
        label_6->setText(QApplication::translate("Widget", "Designed by:", 0));
        label_16->setText(QApplication::translate("Widget", "mm1994uestc", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
