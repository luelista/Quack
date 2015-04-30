import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Window 2.2
import QtQuick.Dialogs 1.2
import net.luelistan.quack 1.0

ApplicationWindow {
    title: qsTr("Quack")
    width: 640
    height: 480
    visible: true

    menuBar: MenuBar {
        Menu {
            title: qsTr("&File")
            MenuItem {
                text: qsTr("&Open")
                onTriggered: messageDialog.show(qsTr("Open action triggered"));
            }
            MenuItem {
                text: qsTr("E&xit")
                onTriggered: Qt.quit();
            }
        }
        Menu {
            title: qsTr("&Accounts")
            MenuItem {
                text: "Add Account ..."
                onTriggered: {
                    addAccountSheet.clearForm(); addAccountSheet.show();
                }
            }
            MenuItem {
                text: "List"
                onTriggered: {
                    var am = APP.accountManager;
                    for(var i = 0; i < am.size(); i++)
                        main.textArea1.text += am.get(i).proto() + " account: " + am.get(i).User + "\n";
                }
            }
            MenuItem {
                text: "Go online"
                onTriggered: {
                    var am = APP.accountManager;
                    for(var i = 0; i < am.size(); i++)
                        am.get(i).go_online();
                }
            }
        }
    }

    MainForm {
        id: main
        anchors.fill: parent
        /*button1.onClicked: testSheet.show()
        button2.onClicked: messageDialog.show(qsTr("Button 2 pressed"))
        button3.onClicked: messageDialog.show(qsTr("Button 3 pressed"))*/
    }

    MessageDialog {
        id: messageDialog
        title: qsTr("May I have your attention, please?")
        icon: StandardIcon.Question

        function show(caption) {
            messageDialog.text = caption;
            messageDialog.open();
        }
    }


    Window {
        id: addAccountSheet
        flags: "Sheet"
        width: 450
        height: 300
        modality: Qt.WindowModal
        AddAccountForm {
            id: addAccountForm
            anchors.fill: parent
            cancelButton.onClicked: addAccountSheet.close()
            connectButton.onClicked: {
                print("Hello, world.")
                var ok = APP.accountManager.createAccount("jabber", userid, password);
                if (ok) addAccountSheet.close(); else print("Error!");

            }
        }

        function clearForm() {
            addAccountForm.userid = ""; addAccountForm.password = ""; addAccountForm.server = ""; addAccountForm.port = "";
        }
    }


}
