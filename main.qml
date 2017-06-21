import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 1.4

Window {
    visible: true
    width: 500
    height: 200
    title: qsTr("Hello World")

    Connections{
        target: dataStore
        onIncreaseOne: txtCount.text = ms
    }

    Text {
        id: txtCount
        text: qsTr("0 hits")
    }

    Button{
        id: btnUpdate
        anchors.top: txtCount.bottom
        text: "Just click me"
        onClicked: {
            dataStore.callMeFromQml()
        }
    }
}
