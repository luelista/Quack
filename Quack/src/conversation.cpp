#include "conversation.h"

Conversation::Conversation(Account* account, QString id, QObject *parent) : QObject(parent)
{
    this->m_account = account;
    this->m_id = id;
}

Conversation::Conversation( QObject *parent) : QObject(parent)
{
}


QString Conversation::displayName() { return m_displayName; }
void Conversation::setDisplayName(QString value) {
    m_displayName = value;
    emit displayNameChanged();
}

