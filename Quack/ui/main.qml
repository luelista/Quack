import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Window 2.2
import QtQuick.Dialogs 1.2
import QtQuick.Layouts 1.1
import net.luelistan.quack 1.0

ApplicationWindow {
    title: qsTr("Quack")
    width: 640
    height: 480
    visible: true
    id: test123

    function updateConversationList() {
        print("onConversationsChanged slot was called!")
        main.conferences.model.clear();
        var x = app.getConversations();
        for(var i in x) {
            print(i+": "+x[i]+", "+x[i].displayName);
            main.conferences.model.append(x[i]);
        }
        //main.conferences.update();

    }

    Connections {
        target: app
        onConversationsChanged: {
            updateConversationList()
        }
        onActiveConversationChanged: {
            print ("yyy")
        }
    }

    function blafoo(x) {
        print("Hallo "+x);
    }

    function getApp(){
        console.log("returning app", app)
        return app;
    }

    menuBar: MenuBar {
        Menu {
            title: qsTr("&File")
            MenuItem {
                text: qsTr("&Open")
                onTriggered: messageDialog.show(qsTr("Open action triggered"));
            }
            MenuItem {
                text: qsTr("E&xit")
                shortcut: "F4"
                onTriggered: Qt.quit();
            }
        }
        Menu {
            title: qsTr("&Accounts")
            MenuItem {
                text: "Add Account ..."
                shortcut: "Ctrl++"
                onTriggered: {
                    addAccountSheet.clearForm(); addAccountSheet.show();
                }
            }
            MenuItem {
                text: "List"
                shortcut: "F2"
                onTriggered: {
                    var am = app.accountManager;
                    for(var i = 0; i < am.size(); i++)
                        main.textArea1.text += am.get(i).proto() + " account: " + am.get(i).User + "\n";
                }
            }
            MenuItem {
                text: "Go online"
                shortcut: "F1"
                onTriggered: {
                    var am = app.accountManager;
                    for(var i = 0; i < am.size(); i++)
                        am.get(i).go_online();
                }
            }
        }
    }

    toolBar: ToolBar {
        height: 30
        RowLayout {
        Button {
            text: "Add account"

            onClicked: {
                addAccountSheet.clearForm(); addAccountSheet.show();
            }
        }
        Button {
            text: "Start conversation"

            onClicked: {
                joinChatroomForm.jid = "";
                joinChatroomSheet.show();
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

        sendButton.onClicked: {
            chatsendText.text = ""
        }
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
        id: joinChatroomSheet
        color: "#eeeeee"
        flags: Qt.Dialog
        minimumHeight: 140
        maximumHeight: 140
        height: 140
        minimumWidth: 320
        maximumWidth: 320
        width: 320
        modality: Qt.ApplicationModal
        Action {
            id: cancelAction
            shortcut: "Esc"
            onTriggered: joinChatroomSheet.close()
        }
        Action {
            id: okAction
            shortcut: "Return"
            onTriggered: {
                var name = joinChatroomForm.jid
                print("name: "+name)
                var conf = app.newConversation(app.accountManager.get(0), name);
                conf.displayName = name;
                joinChatroomSheet.close();
                updateConversationList();
            }
        }

        JoinChatroomForm {
            id: joinChatroomForm
            anchors.fill: parent
            okButton.action: okAction
        }
    }

    Window {
        id: addAccountSheet
        color: "#eeeeee"
        flags: "Sheet"
        width: 405
        height: 270
        modality: Qt.WindowModal

        Action {
            id: cancelAction2
            shortcut: "Esc"
            onTriggered: addAccountSheet.close()
        }
        Action {
            id: okAction2
            shortcut: "Enter"
            onTriggered: {
                print("Hello, world.")
                var ok = app.accountManager.createAccount("jabber", userid, password);
                if (ok) addAccountSheet.close(); else print("Error!");

            }
        }

        AddAccountForm {
            id: addAccountForm
            anchors.fill: parent
            cancelButton.action: cancelAction2
            connectButton.action: okAction2
        }

        function clearForm() {
            addAccountForm.userid = ""; addAccountForm.password = ""; addAccountForm.server = ""; addAccountForm.port = "";
        }


    }


}
