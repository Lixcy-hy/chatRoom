#ifndef USERPOJO_H
#define USERPOJO_H

#include <QObject>

class userPojo : public QObject
{
    Q_OBJECT
public:
    explicit userPojo(QObject *parent = nullptr);

signals:

public slots:
};

#endif // USERPOJO_H