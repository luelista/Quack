TEMPLATE = app

QT += qml quick widgets sql

SOURCES += src/main.cpp \
    src/accountmanager.cpp \
    src/quackapp.cpp \
    src/account.cpp \
    src/protocols/jabberaccount.cpp \
    src/conversation.cpp \
    src/groupchat.cpp \
    src/message.cpp \
    src/contact.cpp

RESOURCES += qml.qrc

win32:RC_ICONS += resources/AppIcon.ico
ICON = resources/AppIcon.icns

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    src/accountmanager.h \
    src/quackapp.h \
    src/account.h \
    src/protocols/jabberaccount.h \
    src/conversation.h \
    src/groupchat.h \
    src/message.h \
    src/contact.h
