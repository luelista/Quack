#include "accountmanager.h"
#include <QtSql>
#include "account.h"
#include "quackapp.h"

AccountManager::AccountManager(QObject *parent) : QObject(parent)
{

}

bool AccountManager::createAccount(QString proto, QString userid, QString password) {
    Account* newAcct = Account::make(proto);
    if (newAcct == NULL) return false;
    newAcct->userid = userid;
    newAcct->password = password;
    if (!this->addToDatabase(newAcct)) return false;
    this->accounts.append(newAcct);
    return true;
}


int AccountManager::addToDatabase(Account* account) {
    qDebug() << account->description << account->userid;
    QSqlQuery q;
    int ok;
    if (account->m_rowId > 0) {
        ok = q.prepare("UPDATE accounts SET description=:desc, userid=:userid, password=:password, server=:server, port=:port WHERE rowid=:id");
        q.bindValue(":id", account->m_rowId);
    } else {
        ok = q.prepare("INSERT INTO accounts (description,proto,userid,password,server,port) "
                  "              VALUES (:desc,:proto,:userid,:password,:server,:port)");
    }
    SQLERROR(q, ok, 0);
    q.addBindValue(account->description);
    q.bindValue(":proto", account->proto());
    q.bindValue(":userid", account->userid);
    q.bindValue(":password", account->password);
    q.bindValue(":server", account->server);
    q.bindValue(":port", account->port);
    ok = q.exec();
    SQLERROR(q, ok, 0);

    // store row id in object
    if (account->m_rowId <= 0) account->m_rowId = q.lastInsertId().toInt();

    return 1;
}

void AccountManager::loadFromDatabase() {
    qDebug("Loading accounts...");

    QSqlQuery query;
    query.exec("SELECT description,proto,userid,password,server,port FROM accounts;");
    while (query.next()) {
        QString proto = query.value(1).toString();
        Account* a = Account::make(proto);
        if (a == NULL) {
            qDebug() << "ERROR: Invalid protocol type" << proto << "in database, skipping";
            continue;
        }

        a->description = query.value(0).toString();
        a->userid = query.value(2).toString();
        a->password = query.value(3).toString();
        a->server = query.value(4).toString();
        a->port = query.value(5).toInt();
        this->accounts.append(a);
        qDebug() << a->description; // << a->userid;
    }

}


int AccountManager::size() {
    return this->accounts.size();
}

Account* AccountManager::get(int idx) {
    return this->accounts.at(idx);
}


