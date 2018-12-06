#include "friendlist.h"
#include "ui_friendlist.h"
#include <QDebug>

FriendList::FriendList(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FriendList)
{
    ui->setupUi(this);
}

FriendList::~FriendList()
{
    delete ui;
}

void FriendList::initUserInfo(UserInfo info)
{
    m_info = info;
    ui->pb_name->setText(info.getName());
    m_info.printInfos();
}


void FriendList::on_pb_name_clicked()
{
    emit signalClickUserInfo(m_info);
}

void FriendList::closeEvent(QCloseEvent *ev)
{
    qDebug() << "FriendList::closeEvent";
    emit signalCloseProject();
    ev->accept();
}
