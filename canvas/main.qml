import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 700
    height: 250
    title: qsTr("System Information")

    color: "#B0E2FF"

 /*
    Canvas{
        id: myCanvas
        x: 150
        y: 5
        width: 300
        height: 195
        onPaint: {
            var ctx = getContext("2d");
            ctx.beginPath();
            ctx.arc(100,100,75,0,2*Math.PI);
            ctx.lineWidth = 20;
            ctx.strokeStyle = "#528B8B";
            ctx.stroke();
        }

    }

    Canvas{
        id: temp
        x: myCanvas.x+200
        y: myCanvas.y
        width: myCanvas.width
        height: myCanvas.height

        onPaint: {
            var ctx = getContext("2d");
            ctx.beginPath();
            ctx.arc(100,100,75,0,2*Math.PI);
            ctx.lineWidth = 20;
            ctx.strokeStyle = "#528B8B";
            ctx.stroke();
        }

    }
*/
    Rectangle
    {
        id: cpuUsage
        x: 550
        y: 0
        width: 150
        height: 50
        color: "#778899"
        visible: true

        Text {
            id: usagePercent
            text: qsTr("CPU: %")
            font.pointSize: 16
            anchors.centerIn: parent
        }
    }

    Rectangle{
        id: ramPercent
        x: cpuUsage.x
        y:cpuUsage.y+cpuUsage.height + 5

        width: cpuUsage.width
        height: cpuUsage.height
        color: "#778899"
        visible: true

        Text {
            id: m_ramPercent
            text: qsTr("RAM: %")
            font.pointSize: 16
            anchors.centerIn: parent
        }
    }

    //Button
    Rectangle{
        id: negativeRadio
        x: 0
        y: 8
        width: 150
        height: 75
        visible: true
        color: "#528B8B"

        border.color: "gray"
        border.width: 3.5
        radius: 5

        Text {
            id: radio
            text: qsTr("AM/FM")
            font.pointSize: 20
            anchors.centerIn: parent
        }

        MouseArea{
            anchors.fill: parent
            onPressed: negativeRadio.color  = "white"
            onReleased: negativeRadio.color = "#528B8B"
        }

    }

    Rectangle {
        id: nagativeTV
        x: 0
        y: 88
        width: 150
        height: 75
        visible: true
        color: "#528B8B"

        border.color: "gray"
        border.width: 3.5
        radius: 5

        Text {
            id: tv
            text: qsTr("TV")
            font.pointSize: 20
            anchors.centerIn: parent
        }

        MouseArea{
            anchors.fill: parent
            onPressed: nagativeTV.color  = "white"
            onReleased: nagativeTV.color = "#528B8B"
        }
    }

    Rectangle {
        id: nagativeCamera
        x: 0
        y: 168
        width: 150
        height: 75
        visible: true
        color: "#528B8B"

        border.color: "gray"
        border.width: 3.5
        radius: 5

        Text {
            id: camera
            text: qsTr("CAMERA")
            font.pointSize: 20
            anchors.centerIn: parent
        }

        MouseArea{
            anchors.fill: parent
            onPressed: nagativeCamera.color  = "white"
            onReleased: nagativeCamera.color = "#528B8B"
        }
    }
}
