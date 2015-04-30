#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <QObject>

class Account : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString Description MEMBER description)
    Q_PROPERTY(QString User MEMBER userid)
    Q_PROPERTY(QString Password MEMBER password)

public:
    explicit Account(QObject *parent = 0);

    int m_rowId;           // internal database id
    QString description;   //

    QString userid;        // jabber JID, textsecure phone number, etc.
    QString password;      //
    QString server;        // if relevant
    int port;              // if relevant

    QString errorMessage;

    Q_INVOKABLE virtual QString proto() { return ""; }
    Q_INVOKABLE virtual void go_online() {}
    Q_INVOKABLE virtual void go_offline() {}

    static Account* make(QString proto);

signals:
    void onlineStatusChanged(int online);
    void messageReceived(QString form, QString message);

public slots:
};

#endif // ACCOUNT_H
