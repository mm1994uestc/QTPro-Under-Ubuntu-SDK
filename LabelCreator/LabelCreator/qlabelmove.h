#ifndef QLABELMOVE_H
#define QLABELMOVE_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>

#include <QList>
#include <QUrl>
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QLabel>

#include <QDebug>

class QLabelMove : public QLabel
{
    Q_OBJECT
public:

    QLabelMove(int A,int B);

signals:

protected:

    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);

private:
    bool Choose = false;
    int Ori_x,Ori_y;
    int A;
    int B;

public slots:
};

#endif // QLABELMOVE_H
