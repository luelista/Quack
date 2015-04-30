#include <QApplication>
#include <QQmlApplicationEngine>
#include "quackapp.h"
#include "jabberaccount.h"
#include "conversation.h"
#include <QtQml>
//#include <QtDeclarative/QDeclarativeContext>
//#include <QtDeclarative/QDeclarativeView>
#include <QDeclarativeContext>

QuackApp* APP;
//max2@teamwiki.de
static QJSValue quackapp_singleton_provider(QQmlEngine *engine,
    QJSEngine *scriptEngine)
{
    Q_UNUSED(engine)
    printf("quackapp_singleton_provider called \n");
    printf("ptr = %p\n", APP);
    return scriptEngine->newQObject(APP);
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    APP = new QuackApp();

    qmlRegisterType<Account>("net.luelistan.quack", 1, 0, "Account");
    qmlRegisterType<JabberAccount>("net.luelistan.quack", 1, 0, "JabberAccount");
    qmlRegisterType<AccountManager>("net.luelistan.quack", 1, 0, "AccountManager");
    qmlRegisterType<QuackApp>("net.luelistan.quack", 1, 0, "QuackApp");
    qmlRegisterType<Conversation>("net.luelistan.quack", 1, 0, "Conversation");
    //qmlRegisterSingletonType("net.luelistan.quack", 1, 0, "APP", quackapp_singleton_provider);


    QDeclarativeView view;
    view.rootContext()->setContextProperty("APP", &APP);

    view.setSource(QUrl(QStringLiteral("qrc:/main.qml")));
    view.show();

    //QQmlApplicationEngine engine;
    //engine.globalObject().setProperty("APP", engine.newQObject(APP));

    //engine.load(QUrl(QStringLiteral("qrc:/main.qml")));


    //return app.exec();
}
