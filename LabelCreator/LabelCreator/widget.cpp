#include "widget.h"
#include "ui_widget.h"

#include <QList>
#include <QUrl>
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QLabel>
#include <string.h>
#include <boost/cast.hpp>
#include <QDebug>

#include "qlabelmove.h"

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

/**************************************************************
 * Painter's x = 10  Painter's y = 180
 * Painter's W = 461 Painter's H = 141
 *************************************************************/

void Widget::on_pushButton_clicked(bool checked)
{

}

void Widget::on_pushButton_9_clicked(bool checked)
{
    QLabelMove *label1 = new QLabelMove(1,2); // Set the Default UI content with the parameters in the QLabelMove!
    QString str;
    int symbol_size,str_len;
    str = this->ui->InputContent->toPlainText();

    qDebug() << str.length();
    str_len = str.length();

    label1->setText(str);

    str = this->ui->fontComboBox->currentFont().family();
    qDebug() << str;

    symbol_size = this->ui->comboBox_2->currentText().toInt();
    label1->setFont(QFont(str,symbol_size,QFont::Normal));

    qDebug() << str_len;

    QPoint pos;
    pos = label1->pos();
    qDebug() << pos.x()  << pos.y();
    label1->setGeometry(rect().x()+10,rect().y()+180,200,10);
    label1->setParent(this);
    label1->show();
}
