#ifndef USERINFO_H
#define USERINFO_H

#include <QString>
#include <QList>
#include <QMetaType>

#include "registerinfo.h"
#include "ipaddrinfo.h"

class UserInfo: public RegisterInfo, public IpAddrInfo
{
public:
    UserInfo();

    UserInfo(const QString &uid, const QString &rid,
             const QString &selfsign, const QString &ipid);
    ~UserInfo();

    void updataUserinfo(UserInfo *info);
    void updataUserinfo(const QString &uid, const QString &rid,
                        const QString &selfsign, const QString &ipid);

    void clearUserInfo(void);

    virtual void printInfos(void) const;
    virtual QString packageinfos(void);

    const QString &getUID(void) const;
    void setID(const QString &uid);

    const QString &getRID(void) const;
    void setRID(const QString &rid);

    const QString &getSelfSign(void) const;
    void setSelfSign(const QString &selfsign);

    const QString &getIpID(void) const;
    void setIpID(const QString &ipid);

private:
    QString m_UID;
    QString m_RID;
    QString m_SelfSign;
    QString m_IpID;
};

Q_DECLARE_METATYPE(UserInfo)
typedef QList<UserInfo> List_UserInfo;

#endif // USERINFO_H
