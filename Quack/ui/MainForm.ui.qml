import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Layouts 1.1
import QtQuick.Controls.Styles 1.3

Item {
    width: 640
    height: 480

    property alias chatview: chatview
    property alias chatsendText: chatsendText
    property alias sendButton: sendButton
    property alias conferences: listView1

    SplitView {
        id: splitView1
        orientation: Qt.Horizontal
        anchors.fill: parent

        Item {
            id: item1
            width: 200
            Layout.minimumWidth: 150
            ListView {
                id: listView1
                interactive: true
                anchors.fill: parent
                width: 200; height: parent.height
                focus: true
                highlight: Rectangle { color: "lightsteelblue"; }
                delegate: Item {
                    x: 5
                    height: 50
                    width: parent.width

                    MouseArea {
                        anchors.fill: parent
                        onClicked: {
                            listView1.currentIndex = index;
                            listView1.forceActiveFocus();
                        }
                    }
                    Row {
                        id: row1
                        spacing: 10
                        anchors.margins: 5
                        anchors.fill: parent
                        Rectangle {
                            width: 40
                            height: 40
                            color: "#ffeeaa"
                        }

                        Text {
                            text: displayName
                            font.bold: true
                            anchors.verticalCenter: parent.verticalCenter
                        }
                    }
                }
                model: ListModel {
                }
            }
        }





        // right


        // rechte Spalte
        SplitView {
            orientation: Qt.Vertical
            Layout.fillWidth: true
            Layout.minimumWidth: 250

            // Chat view
            Rectangle {
                id: chatview
                color: "lightblue"
                Layout.fillHeight: true
                Layout.minimumHeight: 200

                // Liste an Nachrichten
                Column {
                    id: column
                    rotation: 0
                    anchors.fill: parent
                    anchors.margins: 5
                    spacing: 5

                    states: State {
                        name: "moved"
                        when: sendbtn.pressed
                        PropertyChanges {
                            target: column
                            anchors.topMargin: 50
                        }
                    }

                    transitions: Transition {
                        NumberAnimation {
                            properties: "topMargin"
                            easing.type: Easing.InOutQuad
                        }
                    }

                    Label {
                        id: text1
                        text: "111"
                    }
                    Label {
                        id: text2
                        text: "2 323 32 2 2 2"
                    }
                    Label {
                        id: text3
                        text: "333333333333"
                    }
                    Label {
                        id: text4
                        text: "444 4444 44"
                    }
                }
            }

            // Input view
            Rectangle {
                height: 40
                Layout.minimumHeight: 30
                Layout.maximumHeight: 100
                Layout.fillWidth: true
                Layout.fillHeight: true
                color: "lightgreen"

                RowLayout {
                    anchors.fill: parent
                    anchors.margins: 5

                    TextField {
                        id: chatsendText
                        text: ""
                        placeholderText: "Send a message"
                        Layout.fillWidth: true
                        Layout.fillHeight: true

                        style: TextFieldStyle {
                            textColor: "black"
                            background: Rectangle {
                                radius: 4
                                border.color: "#ccc"
                                border.width: 1
                            }
                        }
                    }

                    Button {
                        id: sendButton
                        text: "Send"
                        Layout.fillHeight: true

                        style: ButtonStyle {
                            background: Rectangle {
                                implicitWidth: 100
                                implicitHeight: 25
                                border.width: control.activeFocus ? 2 : 1
                                border.color: "#ccc"
                                radius: 4
                                gradient: Gradient {
                                    GradientStop {
                                        position: 0
                                        color: control.pressed ? "#fff" : "#fff"
                                    }
                                    GradientStop {
                                        position: 1
                                        color: control.pressed ? "#eee" : "#fff"
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

        // end right




    }
}
