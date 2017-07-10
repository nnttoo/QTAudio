#ifndef AUDIOPLAYER_H
#define AUDIOPLAYER_H


#include <QObject>
#include <QString>
#include <QDebug>
#include <QCoreApplication>
#include <QUrl>
#include <QMediaPlayer>

class MyAudioplayer : public QObject{
    Q_OBJECT
private:
   QString m_appdir = QCoreApplication::applicationDirPath();
   QMediaPlayer * player;

public:
   MyAudioplayer(){
       player = new QMediaPlayer();
   }

   ~MyAudioplayer(){
       delete player;
   }

public slots:


    void testPlay(){
         player->setMedia(QUrl::fromLocalFile(m_appdir + "/001005.mp3"));
         player->play();
    }

};
#endif // AUDIOPLAYER_H
