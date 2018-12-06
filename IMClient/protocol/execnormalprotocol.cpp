#include "execnormalprotocol.h"

#include <QDebug>
#include <QStringList>
#include <QMessageBox>

#include "common.h"

ExecNormalProtocol::ExecNormalProtocol(QObject *parent)
    :QObject(parent)
{
}

ExecNormalProtocol::~ExecNormalProtocol()
{

}

void ExecNormalProtocol::execOperateCmd(const NormalProtocol &protocol)
{
    m_protocol = protocol;
    qDebug() << "void ExecNormalProtocol::execUserOperate(void)";
    switch (m_protocol.m_operType) {
    case OperType_None: break;
    case OperType_Login: execOperateCmdLogin(); break;
    case OperType_User: execOperateCmdUser(); break;
    case OperType_Friend: execOperateCmdFriend(); break;
    case OperType_Crowd: execOperateCmdCrowd(); break;
    case OperType_Mood: execOperateCmdMood(); break;
    default: break;
    }
}

void ExecNormalProtocol::execOperateCmdLogin(void)
{
    qDebug() << "void ExecNormalProtocol::execOperateCmdLogin(void)";
    switch (m_protocol.m_operCmd) {
    case CmdLogin_LoginAsk: execOperateCmdLoginAsk(); break;
    case CmdLogin_ExitAsk: execOperateCmdExitAsk(); break;
    case CmdLogin_RegisterAsk: execOperateCmdRegisterAsk(); break;
    default: break;
    }
}

void ExecNormalProtocol::execOperateCmdUser(void)
{

}

void ExecNormalProtocol::execOperateCmdFriend(void)
{

}

void ExecNormalProtocol::execOperateCmdCrowd(void)
{

}

void ExecNormalProtocol::execOperateCmdChat(void)
{

}

void ExecNormalProtocol::execOperateCmdMood(void)
{

}

void ExecNormalProtocol::execOperateCmdLoginAsk(void)
{
    QStringList list = QString::fromLatin1(m_protocol.m_dataCont).split("|");
    qDebug() << list;

    UserInfo info;
    info.updataRegisterinfo(list[0], list[1], list[2], list[3]);
    info.updataIpAddrInfo(list[4], list[5], list[6]);
    info.updataUserinfo(list[7], list[8], list[9], list[10]);
    emit signalUserLoginSuccess(info);
}

void ExecNormalProtocol::execOperateCmdExitAsk(void)
{

}

void ExecNormalProtocol::execOperateCmdRegisterAsk(void)
{
    qDebug() << "接收到";
    QStringList list = QString::fromLatin1(m_protocol.m_dataCont).split("|");
    qDebug() << list;
    emit signalRegisterSuccess(list[0]);
    qDebug() << "You ID:" << list[0];
}
