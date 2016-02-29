/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPreferences;
    QAction *actionHelp;
    QAction *actionSearch_for_Updates;
    QAction *actionXMPP_Console;
    QAction *actionSQLite_Console;
    QAction *actionEdit_Styles;
    QAction *actionReload_Styles;
    QAction *actionAd_hoc_Commands;
    QAction *actionSend_File;
    QAction *actionFind;
    QAction *actionReconnect;
    QAction *actionQuit;
    QAction *actionJoin_Conference;
    QAction *actionCreate_Conference;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QToolButton *toolButton;
    QTreeWidget *treeWidget;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QTreeWidget *treeWidget_2;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QWebView *webView;
    QMenuBar *menuBar;
    QMenu *menuChat;
    QMenu *menuTools;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(625, 567);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/duckling.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QStringLiteral("actionPreferences"));
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionSearch_for_Updates = new QAction(MainWindow);
        actionSearch_for_Updates->setObjectName(QStringLiteral("actionSearch_for_Updates"));
        actionXMPP_Console = new QAction(MainWindow);
        actionXMPP_Console->setObjectName(QStringLiteral("actionXMPP_Console"));
        actionSQLite_Console = new QAction(MainWindow);
        actionSQLite_Console->setObjectName(QStringLiteral("actionSQLite_Console"));
        actionEdit_Styles = new QAction(MainWindow);
        actionEdit_Styles->setObjectName(QStringLiteral("actionEdit_Styles"));
        actionReload_Styles = new QAction(MainWindow);
        actionReload_Styles->setObjectName(QStringLiteral("actionReload_Styles"));
        actionAd_hoc_Commands = new QAction(MainWindow);
        actionAd_hoc_Commands->setObjectName(QStringLiteral("actionAd_hoc_Commands"));
        actionSend_File = new QAction(MainWindow);
        actionSend_File->setObjectName(QStringLiteral("actionSend_File"));
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName(QStringLiteral("actionFind"));
        actionReconnect = new QAction(MainWindow);
        actionReconnect->setObjectName(QStringLiteral("actionReconnect"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionJoin_Conference = new QAction(MainWindow);
        actionJoin_Conference->setObjectName(QStringLiteral("actionJoin_Conference"));
        actionCreate_Conference = new QAction(MainWindow);
        actionCreate_Conference->setObjectName(QStringLiteral("actionCreate_Conference"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        splitter_2 = new QSplitter(centralWidget);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter_2->sizePolicy().hasHeightForWidth());
        splitter_2->setSizePolicy(sizePolicy);
        splitter_2->setAutoFillBackground(false);
        splitter_2->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        widget = new QWidget(splitter);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(widget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        toolButton = new QToolButton(frame);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        horizontalLayout_3->addWidget(toolButton);


        verticalLayout_2->addWidget(frame);

        treeWidget = new QTreeWidget(widget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->header()->setVisible(false);

        verticalLayout_2->addWidget(treeWidget);

        splitter->addWidget(widget);
        widget1 = new QWidget(splitter);
        widget1->setObjectName(QStringLiteral("widget1"));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(widget1);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);


        verticalLayout->addWidget(frame_2);

        treeWidget_2 = new QTreeWidget(widget1);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QStringLiteral("1"));
        treeWidget_2->setHeaderItem(__qtreewidgetitem1);
        treeWidget_2->setObjectName(QStringLiteral("treeWidget_2"));

        verticalLayout->addWidget(treeWidget_2);

        splitter->addWidget(widget1);
        splitter_2->addWidget(splitter);
        widget2 = new QWidget(splitter_2);
        widget2->setObjectName(QStringLiteral("widget2"));
        verticalLayout_3 = new QVBoxLayout(widget2);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(widget2);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(3, 3, 3, 3);
        lineEdit = new QLineEdit(frame_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(frame_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_3->addWidget(frame_3);

        webView = new QWebView(widget2);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setUrl(QUrl(QStringLiteral("about:blank")));

        verticalLayout_3->addWidget(webView);

        splitter_2->addWidget(widget2);

        horizontalLayout_2->addWidget(splitter_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 625, 24));
        menuChat = new QMenu(menuBar);
        menuChat->setObjectName(QStringLiteral("menuChat"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuChat->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuChat->addAction(actionJoin_Conference);
        menuChat->addAction(actionCreate_Conference);
        menuChat->addAction(actionSend_File);
        menuChat->addAction(actionFind);
        menuChat->addAction(actionReconnect);
        menuChat->addSeparator();
        menuChat->addAction(actionQuit);
        menuTools->addAction(actionXMPP_Console);
        menuTools->addAction(actionSQLite_Console);
        menuTools->addAction(actionEdit_Styles);
        menuTools->addAction(actionReload_Styles);
        menuTools->addAction(actionAd_hoc_Commands);
        menuTools->addSeparator();
        menuTools->addAction(actionPreferences);
        menuHelp->addAction(actionHelp);
        menuHelp->addAction(actionSearch_for_Updates);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Quack", 0));
        actionPreferences->setText(QApplication::translate("MainWindow", "Preferences", 0));
        actionPreferences->setShortcut(QApplication::translate("MainWindow", "Ctrl+,", 0));
        actionHelp->setText(QApplication::translate("MainWindow", "Help", 0));
        actionSearch_for_Updates->setText(QApplication::translate("MainWindow", "Search for Updates", 0));
        actionXMPP_Console->setText(QApplication::translate("MainWindow", "XMPP Console", 0));
        actionXMPP_Console->setShortcut(QApplication::translate("MainWindow", "F9", 0));
        actionSQLite_Console->setText(QApplication::translate("MainWindow", "SQLite Console", 0));
        actionSQLite_Console->setShortcut(QApplication::translate("MainWindow", "Shift+F9", 0));
        actionEdit_Styles->setText(QApplication::translate("MainWindow", "Edit Styles", 0));
        actionEdit_Styles->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+E", 0));
        actionReload_Styles->setText(QApplication::translate("MainWindow", "Reload Styles", 0));
        actionReload_Styles->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+R", 0));
        actionAd_hoc_Commands->setText(QApplication::translate("MainWindow", "Ad-hoc Commands", 0));
        actionAd_hoc_Commands->setShortcut(QApplication::translate("MainWindow", "F8", 0));
        actionSend_File->setText(QApplication::translate("MainWindow", "Send File ...", 0));
        actionFind->setText(QApplication::translate("MainWindow", "Find ...", 0));
        actionFind->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", 0));
        actionReconnect->setText(QApplication::translate("MainWindow", "Reconnect", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0));
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        actionJoin_Conference->setText(QApplication::translate("MainWindow", "Join Conference ...", 0));
        actionCreate_Conference->setText(QApplication::translate("MainWindow", "Create Conference ...", 0));
        label->setText(QApplication::translate("MainWindow", "Conferences", 0));
        toolButton->setText(QApplication::translate("MainWindow", "...", 0));
        label_2->setText(QApplication::translate("MainWindow", "Participants", 0));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", 0));
        menuChat->setTitle(QApplication::translate("MainWindow", "Chat", 0));
        menuTools->setTitle(QApplication::translate("MainWindow", "Too&ls", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Hel&p", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
