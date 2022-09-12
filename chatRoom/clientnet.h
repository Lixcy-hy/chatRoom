#ifndef CLIENTNET_H
#define CLIENTNET_H

#include <QObject>

class clientNet : public QObject
{
    Q_OBJECT
public:
    explicit clientNet(QObject *parent = nullptr);

signals:

public slots:
};

#endif // CLIENTNET_H