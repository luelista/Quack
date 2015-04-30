import QtQuick 2.4
import QtQuick.Controls 1.2
import QtQuick.Layouts 1.0

Item {
    width: 405
    height: 270

    property alias cancelButton: cancelButton
    property alias connectButton: connectButton
    property alias userid: useridField.text
    property alias password: passwordField.text
    property alias server: serverField.text
    property alias port: portField.text

    Text {
        x: 39
        y: 23
        width: 102
        height: 14
        text: qsTr("Jabber ID:")
        font.pixelSize: 12
    }

    TextField {
        id: useridField
        x: 153
        y: 17
        width: 220
        height: 26
        focus: true
        placeholderText: qsTr("janedoe@example.org")
    }

    Text {
        x: 39
        y: 66
        width: 102
        height: 14
        text: qsTr("Password:")
        font.pixelSize: 12
    }

    TextField {
        id: passwordField
        x: 153
        y: 60
        width: 220
        height: 26
        echoMode: 2
        inputMask: qsTr("")
        placeholderText: qsTr("")



    }



    GroupBox {
        id: groupBox1
        x: 12
        y: 98
        width: 383
        height: 116
        flat: false
        title: qsTr("Advanced Options  ")

        Text {
            x: 18
            y: 12
            width: 102
            height: 14
            text: qsTr("Server:")
            font.pixelSize: 12
        }

        TextField {
            id: serverField
            x: 132
            y: 6
            width: 220
            height: 26
            placeholderText: qsTr("(filled automatically)")
        }


        Text {
            x: 18
            y: 54
            width: 102
            height: 14
            text: qsTr("Port:")
            font.pixelSize: 12
        }

        TextField {
            id: portField
            x: 132
            y: 48
            width: 220
            height: 26
            placeholderText: qsTr("5222")
            validator: IntValidator {bottom: 0; top: 65535;}
        }








    }





    Button {
        id: connectButton
        x: 257
        y: 225
        width: 108
        height: 27
        text: qsTr("OK")
        isDefault: true
    }
    Button {
        id: cancelButton
        x: 142
        y: 225
        width: 108
        height: 27
        text: qsTr("Cancel")
    }
}

