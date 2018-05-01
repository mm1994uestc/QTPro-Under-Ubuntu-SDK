#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "imagewindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    connect(this->ui->TextDraw,SIGNAL(clicked(bool)),this,SLOT(on_TextDraw_clicked()));

    connect(this->ui->TextDraw,SIGNAL(clicked(bool)),this,SLOT(on_TextDraw_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_TextDraw_clicked(bool checked)
{
    QString str;
    int xpos,ypos;
    int Paint_Wid=500,Paint_Hei=300;

    str = this->ui->InputContent->toPlainText();
    xpos = this->ui->X_Pos->toPlainText().toInt();
    ypos = this->ui->Y_Pos->toPlainText().toInt();

    qDebug() << "Content:" << str << "X,Y:" << xpos << "," << ypos;
    ImageWindow *image = new ImageWindow(Paint_Wid, Paint_Hei, xpos, ypos, str);
    image->show();
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);

    /********************* Draw Ellipse ************************/
    painter.drawEllipse(QPoint(280,110),80,40);

    /********************** Draw Rect **************************/
    painter.drawRect(QRect(QPoint(200,70), QSize(160,80)));

    /********************** Draw Points ************************/
    painter.drawPoint(280,110);

    /********************** Draw Texts *************************/
    painter.drawText(QRect(QPoint(210,50),QSize(180,20)),"OneDemonsionCode!");

    /********************** Draw Lines *************************/
    painter.drawLine(QPoint(270,80),QPoint(270,140));
    painter.drawLine(QPoint(271,80),QPoint(271,140));
    painter.drawLine(QPoint(280,80),QPoint(280,140));
    painter.drawLine(QPoint(281,80),QPoint(281,140));
    painter.drawLine(QPoint(282,80),QPoint(282,140));
    painter.drawLine(QPoint(283,80),QPoint(283,140));
    painter.drawLine(QPoint(286,80),QPoint(286,140));
    painter.drawLine(QPoint(287,80),QPoint(287,140));
    painter.drawLine(QPoint(288,80),QPoint(288,140));
    painter.drawLine(QPoint(289,80),QPoint(289,140));
    painter.drawLine(QPoint(292,80),QPoint(292,140));
    painter.drawLine(QPoint(293,80),QPoint(293,140));
    painter.drawLine(QPoint(294,80),QPoint(294,140));
    painter.drawLine(QPoint(297,80),QPoint(297,140));
    painter.drawLine(QPoint(298,80),QPoint(298,140));
    painter.drawLine(QPoint(301,80),QPoint(301,140));
    painter.drawLine(QPoint(302,80),QPoint(302,140));
    painter.drawLine(QPoint(305,80),QPoint(305,140));
    painter.drawLine(QPoint(306,80),QPoint(306,140));
    painter.drawLine(QPoint(307,80),QPoint(307,140));
    painter.drawLine(QPoint(308,80),QPoint(308,140));
    painter.drawLine(QPoint(411,80),QPoint(411,140));
    painter.drawLine(QPoint(412,80),QPoint(412,140));
    painter.drawLine(QPoint(413,80),QPoint(413,140));
    painter.drawLine(QPoint(414,80),QPoint(414,140));
    painter.drawLine(QPoint(417,80),QPoint(417,140));
    painter.drawLine(QPoint(418,80),QPoint(418,140));
    painter.drawLine(QPoint(419,80),QPoint(419,140));
    painter.drawLine(QPoint(422,80),QPoint(422,140));
    painter.drawLine(QPoint(422,80),QPoint(422,140));
    painter.drawLine(QPoint(425,80),QPoint(425,140));
    painter.drawLine(QPoint(426,80),QPoint(426,140));
    painter.drawLine(QPoint(427,80),QPoint(427,140));
    painter.drawLine(QPoint(430,80),QPoint(430,140));
    painter.drawLine(QPoint(431,80),QPoint(431,140));
}
