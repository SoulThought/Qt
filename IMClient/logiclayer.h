#ifndef LOGICLAYER_H
#define LOGICLAYER_H

#include <QObject>
#include <QTimer>

#include "connectserver.h"
#include "friendlist.h"
#include "userinfoform.h"

class Login;
class Register;

class LogicLayer : public QObject
{
    Q_OBJECT

public slots:
    void slotUserLoginSuccess(UserInfo info);
    void slotRegisterSuccess(QString id);
    void slotClickUserInfo(UserInfo info);
    void slotCloseProject(void);


public:
    explicit LogicLayer(QObject *parent = 0);
    ~LogicLayer();

    void showLoginW(void);

private:
    Login *m_login;
    Register *m_reg;
    ConnectServer *m_connectServer;

    FriendList *m_friendList;
    UserInfoForm *m_userInfoForm;
};

#endif // LOGICLAYER_H
