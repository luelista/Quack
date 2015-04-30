#ifndef MESSAGE_H
#define MESSAGE_H

#include <QObject>

class Message : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString Sender MEMBER Sender)
    Q_PROPERTY(QString Body MEMBER Body)
    Q_PROPERTY(QString Id MEMBER Id)
    Q_PROPERTY(QString Editdt MEMBER Editdt)
    Q_PROPERTY(QString SenderJid MEMBER SenderJid)
    Q_PROPERTY(QString Date MEMBER Date)

public:
    explicit Message(QObject *parent = 0);

    QString Sender, Body, Id, Editdt, SenderJid, Date;

signals:

public slots:
};

#endif // MESSAGE_H
