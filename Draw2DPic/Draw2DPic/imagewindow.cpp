#include "imagewindow.h"

ImageWindow::ImageWindow(int width, int height, int str_x, int str_y, QString str, int Line_x1,int Line_y1, int Line_x2, int Line_y2, int *Rect_param)
{
    this->setWindowTitle("ImageShow");
    this->setFixedHeight(height);
    this->setFixedWidth(width);

    this->height = height;
    this->width = width;

    this->str = str;
    this->x = str_x;
    this->y = str_y;

    this->Line_x1 = Line_x1;
    this->Line_x2 = Line_x2;
    this->Line_y1 = Line_y1;
    this->Line_y2 = Line_y2;

    this->Rect_param[0] = *(Rect_param+0);
    this->Rect_param[1] = *(Rect_param+1);
    this->Rect_param[2] = *(Rect_param+2);
    this->Rect_param[3] = *(Rect_param+3);
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

        painter.drawLine(QPoint(Line_x1,Line_y1),QPoint(Line_x2,Line_y2));

        painter.drawRect(QRect(QPoint(Rect_param[0],Rect_param[1]),QSize(Rect_param[2],Rect_param[3])));
}
