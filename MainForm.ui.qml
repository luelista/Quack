import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Layouts 1.1

Item {
    width: 640
    height: 480

    property alias textArea1: textArea1

    SplitView {
        id: splitView1
        orientation: Qt.Horizontal
        anchors.fill: parent

        Item {
            id: item1
            width: 200
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
                                    color: colorCode
                                }

                                Text {
                                    text: name
                                    font.bold: true
                                    anchors.verticalCenter: parent.verticalCenter
                                }
                            }
                        }
                        model: ListModel {
                            ListElement {
                                name: "Max Weller"
                                colorCode: "#99aa33"
                            }
                            ListElement {
                                name: "asdfasdfasdfasdf"
                                colorCode: "#3399aa"
                            }
                        }
                    }
                }


        }

        TextArea {
            id: textArea1
        }
    }
}
