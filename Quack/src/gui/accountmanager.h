#ifndef ACCOUNTMANAGER_H
#define ACCOUNTMANAGER_H

#include <QObject>
#include "account.h"

class AccountManager : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QList<Account*> accounts MEMBER accounts NOTIFY accountsChanged)

public:
    explicit AccountManager(QObject *parent = 0);

    void loadFromDatabase();
    Q_INVOKABLE bool createAccount(QString proto, QString userid, QString password);
    int addToDatabase(Account* account);


    Q_INVOKABLE int size();
    Q_INVOKABLE Account* get(int idx);

    Q_INVOKABLE Account* getByAccountId(int rowId);


signals:
    void accountsChanged();

public slots:

private:
    QList<Account*> accounts;
};

#endif // ACCOUNTMANAGER_H
