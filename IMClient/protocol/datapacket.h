#ifndef DATAPACKET_H
#define DATAPACKET_H

#include <QByteArray>
#include <QTcpSocket>

#define PACKET_SIZE_INIT 0
#define PROTOCOL_PTR_INIT NULL

enum PACKET_TYPE{
    PacketType_Error       = 'E',
    PacketType_Normal      = 'N',
    PacketType_Chat        = 'C',
    PacketType_GroupChat   = 'G',
    PacketType_HeadLine    = 'H',
};

class AbstractProtocol;

class DataPacket
{
public:
    DataPacket();
    ~DataPacket();

    QByteArray packetData(void);
    void unpacketData(QTcpSocket *socket);

    void clearDataPacket(void);
    void updatePacketData(quint8 packetType, AbstractProtocol *protocol);
    quint8 getPacketType(void) const;
    quint32 getPacketSize(void) const;
    AbstractProtocol *getProtocol(void) const;

private:
    quint8 m_packetType;
    quint16 m_packetSize;
    AbstractProtocol *m_protocol;
};

#endif // DATAPACKET_H
