#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>

#include <QDataStream>

#include <QFile>

#include <QDebug>

#include <QLabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->mediaPlayer = new QMediaPlayer(this);
    this->localMediaPlaylist = new QMediaPlaylist(this);
    this->mediaPlayer->setPlaylist(this->localMediaPlaylist);
    this->mediaPlayer->setVolume(50); //Set default Volume Value

    this->progressTimer = new QTimer(this);
    this->progressTimer->setInterval(100); //100ms
    this->progressTimer->start();

    connect(this->ui->NextSong,SIGNAL(clicked(bool)),this,SLOT(on_NextSong_clicked())); //Single connect to SLOT
    connect(this->ui->PrevSong,SIGNAL(clicked(bool)),this,SLOT(on_PrevSong_clicked()));

    connect(this->ui->Volume,SIGNAL(valueChanged(int)),this,SLOT(on_Volume_valueChanged()));
    connect(this->ui->SongChoose,SIGNAL(sliderMoved(int)),this,SLOT(on_SongChoose_sliderMoved()));

    connect(this->ui->actionOpenLocalMedia,SIGNAL(triggered(bool)),this,SLOT(on_openlocal_media()));

    connect(this->ui->Play_Puase,SIGNAL(clicked(bool)),this,SLOT(on_Play_Puase_clicked()));

    connect(this->progressTimer,SIGNAL(timeout()),this,SLOT(on_playProgressUpdate()));

    connect(this->mediaPlayer,SIGNAL(metaDataChanged()),this,SLOT(on_MetaDateUpdate()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete this->mediaPlayer;
    delete this->localMediaPlaylist;
}


void MainWindow::on_NextSong_clicked(bool checked)
{
    qDebug() << "on_NextSong_clicked is pushed";
    this->mediaPlayer->playlist()->next();
}

void MainWindow::on_PrevSong_clicked(bool checked)
{
    qDebug() << "on_PrevSong_clicked is pushed";
    this->mediaPlayer->playlist()->previous();
}

void MainWindow::on_Volume_valueChanged(int value)
{
    qDebug()<< value;
    this->mediaPlayer->setVolume(value);
}

void MainWindow::on_SongChoose_sliderMoved(int position)
{
    qDebug()<< position;
    float percent = (position*1.0)/this->ui->SongChoose->maximum();
    long value = this->mediaPlayer->duration()*percent;
    this->mediaPlayer->setPosition(value);
}

void MainWindow::on_openlocal_media()
{
    QStringList fileNamelist;
    fileNamelist = QFileDialog::getOpenFileNames(this,tr("select local files"),"~/",tr("MP3/MP4 Files(*.mp3 *.mp4);;")); //Read file with Regex Rules.
    if(!fileNamelist.isEmpty())
    {
        qDebug() << fileNamelist;
        this->localMediaPlaylist->clear(); //Clear the PlayList
        foreach (const QString &fileName,fileNamelist) {
            QMediaContent media = QMediaContent(QUrl::fromLocalFile(fileName)); //Add the media into the PlayList
            this->localMediaPlaylist->addMedia(media);
        }
        this->localMediaPlaylist->setCurrentIndex(0); //Set the Current media when program begining
    }else{

    }
    return ;
}

void MainWindow::on_Play_Puase_clicked(bool checked)
{
    qDebug() << "Play or Pause?";
    if(this->mediaPlayer->state() == QMediaPlayer::PlayingState)
    {
        this->mediaPlayer->pause();
    }else
    {
        this->mediaPlayer->setVolume(this->ui->Volume->value()); //Choose current volume to be the current media!
        this->mediaPlayer->play();
    }
}

void MainWindow::on_playProgressUpdate()
{
    long pos = this->mediaPlayer->position();
    long duration = this->mediaPlayer->duration();

    int value = (1.0*pos/duration)*100;

    this->ui->SongChoose->setValue(value);
}

void MainWindow::on_MetaDateUpdate()
{
    QString title,albumArtist;
    QImage coverImage;
    QPixmap pixmap;
    title = this->mediaPlayer->metaData("Title").toString();
    albumArtist = this->mediaPlayer->metaData("AudioCodec").toString();
    coverImage = this->mediaPlayer->metaData("CoverArtImage").value<QImage>();
    if(coverImage.isNull())
    {
        pixmap = QPixmap(":/images/MusicPlayerLogo.jpg");
    }else
    {
        pixmap.convertFromImage(coverImage);
    }

    this->ui->title->setText(title);
    qDebug() << title;
    this->ui->singer->setText(albumArtist);
    qDebug() << albumArtist;
    this->ui->ArtCover->setPixmap(pixmap.scaled(this->ui->ArtCover->size()));
}
