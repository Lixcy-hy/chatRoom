#ifndef CHATROOMCLIENT_H
#define CHATROOMCLIENT_H

#include <QWidget>

namespace Ui {
class chatRoomClient;
}

class chatRoomClient : public QWidget
{
    Q_OBJECT

public:
    explicit chatRoomClient(QWidget *parent = 0);
    ~chatRoomClient();

private:
    Ui::chatRoomClient *ui;
};

#endif // CHATROOMCLIENT_H
