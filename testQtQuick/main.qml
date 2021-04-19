import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

//    qml 테스트
    Text {
        text: qsTr("Hello World")
        color: "red"
        anchors.centerIn: parent
    }
    MouseArea{
        anchors.fill: parent
        onClicked: {
            Qt.quit();
        }
    }

//    Rectangle과 중첩 Rectangle
    /*Rectangle{
        x:50; y:50
        width: 300; height: 150
        color: "lightblue"
        Rectangle{
            x:50; y:50
            width: 50; height: 50
            color: "white"
        }
    }

    Rectangle{
        x:50; y:200
        width: 300; height: 150
        color: "green"
        Rectangle{
            x:100; y:50
            width: 150; height: 50
            color: "blue"
        }
    }*/

//    Rectangle의 color
    /*Rectangle{
        x: 0
        y: 0
        width: 100
        height: 100
        color: "#ff0000"
    }
    Rectangle{
        x:100
        y:0
        width: 100
        height: 100
        color: Qt.rgba(0,0.75,0,1)
    }
    Rectangle{
        x: 200
        y: 0
        width: 100
        height: 100
        color: "blue"
    }*/

//    이미지는 없어서 생략~

    Text {
        text: "<b>Hello World</b>"
        font.pointSize: 24
        color: "red"
    }








}


