#include "jabberaccount.h"


JabberAccount::JabberAccount(QObject *parent)
{
    bool check;
    Q_UNUSED(check);

    m_client = new QXmppClient(parent);
    //m_client->setLogger(new QXmppLogger());
    m_client->logger()->setLoggingType(QXmppLogger::StdoutLogging);

    connect(m_client, SIGNAL(error(QXmppClient::Error)), this, SLOT(xmppError(QXmppClient::Error)));

    check = connect(m_client, SIGNAL(connected()), this, SLOT(clientConnected()));
    Q_ASSERT(check);

    check = connect(&m_client->rosterManager(), SIGNAL(rosterReceived()), this, SLOT(rosterReceived()));
    Q_ASSERT(check);

    /// Then QXmppRoster::presenceChanged() is emitted whenever presence of someone
    /// in roster changes
    check = connect(&m_client->rosterManager(), SIGNAL(presenceChanged(QString,QString)), this,
                    SLOT(presenceChanged(QString,QString)));
    Q_ASSERT(check);
}

void JabberAccount::xmppError(QXmppClient::Error err ) {
    qDebug() << "xmpp error " << err;
    switch(err) {
    case QXmppClient::XmppStreamError:
        qDebug() << m_client->xmppStreamError();
        break;
    }
}

void JabberAccount::go_online()
{
    qDebug() << "going online with Jabber account " << this->userid;
    this->m_client->connectToServer(this->userid, this->password);
}


JabberAccount::~JabberAccount()
{

}

void JabberAccount::clientConnected()
{
    qDebug("example_2_rosterHandling:: CONNECTED");
}

void JabberAccount::rosterReceived()
{
    qDebug("example_2_rosterHandling:: Roster received");
    foreach (const QString &bareJid, m_client->rosterManager().getRosterBareJids()) {
        QString name = m_client->rosterManager().getRosterEntry(bareJid).name();
        if(name.isEmpty())
            name = "-";
        qDebug("example_2_rosterHandling:: Roster received: %s [%s]", qPrintable(bareJid), qPrintable(name));
    }
}

void JabberAccount::presenceChanged(const QString& bareJid,
                                 const QString& resource)
{
    qDebug("example_2_rosterHandling:: Presence changed %s/%s", qPrintable(bareJid), qPrintable(resource));
}


