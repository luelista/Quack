#include "quackapp.h"
#include "accountmanager.h"
#include <QtSql>
#include <QDir>

QuackApp::QuackApp(QObject *parent) : QObject(parent)
{

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/tmp/quack.db");
    // db.setDatabaseName(QDir::homePath() + QDir::separator() + ".config" + QDir::separator() + "quack.cfg");

    bool ok = db.open();
    this->m_dataBase = db;

    this->initializeDatabase();

    this->m_accountManager = new AccountManager();
    this->acctMan()->loadFromDatabase();

}

AccountManager * QuackApp::acctMan(void) {
    return this->m_accountManager;
}

void QuackApp::initializeDatabase() {
    QSqlQuery q(this->m_dataBase);
    int ok = q.exec("CREATE TABLE IF NOT EXISTS accounts (proto TEXT,userid TEXT, enabled INT,description TEXT,password TEXT,server TEXT, port INT);");
    SQLCHECK(q, ok);

}

