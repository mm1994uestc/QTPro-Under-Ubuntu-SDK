#include "qlabelmove.h"

QLabelMove::QLabelMove(int A,int B)
{
    this->A = A;
    this->B = B;
}

void QLabelMove::mousePressEvent(QMouseEvent *event)
{
    QPoint pos = QLabelMove::pos();
    QSize size = QLabelMove::size();
    qDebug() << pos.x() << pos.y();
    if(pos.x()-size.width()/2 < event->x() < pos.x()+size.width()/2 && pos.y()-size.height()/2 < event->y() < pos.y()+size.height()/2)
    {
        Choose = true;
        Ori_x = event->x();
        Ori_y = event->y();
    }
    else
    {
        Choose = false;
    }
}

/**************************************************************
 * Painter's x = 10  Painter's y = 180
 * Painter's W = 461 Painter's H = 141
 *************************************************************/

void QLabelMove::mouseMoveEvent(QMouseEvent *event)
{
    int mouse_x,mouse_y;
    int Now_x,Now_y,New_x,New_y;
    Now_x = QLabelMove::pos().x();
    Now_y = QLabelMove::pos().y();
    if(Choose)
    {
        mouse_x = event->x();
        mouse_y = event->y();
        New_x = Now_x+mouse_x-Ori_x;
        New_y = Now_y+mouse_y-Ori_y;
        qDebug() << New_x << New_y;
        if(9 <= New_x && New_x <= 460)
        {
            if(179 <= New_y && New_y <= 320)
            {
                QLabelMove::setGeometry(rect().x()+New_x,rect().y()+New_y,200,10);
                qDebug() << New_x << New_y;
            }
        }
    }
}

void QLabelMove::mouseReleaseEvent(QMouseEvent *event)
{
//    QLabelMove::destroy()
}
