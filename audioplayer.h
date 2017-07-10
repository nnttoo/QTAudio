#ifndef AUDIOPLAYER_H
#define AUDIOPLAYER_H


#include <QObject>
#include <QString>
#include <QDebug>
#include <QMediaPlayer>
#include <QCoreApplication>
#include <QUrl>

class MyAudioplayer : public QObject{
    Q_OBJECT

    QMediaPlayer * player;
   QString m_appdir = QCoreApplication::applicationDirPath();

public:
    MyAudioplayer(){
        player = new QMediaPlayer();
    }
    ~MyAudioplayer(){
        delete player;
    }


public slots:


    void testPlay(){
        player->setMedia(QUrl::fromLocalFile(m_appdir +"/001005.mp3"));
        player->play();
    }

};
#endif // AUDIOPLAYER_H
