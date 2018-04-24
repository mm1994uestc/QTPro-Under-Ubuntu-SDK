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
#include <QtWidgets/QDial>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpenLocalMedia;
    QWidget *centralWidget;
    QPushButton *Play_Puase;
    QPushButton *NextSong;
    QLabel *label;
    QDial *Volume;
    QSlider *SongChoose;
    QPushButton *PrevSong;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *singer;
    QLabel *title;
    QLabel *ArtCover;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionOpenLocalMedia = new QAction(MainWindow);
        actionOpenLocalMedia->setObjectName(QStringLiteral("actionOpenLocalMedia"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Play_Puase = new QPushButton(centralWidget);
        Play_Puase->setObjectName(QStringLiteral("Play_Puase"));
        Play_Puase->setGeometry(QRect(120, 160, 31, 31));
        NextSong = new QPushButton(centralWidget);
        NextSong->setObjectName(QStringLiteral("NextSong"));
        NextSong->setGeometry(QRect(10, 150, 81, 27));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 321, 51));
        QFont font;
        font.setPointSize(28);
        font.setItalic(true);
        font.setUnderline(false);
        font.setStrikeOut(false);
        label->setFont(font);
        label->setCursor(QCursor(Qt::BlankCursor));
        label->setAlignment(Qt::AlignCenter);
        Volume = new QDial(centralWidget);
        Volume->setObjectName(QStringLiteral("Volume"));
        Volume->setGeometry(QRect(180, 150, 50, 64));
        Volume->setValue(50);
        SongChoose = new QSlider(centralWidget);
        SongChoose->setObjectName(QStringLiteral("SongChoose"));
        SongChoose->setGeometry(QRect(10, 210, 231, 29));
        SongChoose->setOrientation(Qt::Horizontal);
        PrevSong = new QPushButton(centralWidget);
        PrevSong->setObjectName(QStringLiteral("PrevSong"));
        PrevSong->setGeometry(QRect(10, 180, 81, 27));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 50, 171, 51));
        QFont font1;
        font1.setPointSize(22);
        font1.setItalic(true);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        label_2->setFont(font1);
        label_2->setCursor(QCursor(Qt::BlankCursor));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 110, 171, 21));
        QFont font2;
        font2.setPointSize(10);
        font2.setItalic(true);
        font2.setUnderline(false);
        font2.setStrikeOut(false);
        label_3->setFont(font2);
        label_3->setCursor(QCursor(Qt::BlankCursor));
        label_3->setAlignment(Qt::AlignCenter);
        singer = new QLabel(centralWidget);
        singer->setObjectName(QStringLiteral("singer"));
        singer->setGeometry(QRect(220, 220, 161, 21));
        singer->setFont(font2);
        singer->setCursor(QCursor(Qt::BlankCursor));
        singer->setAlignment(Qt::AlignCenter);
        title = new QLabel(centralWidget);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(260, 170, 61, 21));
        title->setFont(font2);
        title->setCursor(QCursor(Qt::BlankCursor));
        title->setAlignment(Qt::AlignCenter);
        ArtCover = new QLabel(centralWidget);
        ArtCover->setObjectName(QStringLiteral("ArtCover"));
        ArtCover->setGeometry(QRect(260, 60, 90, 90));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpenLocalMedia);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionOpenLocalMedia->setText(QApplication::translate("MainWindow", "OpenLocalMedia", 0));
        Play_Puase->setText(QApplication::translate("MainWindow", "Play", 0));
        NextSong->setText(QApplication::translate("MainWindow", "Next Song", 0));
        label->setText(QApplication::translate("MainWindow", "Qt interface Demo!", 0));
        PrevSong->setText(QApplication::translate("MainWindow", "Prev Song", 0));
        label_2->setText(QApplication::translate("MainWindow", "Music Player", 0));
        label_3->setText(QApplication::translate("MainWindow", "Designed by : mm1994uestc", 0));
        singer->setText(QApplication::translate("MainWindow", "Singer:", 0));
        title->setText(QApplication::translate("MainWindow", "Title:", 0));
        ArtCover->setText(QApplication::translate("MainWindow", "    Art_Cover", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
