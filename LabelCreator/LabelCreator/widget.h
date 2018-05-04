#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMainWindow>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

//protected:
//    void dragEnterEvent(QDragEnterEvent *e);
//    void dropEvent(QDropEvent *e);

private slots:
    void on_pushButton_clicked(bool checked);

    void on_pushButton_9_clicked(bool checked);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
