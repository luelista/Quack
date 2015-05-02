#ifndef CONTACT_H
#define CONTACT_H

#include <QObject>

class Contact : public QObject
{
    Q_OBJECT
public:
    explicit Contact(QObject *parent = 0);

    QString name;
    QString id;

signals:

public slots:
};

#endif // CONTACT_H
