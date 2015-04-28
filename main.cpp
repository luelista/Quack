#include <QApplication>
#include <QQmlApplicationEngine>
#include "quackapp.h"
#include "jabberaccount.h"
#include <QtQml>

QuackApp* APP;
//max2@teamwiki.de
static QJSValue quackapp_singleton_provider(QQmlEngine *engine,
    QJSEngine *scriptEngine)
{
    Q_UNUSED(engine)
    return scriptEngine->newQObject(APP);
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    qmlRegisterType<Account>("net.luelistan.quack", 1, 0, "Account");
    qmlRegisterType<JabberAccount>("net.luelistan.quack", 1, 0, "JabberAccount");
    qmlRegisterType<AccountManager>("net.luelistan.quack", 1, 0, "AccountManager");
    qmlRegisterSingletonType("net.luelistan.quack", 1, 0, "APP", quackapp_singleton_provider);

    APP = new QuackApp();

    QQmlApplicationEngine engine;
    //engine.globalObject().setProperty("APP", engine.newQObject(APP));

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));


    return app.exec();
}
