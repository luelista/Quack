TEMPLATE = app

QT += qml quick widgets sql

SOURCES += main.cpp \
    accountmanager.cpp \
    quackapp.cpp \
    account.cpp \
    jabberaccount.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    accountmanager.h \
    quackapp.h \
    account.h \
    jabberaccount.h
