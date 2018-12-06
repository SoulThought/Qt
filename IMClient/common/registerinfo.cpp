#include "registerinfo.h"
#include <QDebug>

RegisterInfo::RegisterInfo()
{
    clearRegisterInfo();
}

RegisterInfo::RegisterInfo(
        const QString &id, const QString &name,
        const QString &pswd, const QString &time)
{
    updataRegisterinfo(id, name, pswd, time);
}

RegisterInfo::~RegisterInfo()
{
}

void RegisterInfo::updataRegisterinfo(RegisterInfo *info)
{
    m_RID = info->getID();
    m_RName = info->getName();
    m_Password = info->getPassword();
    m_Time = info->getTime();
}

void RegisterInfo::updataRegisterinfo(const QString &id, const QString &name,
                    const QString &pswd, const QString &time)
{
    m_RID = id;
    m_RName = name;
    m_Password = pswd;
    m_Time = time;
}

void RegisterInfo::clearRegisterInfo(void)
{
    m_RID.clear();
    m_RName.clear();
    m_Password.clear();
    m_Time.clear();
}

void RegisterInfo::printInfos(void) const
{
    qDebug() << "RegisterInfo-----------------------------------";
    qDebug() << "ID: " << getID();
    qDebug() << "Name: " << getName();
    qDebug() << "Password: " << getPassword();
    qDebug() << "Time: " << getTime();
    qDebug() << "RegisterInfo===================================";
}
QString RegisterInfo::packageinfos(void)
{
    QString data;
    data.clear();

    data.append(getID());
    data.append("|");
    data.append(getName());
    data.append("|");
    data.append(getPassword());
    data.append("|");
    data.append(getTime());

    return data;
}

const QString &RegisterInfo::getID(void) const
{
    return m_RID;
}
void RegisterInfo::setID(const QString &id)
{
    m_RID = id;
}

const QString &RegisterInfo::getName(void) const
{
    return m_RName;
}
void RegisterInfo::setName(const QString &name)
{
    m_RName = name;
}

const QString &RegisterInfo::getPassword(void) const
{
    return m_Password;
}
void RegisterInfo::setPassword(const QString &pswd)
{
    m_Password = pswd;
}

const QString &RegisterInfo::getTime(void) const
{
    return m_Time;
}
void RegisterInfo::setTime(const QString &time)
{
    m_Time = time;
}

