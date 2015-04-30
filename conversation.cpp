#include "conversation.h"

Conversation::Conversation(Account* account, QString id, QObject *parent) : QObject(parent)
{
    this->m_account = account;
    this->m_id = id;
}

