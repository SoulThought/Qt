#include "connectserver.h"

#include <QTcpSocket>
#include <QDebug>

#include "logiclayer.h"

QueueNormalProtocol ConnectServer::g_queueNormalProtocol;
QueueErrorProtocol ConnectServer::g_queueErrorProtocol;
QueueChatProtocol ConnectServer::g_queueChatProtocol;
QueueGroupChatProtocol ConnectServer::g_queueGroupChatProtocol;

ConnectServer::ConnectServer(QObject *parent) :
    QThread(parent)
{
    m_isExitThread = false;
    m_execErrorProtocol = new ExecErrorProtocol;
    m_execNormalProtocol = new ExecNormalProtocol;
    m_socket = new QTcpSocket(this);

    connect(m_socket, SIGNAL(readyRead()),
            this, SLOT(slotReadyRead()));

    connect(m_execNormalProtocol, SIGNAL(signalUserLoginSuccess(UserInfo)),
            this, SIGNAL(signalUserLoginSuccess(UserInfo)));
    connect(m_execNormalProtocol, SIGNAL(signalRegisterSuccess(QString)),
            this, SIGNAL(signalRegisterSuccess(QString)));

    m_socket->connectToHost("localhost", 55555);
}

ConnectServer::~ConnectServer()
{
    if(m_socket != NULL)
    {
        delete m_socket;
        m_socket = NULL;
    }
}

void ConnectServer::run()
{
    while(!m_isExitThread)
    {
        if(!g_queueNormalProtocol.isEmpty())
        {
            m_normalProtocol.clearProtocolData();
            m_normalProtocol = g_queueNormalProtocol.dequeue();
            m_normalProtocol.displayProtocol();
            m_execNormalProtocol->execOperateCmd(m_normalProtocol);
        }

        if(!g_queueErrorProtocol.isEmpty())
        {
            m_normalProtocol.clearProtocolData();
            m_normalProtocol = g_queueNormalProtocol.dequeue();
            m_normalProtocol.displayProtocol();
            m_execNormalProtocol->execOperateCmd(m_normalProtocol);
        }

        msleep(20);
    }
}

void ConnectServer::closeThreads(void)
{
    m_isExitThread = true;
    this->exit();
}

//void ConnectServer::slotConnectServer(QString msg, quint8 operCmd)
//{
//    //QString msg = id + "|" + pswd;
//    m_sendDataPacket.clearDataPacket();
//    NormalProtocol normalProtocol(USER_NONE, USER_NONE,
//                                  OperType_Login, operCmd,
//                                  DataType_Text, msg.toLatin1());
//    m_sendDataPacket.updatePacketData(PacketType_Normal,&normalProtocol);
//    QByteArray buffer = m_sendDataPacket.packetData();
//    qDebug() << "Send: " << buffer.toHex();
//    m_socket->write(buffer);
//}

void ConnectServer::slotConnectServer(QString id, QString pswd)
{
    QString msg = id + "|" + pswd;
    m_sendDataPacket.clearDataPacket();
    NormalProtocol normalProtocol(USER_NONE, USER_NONE,
                                  OperType_Login, CmdLogin_LoginAsk,
                                  DataType_Text, msg.toLatin1());
    m_sendDataPacket.updatePacketData(PacketType_Normal,&normalProtocol);
    QByteArray buffer = m_sendDataPacket.packetData();
    qDebug() << "Send: " << buffer.toHex();
    m_socket->write(buffer);
}

void ConnectServer::slotConnectServerReg(QString name, QString pswd)
{
    QString msg = name + "|" + pswd;
    m_sendDataPacket.clearDataPacket();
    NormalProtocol normalProtocol(USER_NONE, USER_NONE,
                                  OperType_Login, CmdLogin_RegisterAsk,
                                  DataType_Text, msg.toLatin1());
    m_sendDataPacket.updatePacketData(PacketType_Normal,&normalProtocol);
    QByteArray buffer = m_sendDataPacket.packetData();
    qDebug() << "Send: " << buffer.toHex();
    m_socket->write(buffer);
    qDebug() << "发送出去";
}

void ConnectServer::slotReadyRead()
{
    qDebug() << "ConnectServer::slotReadyRead";
    m_recvDataPacket.clearDataPacket();
    m_recvDataPacket.unpacketData(m_socket);
}

