#ifndef CONVERSATION_H
#define CONVERSATION_H

#include <QObject>
#include "account.h"
class Conversation : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString displayName READ displayName WRITE setDisplayName NOTIFY displayNameChanged)

public:
    Conversation(QObject *parent = 0);
    explicit Conversation(Account* account, QString id, QObject *parent = 0);

    QString displayName();
    void setDisplayName(QString value);

    Account* m_account;
    QString m_id;
    int m_enabled;
    QString m_displayName;
    int m_displayPosition;
    int m_notify;

    void storeMessageInDatabase(QString from, QString message, int date);


signals:
    void displayNameChanged();

public slots:
};

#endif // CONVERSATION_H
