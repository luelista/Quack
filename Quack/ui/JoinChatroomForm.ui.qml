import QtQuick 2.4
import QtQuick.Controls 1.2

Item {
    width: 400
    height: 135

    property alias jid: textField1.text
    property alias okButton: button1

    TextField {
        id: textField1
        x: 30
        y: 57
        width: 249
        height: 22
        focus: true
        placeholderText: qsTr("Text Field")
    }

    Label {
        id: label1
        x: 30
        y: 17
        width: 272
        height: 40
        text: qsTr("Please enter the jabber id of the conference room you want to join.")
        wrapMode: Text.WordWrap
    }

    Button {
        id: button1
        x: 30
        y: 94
        width: 112
        height: 26
        text: qsTr("OK")
        isDefault: true
        activeFocusOnPress: true
    }
}

