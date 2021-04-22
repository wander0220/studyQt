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

//    텍스트를 html 스타일로 꾸밀 수 있다!
    /*Text {
        text: "<b>Hello World</b>"
        font.pointSize: 24
        color: "red"
    }*/

//    Anchors
    /*Rectangle{
        width: 300
        height: 300
        color: "lightblue"
        id: rectangle1

        Text {
            text: qsTr("Centered Text");
            color: "green"
            font.pixelSize: 32;
            anchors.centerIn:  rectangle1
        }
    }*/

//    margin 사용 가능
    /*
    Rectangle{
        width: 300
        height: 100
        color: "lightblue"
        Text {
            //y: 34
            text: "Hello, World!"
            font.pixelSize: 32
            anchors.right: parent.right
            anchors.rightMargin: 30
        }
    }*/

    Rectangle{
        id:button
        property bool checked: false
        property alias text: buttonText.text

        Accessible.name: text;
        Accessible.description: "This Button does "+Text {
                                    id: name
                                    text: qsTr("text")
                                }

    }




}


