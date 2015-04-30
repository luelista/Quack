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


Conversation* QuackApp::activeConversation() {
    return this->m_activeConversation;
}

void QuackApp::setActiveConversation(Conversation* c) {
    m_activeConversation = c;
    emit activeConversationChanged();
}

AccountManager * QuackApp::acctMan(void) {
    return this->m_accountManager;
}

void QuackApp::initializeDatabase() {
    int ok;
    QSqlQuery q(this->m_dataBase);
    ok = q.exec("CREATE TABLE IF NOT EXISTS accounts (proto TEXT,userid TEXT, enabled INT,description TEXT,password TEXT,server TEXT, port INT);");
    SQLCHECK(q, ok);
    ok = q.exec("CREATE TABLE IF NOT EXISTS room (account_id INT, room TEXT,lastmessagedt TEXT, subject TEXT, do_join INT,display_name TEXT,password TEXT,notify INT, display_position INT);");
    SQLCHECK(q, ok);

}

void QuackApp::loadConversationsFromDatabase() {
    qDebug("Loading conversations...");

    QSqlQuery query;
    query.exec("SELECT account_id,room,do_join,display_name,notify,display_position FROM room;");
    while (query.next()) {
        int account_id = query.value(0).toInt();
        QString id = query.value(1).toString();
        Account* a = this->acctMan()->getByAccountId(account_id);
        if (a == NULL) {
            qDebug() << "ERROR: Corresponding account"<<account_id<<" not found for room " << id << ", skipping";
            continue;
        }
        Conversation* con = new Conversation(a, id);
        con->m_enabled = query.value(2).toInt();
        con->m_displayName = query.value(3).toString();
        con->m_displayPosition = query.value(5).toInt();
        con->m_notify = query.value(4).toInt();
        this->m_conversations.insert(id, con);
        qDebug() << a->description; // << a->userid;
    }
}


