#include "normalprotocol.h"

#include <QDebug>
#include <QDataStream>
#include "execnormalprotocol.h"
#include "connectserver.h"

NormalProtocol::NormalProtocol(quint32 recvUser, quint32 sendUser,
               quint8 operType, quint8 operCmd,
               quint8 dataType, QByteArray dataCont)
{
    m_recvUser = recvUser;
    m_sendUser = sendUser;
    m_operType = operType;
    m_operCmd = operCmd;
    m_dataType = dataType;
    m_dataCont = dataCont;
}

NormalProtocol::~NormalProtocol()
{

}

void NormalProtocol::updateNormalProtocol(quint32 recvUser,
                                    quint32 sendUser, quint8 operType,
                                    quint8 operCmd, quint8 dataType,
                                    QByteArray dataCont)
{
    m_recvUser = recvUser;
    m_sendUser = sendUser;
    m_operType = operType;
    m_operCmd = operCmd;
    m_dataType = dataType;
    m_dataCont = dataCont;
}

void NormalProtocol::clearProtocolData()
{
    m_recvUser = USER_NONE;
    m_sendUser = USER_NONE;
    m_operType = OperType_None;
    m_operCmd = MSG_NONE_CMD;
    m_dataType = DataType_None;
    m_dataCont = QByteArray();
}

void NormalProtocol::displayProtocol(void) const
{
    qDebug() << "NormalProtocol::displayProtocol";
    qDebug() << "RecvUser: "    << m_recvUser;
    qDebug() << "SendUser: "    << m_sendUser;
    qDebug() << "OperType: "    << m_operType;
    qDebug() << "OperCmd: "     << m_operCmd;
    qDebug() << "DataType: "    << m_dataType;
    qDebug() << "DataCont: "    << m_dataCont;
    qDebug() << "===============================";
}
QByteArray NormalProtocol::packetProtocol() const
{
    QByteArray buffer;
    buffer.clear();
    QDataStream out(&buffer, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);

    out << m_recvUser;
    out << m_sendUser;
    out << m_operType;
    out << m_operCmd;
    out << m_dataType;
    out << m_dataCont;

    return buffer;
}

void NormalProtocol::unpacketProtocol(QDataStream &in)
{
    qDebug() << "NormalProtocol::unpacketProtocol";
    in >> m_recvUser;
    in >> m_sendUser;
    in >> m_operType;
    in >> m_operCmd;
    in >> m_dataType;
    in >> m_dataCont;

    ConnectServer::g_queueNormalProtocol.enqueue(*this);
}

