#include "imagewindow.h"

ImageWindow::ImageWindow(int width, int height, int str_x, int str_y, QString str)
{
    this->setWindowTitle("ImageShow");
    this->setFixedHeight(height);
    this->setFixedWidth(width);
    this->height = height;
    this->width = width;
    this->str = str;
    this->x = str_x;
    this->y = str_y;
}

ImageWindow::~ImageWindow()
{
    close();
}

void ImageWindow::paintEvent(QPaintEvent *)
{
        QPainter painter(this);
        painter.setFont(QFont("KaiTi_GB2312",10,false));
        painter.drawText(x,y,str);
}
