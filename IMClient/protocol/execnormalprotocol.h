#ifndef EXECNORMALPROTOCOL_H
#define EXECNORMALPROTOCOL_H

#include <QObject>

#include "common.h"
#include "normalprotocol.h"

class ExecNormalProtocol: public QObject
{
    Q_OBJECT
signals:
    void signalUserLoginSuccess(UserInfo info);
    void signalRegisterSuccess(QString id);

public:
    ExecNormalProtocol(QObject *parent = 0);
    ~ExecNormalProtocol();

    void execOperateCmd(const NormalProtocol &protocol);

    void execOperateCmdLogin(void);
    void execOperateCmdUser(void);
    void execOperateCmdFriend(void);
    void execOperateCmdCrowd(void);
    void execOperateCmdChat(void);
    void execOperateCmdMood(void);

    void execOperateCmdLoginAsk(void);
    void execOperateCmdExitAsk(void);
    void execOperateCmdRegisterAsk(void);

private:
    NormalProtocol m_protocol;
};

#endif // EXECNORMALPROTOCOL_H
