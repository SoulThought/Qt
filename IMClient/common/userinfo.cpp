#include "userinfo.h"

#include <QDebug>

UserInfo::UserInfo()
{
    clearUserInfo();
}

UserInfo::UserInfo(const QString &uid, const QString &rid,
            const QString &selfsign, const QString &ipid)
{
    updataUserinfo(uid, rid, selfsign, ipid);
}

UserInfo::~UserInfo()
{

}

void UserInfo::updataUserinfo(UserInfo *info)
{
    updataIpAddrInfo(info->getIpID(),info->getIpAddr(),info->getPort());
    updataRegisterinfo(info->getRID(),info->getName(), info->getPassword(),
                       info->getTime());
    m_UID = info->getUID();
    m_RID = info->getRID();
    m_SelfSign = info->getSelfSign();
}

void UserInfo::updataUserinfo(const QString &uid, const QString &rid,
                    const QString &selfsign, const QString &ipid)
{
    m_UID = uid;
    m_RID = rid;
    m_SelfSign = selfsign;
    m_IpID = ipid;
}

void UserInfo::clearUserInfo(void)
{
    m_UID.clear();
    m_RID.clear();
    m_SelfSign.clear();
}

void UserInfo::printInfos(void) const
{
    qDebug() << "IpAddrInfo-----------------------------------";
    qDebug() << "IpID: " << getIpID();
    qDebug() << "IpAddr: " << getIpAddr();
    qDebug() << "Port: " << getPort();
    qDebug() << "RegisterInfo-----------------------------------";
    qDebug() << "ID: " << getRID();
    qDebug() << "Name: " << getName();
    qDebug() << "Password: " << getPassword();
    qDebug() << "Time: " << getTime();
    qDebug() << "UserInfo-----------------------------------";
    qDebug() << "UID: " << getUID();
    qDebug() << "SelfSign: " << getSelfSign();
    qDebug() << "RegisterInfo===================================";
}
QString UserInfo::packageinfos(void)
{
    QString data;
    data.clear();

    data.append(getRID());
    data.append("|");
    data.append(getName());
    data.append("|");
    data.append(getPassword());
    data.append("|");
    data.append(getTime());
    data.append("|");

    data.append(getIpID());
    data.append("|");
    data.append(getIpAddr());
    data.append("|");
    data.append(getPort());
    data.append("|");

    data.append(getUID());
    data.append("|");
    data.append(getRID());
    data.append("|");
    data.append(getSelfSign());
    data.append("|");
    data.append(getIpID());

    return data;
}

const QString &UserInfo::getUID(void) const
{
    return m_UID;
}
void UserInfo::setID(const QString &uid)
{
    m_UID = uid;
}

const QString &UserInfo::getRID(void) const
{
    return m_RID;
}
void UserInfo::setRID(const QString &rid)
{
    m_RID = rid;
}

const QString &UserInfo::getSelfSign(void) const
{
    return m_SelfSign;
}
void UserInfo::setSelfSign(const QString &selfsign)
{
    m_SelfSign = selfsign;
}

const QString &UserInfo::getIpID(void) const
{
    return m_IpID;
}
void UserInfo::setIpID(const QString &ipid)
{
    m_IpID = ipid;
}

