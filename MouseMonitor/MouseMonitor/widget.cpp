#include "widget.h"
#include "ui_widget.h"

#include <QDebug>
#include <QMouseEvent>

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

void Widget::mousePressEvent(QMouseEvent *e)
{
    qDebug() << "  X , Y";
    qDebug() << tr("%1,%2").arg(e->x()).arg(e->y());
    ui->pushButton->setText(tr("(%1,%2)").arg(e->x()).arg(e->y()));
}

void Widget::mouseMoveEvent(QMouseEvent *e)
{
    ui->pushButton_2->setText(tr("%1,%2").arg(e->x()).arg(e->y()));
}

void Widget::mouseReleaseEvent(QMouseEvent *e)
{
    ui->pushButton_3->setText(tr("%1,%2").arg(e->x()).arg(e->y()));
}
