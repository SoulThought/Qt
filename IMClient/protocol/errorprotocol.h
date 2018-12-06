#ifndef ERRORPROTOCOL_H
#define ERRORPROTOCOL_H

#include "abstractprotocol.h"
#include <QQueue>

enum ERROR_TYPE{
    ErrorType_None = 0x30,
    ErrorType_Data,
    ErrorType_Auth,
    ErrorType_Serv,
};

enum ERROR_NONE{
    ErrorNone_CorrectBack = 0x30,
    ErrorNone_HeartTest,
    ErrorNone_HeartBack
};

enum ERROR_DATA{
    ErrorData_LoginAsk = 0x30,
    ErrorData_ExitAsk,
    ErrorData_RegisterAsk,
    ErrorData_AskUserInfo,
    ErrorData_InfoUpdate,
    ErrorData_HeadImgModify
};

enum ERROR_SERV{
    ErrorServ_ServiceUnavailable = 0x30,
    ErrorServ_RemoteServerNotFound,
    ErrorServ_RemoteServerTimeout,
    ErrorServ_UnexpectedRequest,
    ErrorServ_BadRequest,
    ErrorServ_InternalError
};

enum ERROR_AUTH{
    ErrorAuth_PaymentRequired = 0x30,
    ErrorAuth_RegistrationRequired,
    ErrorAuth_SubscriptionRequired,
    ErrorAuth_NotAuthorized
};

class ErrorProtocol : public AbstractProtocol
{
public:
    ErrorProtocol(quint32 recvUser = USER_NONE,
                  quint32 sendUser = USER_NONE,
                  quint8 errorType = ErrorType_None,
                  quint8 errorCondition = ErrorNone_CorrectBack);
    ~ErrorProtocol();

    void updateErrorProtocol(quint32 recvUser = USER_NONE,
                  quint32 sendUser = USER_NONE,
                  quint8 errorType = ErrorType_None,
                  quint8 errorCondition = ErrorNone_CorrectBack);

    void clearProtocolData();
    void displayProtocol(void) const;
    QByteArray packetProtocol() const;
    void unpacketProtocol(QDataStream &in);

    /*error protocol detail*/
    quint8 m_errorType;
    quint8 m_errorCondition;
};

typedef QQueue<ErrorProtocol> QueueErrorProtocol;

#endif // ERRORPROTOCOL_H
