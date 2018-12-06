#ifndef REGISTERINFO_H
#define REGISTERINFO_H

#include <QString>
#include <QList>

class RegisterInfo
{
public:
    RegisterInfo();

    RegisterInfo(
            const QString &id, const QString &name,
            const QString &pswd, const QString &time);
    ~RegisterInfo();

    void updataRegisterinfo(RegisterInfo *info);
    void updataRegisterinfo(const QString &id, const QString &name,
                        const QString &pswd, const QString &time);

    void clearRegisterInfo(void);

    virtual void printInfos(void) const;
    virtual QString packageinfos(void);

    const QString &getID(void) const;
    void setID(const QString &id);

    const QString &getName(void) const;
    void setName(const QString &name);

    const QString &getPassword(void) const;
    void setPassword(const QString &pswd);

    const QString &getTime(void) const;
    void setTime(const QString &time);

private:
    QString m_RID;
    QString m_RName;
    QString m_Password;
    QString m_Time;
};

typedef QList<RegisterInfo> List_RegisterInfo;

#endif // REGISTERINFO_H
