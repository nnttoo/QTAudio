import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3
import org.testaja 1.0


ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    MyPlayer{
        id: myplayer
    }



    Button{
        text: "play"
        onPressed: {
             myplayer.testPlay();
        }
    }
}
