#ifndef IPADDRINFO_H
#define IPADDRINFO_H

#include <QString>
#include <QList>

class IpAddrInfo
{
public:
    IpAddrInfo();
    IpAddrInfo(const QString &ipid,
               const QString &ipAddr, const QString &port);
    ~IpAddrInfo();

    void updataIpAddrInfo(IpAddrInfo *info);
    void updataIpAddrInfo(const QString &ipid,
                          const QString &ipAddr, const QString &port);

    void clearIpAddrInfo(void);

    virtual void printInfos(void) const;
    virtual QString packageinfos(void);

    const QString &getIpID(void) const;
    void setIpID(const QString &ipid);

    const QString &getIpAddr(void) const;
    void setIpAddr(const QString &ipAddr);

    const QString &getPort(void) const;
    void setPort(const QString &port);

private:
    QString m_IpID;
    QString m_IpAddr;
    QString m_port;
};

typedef QList<IpAddrInfo> List_IpAddrInfo;
#endif // IPADDRINFO_H
