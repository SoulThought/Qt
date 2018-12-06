#ifndef ABSTRACTPROTOCOL_H
#define ABSTRACTPROTOCOL_H

#include <QString>
#include <QByteArray>

#define USER_NONE 0
#define MSG_ID_INIT 0
#define MSG_NONE_CMD 0


/*数据类型定义*/
enum DATA_TYPE{
    DataType_None = 0x30,
    DataType_Text,
    DataType_Image,
    DataType_Audio,
    DataType_Video
};

class AbstractProtocol
{
public:
    AbstractProtocol(){}
    virtual ~AbstractProtocol(){}

    virtual void clearProtocolData() = 0;
    virtual void displayProtocol() const = 0;
    virtual QByteArray packetProtocol() const = 0;
    virtual void unpacketProtocol(QDataStream &in) = 0;

    quint32 m_recvUser;
    quint32 m_sendUser;
};

#endif // ABSTRACTPROTOCOL_H
