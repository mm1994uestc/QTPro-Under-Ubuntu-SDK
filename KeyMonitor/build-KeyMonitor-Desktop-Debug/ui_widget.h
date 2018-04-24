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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QGraphicsView *graphicsView;
    QLabel *label_7;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 230, 98, 27));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 230, 141, 31));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 260, 151, 31));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 260, 98, 27));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 50, 171, 51));
        QFont font;
        font.setPointSize(22);
        font.setItalic(true);
        font.setUnderline(false);
        font.setStrikeOut(false);
        label_3->setFont(font);
        label_3->setCursor(QCursor(Qt::BlankCursor));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 110, 171, 21));
        QFont font1;
        font1.setPointSize(10);
        font1.setItalic(true);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        label_4->setFont(font1);
        label_4->setCursor(QCursor(Qt::BlankCursor));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 0, 321, 51));
        QFont font2;
        font2.setPointSize(28);
        font2.setItalic(true);
        font2.setUnderline(false);
        font2.setStrikeOut(false);
        label_5->setFont(font2);
        label_5->setCursor(QCursor(Qt::BlankCursor));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(Widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 160, 141, 31));
        graphicsView = new QGraphicsView(Widget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(200, 50, 181, 151));
        label_7 = new QLabel(Widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(250, 200, 91, 17));
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(240, 100, 16, 16));
        QFont font3;
        font3.setPointSize(8);
        font3.setItalic(false);
        pushButton_3->setFont(font3);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        pushButton->setText(QApplication::translate("Widget", "PushButton", 0));
        label->setText(QApplication::translate("Widget", "KeyPress-NumEvent", 0));
        label_2->setText(QApplication::translate("Widget", "KeyRelease-NumEvent", 0));
        pushButton_2->setText(QApplication::translate("Widget", "PushButton", 0));
        label_3->setText(QApplication::translate("Widget", "Key Monitor", 0));
        label_4->setText(QApplication::translate("Widget", "Designed by : mm1994uestc", 0));
        label_5->setText(QApplication::translate("Widget", "Qt interface Demo!", 0));
        label_6->setText(QApplication::translate("Widget", "Direction Contol:", 0));
        label_7->setText(QApplication::translate("Widget", "Move Regon", 0));
        pushButton_3->setText(QApplication::translate("Widget", "O", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
