#ifndef IMAGEWINDOW
#define IMAGEWINDOW

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>

class ImageWindow : public QWidget
{
    Q_OBJECT

public:

    ImageWindow(int width, int height, int str_x, int str_y, QString str);

    ~ImageWindow();

private slots:

    void paintEvent(QPaintEvent *);

private:

    int width;
    int height;
    int x;
    int y;
    QString str;
};

#endif // IMAGEWINDOW

