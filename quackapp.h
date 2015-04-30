#ifndef QUACKAPP_H
#define QUACKAPP_H

#include <QObject>
#include <QHash>
#include <QtSql/QSqlDatabase>
#include "accountmanager.h"
#include "conversation.h"

#define SQLCHECK(query,ok) if (!ok) { qDebug() << "Database Error " << query.lastError().text() << " (Query was: " << query.lastQuery() << ")"; }
#define SQLERROR(query,ok,errno) if (!ok) { \
    qDebug() << "Database Error " << query.lastError().text() << " (Query was: " << query.lastQuery() << ")";\
    return errno; }

class QuackApp : public QObject
{
    Q_OBJECT
    Q_PROPERTY(AccountManager* accountManager READ acctMan)
    Q_PROPERTY(Conversation* activeConversation READ activeConversation WRITE setActiveConversation NOTIFY activeConversationChanged)
public:
    explicit QuackApp(QObject *parent = 0);

    Q_INVOKABLE AccountManager * acctMan(void);

    Q_INVOKABLE Conversation* activeConversation();
    Q_INVOKABLE void setActiveConversation(Conversation* c);

signals:
    void activeConversationChanged();

public slots:

private:
    Conversation * m_activeConversation;
    AccountManager * m_accountManager;
    QSqlDatabase m_dataBase;
    QHash<QString,Conversation*> m_conversations;

    void initializeDatabase();
    void loadConversationsFromDatabase();

};

#endif // QUACKAPP_H
