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
    QPushButton *pushButton_3;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 230, 101, 27));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-10, 200, 171, 17));
        QFont font;
        font.setItalic(true);
        font.setStrikeOut(false);
        label->setFont(font);
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 256, 171, 31));
        label_2->setFont(font);
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 200, 98, 27));
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(190, 260, 98, 27));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 226, 171, 31));
        label_3->setFont(font);
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 60, 211, 51));
        QFont font1;
        font1.setPointSize(22);
        font1.setItalic(true);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        label_4->setFont(font1);
        label_4->setCursor(QCursor(Qt::BlankCursor));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 120, 171, 21));
        QFont font2;
        font2.setPointSize(10);
        font2.setItalic(true);
        font2.setUnderline(false);
        font2.setStrikeOut(false);
        label_5->setFont(font2);
        label_5->setCursor(QCursor(Qt::BlankCursor));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(Widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 10, 321, 51));
        QFont font3;
        font3.setPointSize(28);
        font3.setItalic(true);
        font3.setUnderline(false);
        font3.setStrikeOut(false);
        label_6->setFont(font3);
        label_6->setCursor(QCursor(Qt::BlankCursor));
        label_6->setAlignment(Qt::AlignCenter);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        pushButton->setText(QApplication::translate("Widget", "PushButton", 0));
        label->setText(QApplication::translate("Widget", "     PressMove-axisEvent", 0));
        label_2->setText(QApplication::translate("Widget", "  ReleaseMouse-axisEvent", 0));
        pushButton_2->setText(QApplication::translate("Widget", "PushButton", 0));
        pushButton_3->setText(QApplication::translate("Widget", "PushButton", 0));
        label_3->setText(QApplication::translate("Widget", "  PressMouse-axisEvent", 0));
        label_4->setText(QApplication::translate("Widget", "Mouse Monitor", 0));
        label_5->setText(QApplication::translate("Widget", "Designed by : mm1994uestc", 0));
        label_6->setText(QApplication::translate("Widget", "Qt interface Demo!", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
