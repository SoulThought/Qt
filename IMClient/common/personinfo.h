#ifndef PERSONINFO_H
#define PERSONINFO_H

#include <QString>
#include <QList>

class PersonInfo
{
public:
    PersonInfo();
    PersonInfo(
            const QString &id, const QString &name,
            const QString &sex, const QString &birth);
    ~PersonInfo();

    void updataPersoninfo(PersonInfo *info);
    void updataPersoninfo(const QString &id, const QString &name,
                        const QString &sex, const QString &birth);

    void clearPersonInfo(void);

    virtual void printInfos(void) const;
    virtual QString *packageinfos(void);

    const QString &getID(void) const;
    void setID(const QString &id);

    const QString &getName(void) const;
    void setName(const QString &name);

    const QString &getSex(void) const;
    void setSex(const QString &sex);

    const QString &getBirth(void) const;
    void setBirth(const QString &birth);

private:
    QString m_PID;
    QString m_PName;
    QString m_PSex;
    QString m_PBirth;
};

typedef QList<PersonInfo> List_PersonInfo;

#endif // PERSONINFO_H
