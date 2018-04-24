#include "widget.h"
#include "ui_widget.h"

#include <QDebug>
#include <QKeyEvent>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::keyPressEvent(QKeyEvent *e)
{
    int x, y, dis;
    x = ui->pushButton_3->x();
    y = ui->pushButton_3->y();

    switch(e->key())
    {
    case Qt::Key_W : dis = y>40  ? 10:0; ui->pushButton_3->move(x,y-dis); break;
    case Qt::Key_S : dis = y<190 ? 10:0; ui->pushButton_3->move(x,y+dis); break;
    case Qt::Key_A : dis = x>190 ? 10:0; ui->pushButton_3->move(x-dis,y); break;
    case Qt::Key_D : dis = x<370 ? 10:0; ui->pushButton_3->move(x+dis,y); break;
    default : break;
    }

    ui->pushButton->setText(tr("%1,%2").arg(x).arg(y));
}

void Widget::keyReleaseEvent(QKeyEvent *e)
{
    ui->pushButton_2->setText(tr("%1").arg(e->key()));
}
