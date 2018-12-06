#include "IpAddrInfo.h"

#include <QDebug>

IpAddrInfo::IpAddrInfo()
{
    clearIpAddrInfo();
}

IpAddrInfo::IpAddrInfo(const QString &ipid,
           const QString &ipAddr, const QString &port)
{
    updataIpAddrInfo(ipid, ipAddr, port);
}

IpAddrInfo::~IpAddrInfo()
{

}

void IpAddrInfo::updataIpAddrInfo(IpAddrInfo *info)
{
    m_IpID = info->getIpID();
    m_IpAddr = info->getIpAddr();
    m_port = info->getPort();
}

void IpAddrInfo::updataIpAddrInfo(const QString &ipid,
                      const QString &ipAddr, const QString &port)
{
    m_IpID = ipid;
    m_IpAddr = ipAddr;
    m_port = port;
}

void IpAddrInfo::clearIpAddrInfo(void)
{
    m_IpID.clear();
    m_IpAddr.clear();
    m_port.clear();
}

void IpAddrInfo::printInfos(void) const
{
    qDebug() << "IpAddrInfo-----------------------------------";
    qDebug() << "IpID: " << getIpID();
    qDebug() << "IpAddr: " << getIpAddr();
    qDebug() << "Port: " << getPort();
    qDebug() << "IpAddrInfo===================================";
}
QString IpAddrInfo::packageinfos(void)
{
    QString data;
    data.clear();

    data.append(getIpID());
    data.append("|");
    data.append(getIpAddr());
    data.append("|");
    data.append(getPort());

    return data;
}

const QString &IpAddrInfo::getIpID(void) const
{
    return m_IpID;
}
void IpAddrInfo::setIpID(const QString &ipid)
{
    m_IpID = ipid;
}

const QString &IpAddrInfo::getIpAddr(void) const
{
    return m_IpAddr;
}
void IpAddrInfo::setIpAddr(const QString &ipAddr)
{
    m_IpAddr = ipAddr;
}

const QString &IpAddrInfo::getPort(void) const
{
    return m_port;
}
void IpAddrInfo::setPort(const QString &port)
{
    m_port = port;
}
