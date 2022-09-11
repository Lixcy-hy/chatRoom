#include "chatroomclient.h"
#include "ui_chatroomclient.h"

chatRoomClient::chatRoomClient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chatRoomClient)
{
    ui->setupUi(this);
}

chatRoomClient::~chatRoomClient()
{
    delete ui;
}
