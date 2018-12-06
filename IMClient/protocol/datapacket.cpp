#include "datapacket.h"

#include <QDataStream>
#include <QByteArray>

#include "abstractprotocol.h"
#include "normalprotocol.h"
#include "errorprotocol.h"
#include "chatprotocol.h"

DataPacket::DataPacket()
{
    m_packetType = PacketType_Normal;
    m_packetSize = PACKET_SIZE_INIT;
    m_protocol = PROTOCOL_PTR_INIT;
}

DataPacket::~DataPacket()
{
    if(m_protocol != PROTOCOL_PTR_INIT)
    {
        delete m_protocol;
        m_protocol = PROTOCOL_PTR_INIT;
    }
}

QByteArray DataPacket::packetData(void)
{
    QByteArray buffer;
    QDataStream out(&buffer, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);

    out << (quint16)0;
    out << m_packetType;
    out << m_protocol->packetProtocol();

    m_packetSize = (quint16)(buffer.size() - sizeof(quint16));
    out.device()->seek(0);
    out << m_packetSize;

    return buffer;
}

void DataPacket::unpacketData(QTcpSocket *socket)
{
    qDebug() << "DataPacket::unpacketData(QTcpSocket *socket)";
    QDataStream in(socket);
    in.setVersion(QDataStream::Qt_4_6);
    if(m_packetSize == 0)
    {
        if(socket->bytesAvailable()<sizeof(quint16))
            return;

        in >> m_packetSize;
    }
    if(socket->bytesAvailable() < m_packetSize)
        return;

    in >> m_packetType;

    QByteArray  unpacketData;
    in >> unpacketData;
    qDebug() << m_packetType;
    qDebug() << "Recv: " << unpacketData.toHex();
    QDataStream unpacketDataStream(unpacketData);
    unpacketDataStream.setVersion(QDataStream::Qt_4_6);

    switch (m_packetType) {
    case PacketType_Error:
        m_protocol = new ErrorProtocol();
        m_protocol->unpacketProtocol(unpacketDataStream);
        break;
    case PacketType_Normal:
        m_protocol = new NormalProtocol();
        m_protocol->unpacketProtocol(unpacketDataStream);
//        m_protocol->displayProtocol();
        break;
    case PacketType_Chat: break;
    case PacketType_GroupChat: break;
    case PacketType_HeadLine: break;
    default:
        break;
    }
}

void DataPacket::clearDataPacket(void)
{
    m_packetType = PacketType_Normal;
    m_packetSize = PACKET_SIZE_INIT;
    m_protocol = PROTOCOL_PTR_INIT;
}

void DataPacket::updatePacketData(quint8 packetType,
                                  AbstractProtocol *protocol)
{
    m_packetType = packetType;
    m_protocol = protocol;
}

quint8 DataPacket::getPacketType(void) const
{
    return m_packetType;
}
quint32 DataPacket::getPacketSize(void) const
{
    return m_packetSize;
}
AbstractProtocol *DataPacket::getProtocol(void) const
{
    return m_protocol;
}

