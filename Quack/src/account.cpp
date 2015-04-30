#include "account.h"
#include "jabberaccount.h"

Account::Account(QObject *parent) : QObject(parent)
{
    this->m_rowId = 0;
}

Account* Account::make(QString proto) {
    if (proto == "jabber") {
        return new JabberAccount();
    } else {
        return NULL;
    }
}
