#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QMultimedia>
#include <QMediaMetaData>
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

    void on_NextSong_clicked(bool checked);

    void on_PrevSong_clicked(bool checked);

    void on_Volume_valueChanged(int value);

    void on_SongChoose_sliderMoved(int position);

    void on_openlocal_media();

    void on_Play_Puase_clicked(bool checked);

    void on_playProgressUpdate();

    void on_MetaDateUpdate();

private:
    Ui::MainWindow *ui;
    QMediaPlayer *mediaPlayer;
    QMediaPlaylist *localMediaPlaylist;
    QTimer *progressTimer;
};

#endif // MAINWINDOW_H
