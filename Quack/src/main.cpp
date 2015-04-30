#include <QApplication>
#include <QQmlApplicationEngine>
#include <QtQml>
#include "quackapp.h"
#include "jabberaccount.h"
#include "conversation.h"

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
    qmlRegisterSingletonType("net.luelistan.quack", 1, 0, "APP", quackapp_singleton_provider);


    QQmlApplicationEngine engine;
    APP->m_engine = &engine;
    //engine.globalObject().setProperty("APP", engine.newQObject(APP));

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    QQmlContext *ctxt = engine.rootContext();
    ctxt->setContextProperty("app", APP);

    return app.exec();
}
