#ifndef IMAGEWINDOW
#define IMAGEWINDOW

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>

class ImageWindow : public QWidget
{
    Q_OBJECT

public:

    ImageWindow(int width, int height, int str_x, int str_y, QString str, int Line_x1,int Line_y1, int Line_x2, int Line_y2, int *Rect_param);

    ~ImageWindow();

private slots:

    void paintEvent(QPaintEvent *);

private:

    int width;
    int height;
    int x;
    int y;
    QString str;

    int Line_x1;
    int Line_y1;
    int Line_x2;
    int Line_y2;

    int Rect_param[4];
};

#endif // IMAGEWINDOW

