#ifndef CONNECTSERVER_H
#define CONNECTSERVER_H

#include <QThread>

#include "datapacket.h"
#include "normalprotocol.h"
#include "errorprotocol.h"
#include "chatprotocol.h"

#include "execnormalprotocol.h"
#include "execerrorprotocol.h"

class QTcpSocket;

class ConnectServer : public QThread
{
    Q_OBJECT

signals:
    void signalUserLoginSuccess(UserInfo info);
    void signalRegisterSuccess(QString id);

public slots:
    void slotReadyRead();
    void slotConnectServer(QString id, QString pswd);
    void slotConnectServerReg(QString name, QString pswd);

public:
    explicit ConnectServer(QObject *parent = 0);
    ~ConnectServer();

    static QueueNormalProtocol g_queueNormalProtocol;
    static QueueErrorProtocol g_queueErrorProtocol;
    static QueueChatProtocol g_queueChatProtocol;
    static QueueGroupChatProtocol g_queueGroupChatProtocol;

    void closeThreads(void);

protected:
    void run();

private:
    QTcpSocket *m_socket;

    bool m_isExitThread;
    DataPacket m_recvDataPacket;
    DataPacket m_sendDataPacket;

    ErrorProtocol m_errorProtocol;
    NormalProtocol m_normalProtocol;

    ExecErrorProtocol *m_execErrorProtocol;
    ExecNormalProtocol *m_execNormalProtocol;
};

#endif // CONNECTSERVER_H
