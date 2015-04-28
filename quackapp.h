#ifndef QUACKAPP_H
#define QUACKAPP_H

#include <QObject>
#include <QtSql/QSqlDatabase>
#include "accountmanager.h"

#define SQLCHECK(query,ok) if (!ok) { qDebug() << "Database Error " << query.lastError().text() << " (Query was: " << query.lastQuery() << ")"; }
#define SQLERROR(query,ok,errno) if (!ok) { \
    qDebug() << "Database Error " << query.lastError().text() << " (Query was: " << query.lastQuery() << ")";\
    return errno; }

class QuackApp : public QObject
{
    Q_OBJECT
public:
    explicit QuackApp(QObject *parent = 0);

    Q_INVOKABLE AccountManager * acctMan(void);

signals:

public slots:

private:

    AccountManager * m_accountManager;
    QSqlDatabase m_dataBase;
    void initializeDatabase();

};

#endif // QUACKAPP_H
