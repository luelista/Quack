include(../vendor/qxmpp/qxmpp.pri)

QMAKE_LIBDIR += ../vendor/qxmpp/src
QMAKE_RPATHDIR += $$OUT_PWD/../vendor/qxmpp/src

INCLUDEPATH += $$QXMPP_INCLUDEPATH
LIBS += ../vendor/qxmpp/src/libqxmpp_d.a
#LIBS += -lqxmpp
# xxxxx

android-no-sdk {
    target.path = /data/user/qt
    export(target.path)
    INSTALLS += target
} else:android {
    x86 {
        target.path = /libs/x86
    } else: armeabi-v7a {
        target.path = /libs/armeabi-v7a
    } else {
        target.path = /libs/armeabi
    }
    export(target.path)
    INSTALLS += target
} else:unix {
    isEmpty(target.path) {
        qnx {
            target.path = /tmp/$${TARGET}/bin
        } else {
            target.path = /opt/$${TARGET}/bin
        }
        export(target.path)
    }
    INSTALLS += target
}

export(INSTALLS)
