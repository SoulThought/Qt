#include "personinfo.h"

#include <QDebug>

PersonInfo::PersonInfo()
{
    clearPersonInfo();
}

PersonInfo::PersonInfo(const QString &id, const QString &name,
                       const QString &sex, const QString &birth)
{
    updataPersoninfo(id, name, sex, birth);
}

PersonInfo::~PersonInfo()
{

}

void PersonInfo::updataPersoninfo(PersonInfo *info)
{
    m_PID = info->getID();
    m_PName = info->getName();
    m_PSex = info->getSex();
    m_PBirth = info->getBirth();
}

void PersonInfo::updataPersoninfo(const QString &id, const QString &name,
                    const QString &sex, const QString &birth)
{
    m_PID = id;
    m_PName = name;
    m_PSex = sex;
    m_PBirth = birth;
}

void PersonInfo::clearPersonInfo(void)
{
    m_PID.clear();
    m_PName.clear();
    m_PSex.clear();
    m_PBirth.clear();
}

void PersonInfo::printInfos(void) const
{
    qDebug() << "PersonInfo-----------------------------------";
    qDebug() << "ID: " << getID();
    qDebug() << "Name: " << getName();
    qDebug() << "Sex: " << getSex();
    qDebug() << "Birthday: " << getBirth();
    qDebug() << "PersonInfo===================================";
}

QString *PersonInfo::packageinfos()
{
    QString *data = new QString();
    data->clear();

    data->append(getID());
    data->append("|");
    data->append(getName());
    data->append("|");
    data->append(getSex());
    data->append("|");
    data->append(getBirth());

    return data;
}

const QString &PersonInfo::getID(void) const{
    return m_PID;
}
void PersonInfo::setID(const QString &id){
    m_PID = id;
}

const QString &PersonInfo::getName(void) const{
    return m_PName;
}
void PersonInfo::setName(const QString &name){
    m_PName = name;
}

const QString &PersonInfo::getSex(void) const{
    return m_PSex;
}
void PersonInfo::setSex(const QString &sex){
    m_PSex = sex;
}

const QString &PersonInfo::getBirth(void) const{
    return m_PBirth;
}
void PersonInfo::setBirth(const QString &birth){
    m_PBirth = birth;
}
