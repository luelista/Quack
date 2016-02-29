#-------------------------------------------------
#
# Project created by QtCreator 2016-02-28T21:51:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets webkitwidgets

TARGET = Quack
TEMPLATE = app

DEFINES += "APP_NAME=\\\"Quack\\\""

SOURCES += main.cpp\
        mainwindow.cpp \
    settingsdialog.cpp

HEADERS  += mainwindow.h \
    settingsdialog.h

FORMS    += mainwindow.ui \
    settingsdialog.ui

RESOURCES += \
    quackresource.qrc

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../vendor/qxmpp/src/release/ -lqxmpp
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../vendor/qxmpp/src/debug/ -lqxmpp
else:unix: LIBS += -L$$PWD/../vendor/qxmpp/src/ -lqxmpp

INCLUDEPATH += $$PWD/vendor/qxmpp/src
DEPENDPATH += $$PWD/vendor/qxmpp/src
