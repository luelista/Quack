#ifndef CONVERSATION_H
#define CONVERSATION_H

#include <QObject>
#include "account.h"
class Conversation : public QObject
{
    Q_OBJECT
public:
    explicit Conversation(Account* account, QString id, QObject *parent = 0);

    Account* m_account;
    QString m_id;
    int m_enabled;
    QString m_displayName;
    int m_displayPosition;
    int m_notify;

signals:

public slots:
};

#endif // CONVERSATION_H
