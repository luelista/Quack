#ifndef JABBERACCOUNT_H
#define JABBERACCOUNT_H

#include "../account.h"
#include "QXmppClient.h"
#include "QXmppMessage.h"
#include "QXmppRosterManager.h"

class JabberAccount : public Account
{
    Q_OBJECT

public:
    explicit JabberAccount(QObject *parent = 0);
    virtual ~JabberAccount();

    QString proto() {
        return "jabber";
    }

    void go_online();

signals:

public slots:
    void clientConnected();
    void rosterReceived();
    void presenceChanged(const QString& bareJid, const QString& resource);
    void xmppError(QXmppClient::Error err);

protected:
    QXmppClient* m_client;

};

#endif // JABBERACCOUNT_H
