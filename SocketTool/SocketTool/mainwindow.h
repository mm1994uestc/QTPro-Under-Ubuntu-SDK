#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QtNetwork>
#include <QTcpServer>
#include <QTcpSocket>

#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_Client_Button_clicked(bool checked);

    void on_pushButton_clicked(bool checked);

    void Client_Recieve_Data(void);

    void accepConnection(void);

    void readClient(void);

    void on_Client_Clear_clicked(bool checked);

    void on_Server_Clear_clicked(bool checked);

    void on_ServerSend_clicked(bool checked);

    void on_Server_Button_clicked(bool checked);

    void TimeOutProcess(void);

private:
    Ui::MainWindow *ui;

    QTcpSocket *client;

    QTcpServer *server;
    QTcpSocket *client_connect;

    QTimer *TimeMonitor;

    bool ClientFlag = false;
    bool ServerFlag = false;
};

#endif // MAINWINDOW_H
