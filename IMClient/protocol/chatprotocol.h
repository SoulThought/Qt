#ifndef CHATPROTOCOL_H
#define CHATPROTOCOL_H

#include "abstractprotocol.h"

class ChatProtocol : public AbstractProtocol
{
public:
    ChatProtocol();
    ~ChatProtocol();

    void clearProtocolData();
    void displayProtocol(void) const;
    QByteArray packetProtocol() const;
    void unpacketProtocol(QDataStream &in);

    quint8 m_dataType;
    QByteArray m_dataCont;
};

typedef QQueue<ChatProtocol> QueueChatProtocol;
typedef QQueue<ChatProtocol> QueueGroupChatProtocol;

#endif // CHATPROTOCOL_H
