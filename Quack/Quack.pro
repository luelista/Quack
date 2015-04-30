TEMPLATE = app

QT += qml quick widgets sql

SOURCES += src/main.cpp \
    src/accountmanager.cpp \
    src/quackapp.cpp \
    src/account.cpp \
    src/jabberaccount.cpp \
    src/conversation.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    src/accountmanager.h \
    src/quackapp.h \
    src/account.h \
    src/jabberaccount.h \
    src/conversation.h
