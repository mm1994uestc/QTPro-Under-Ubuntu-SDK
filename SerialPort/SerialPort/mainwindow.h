#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QSerialPort>
#include <QSerialPortInfo>

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QSerialPort PortParam;

    bool Start_Stop = true;

private slots:

    void on_Start_Stop_Button_clicked(bool checked);

    void on_Send_clicked(bool checked);

    void Read_Data();

    void on_Clear_clicked(bool checked);

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
