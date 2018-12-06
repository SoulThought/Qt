#include "errorprotocol.h"

#include <QDebug>
#include <QDataStream>

#include "connectserver.h"

ErrorProtocol::ErrorProtocol(quint32 recvUser,
                             quint32 sendUser,
                             quint8 errorType,
                             quint8 errorCondition )
{
    m_recvUser = recvUser;
    m_sendUser = sendUser;
    m_errorType = errorType;
    m_errorCondition = errorCondition;
}

ErrorProtocol::~ErrorProtocol()
{

}

void ErrorProtocol::updateErrorProtocol(
        quint32 recvUser, quint32 sendUser,
        quint8 errorType, quint8 errorCondition )
{
    m_recvUser = recvUser;
    m_sendUser = sendUser;
    m_errorType = errorType;
    m_errorCondition = errorCondition;
}

void ErrorProtocol::clearProtocolData()
{
    m_recvUser = USER_NONE;
    m_sendUser = USER_NONE;
    m_errorType = ErrorType_None;
    m_errorCondition = ErrorNone_CorrectBack;
}

void ErrorProtocol::displayProtocol(void) const
{
    qDebug() << "ErrorProtocol::displayProtocol";
    qDebug() << "RecvUser: "            << m_recvUser;
    qDebug() << "SendUser: "            << m_sendUser;
    qDebug() << "ErrorType: "           << m_errorType;
    qDebug() << "ErrorCondition: "      << m_errorCondition;
    qDebug() << "===============================";
}

QByteArray ErrorProtocol::packetProtocol() const
{
    QByteArray buffer;
    buffer.clear();
    QDataStream out(&buffer, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);

    out << m_recvUser;
    out << m_sendUser;
    out << m_errorType;
    out << m_errorCondition;

    return buffer;
}
void ErrorProtocol::unpacketProtocol(QDataStream &in)
{
    qDebug() << "ErrorProtocol::unpacketProtocol";
    in >> m_recvUser;
    in >> m_sendUser;
    in >> m_errorType;
    in >> m_errorCondition;

    ConnectServer::g_queueErrorProtocol.enqueue(*this);
}

