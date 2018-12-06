#ifndef NORMALPROTOCOL_H
#define NORMALPROTOCOL_H

#include "abstractprotocol.h"
#include <QQueue>
#include <QVariant>

/*用户操作类型*/
enum USER_OPER{
    OperType_None = 0x30,
    OperType_Login,
    OperType_User,
    OperType_Friend,
    OperType_Crowd,
    OperType_Mood
};

/*操作命令定义*/
enum CMD_LOGIN{
    CmdLogin_LoginAsk = 0x30,
    CmdLogin_ExitAsk,
    CmdLogin_RegisterAsk
};

enum CMD_USER{
    CmdUser_AskUserInfo = 0x30,
    CmdUser_Update,
    CmdUser_Delete
};

enum CMD_FRIEND{
    CmdFriend_AskFrindList = 0x30,
    CmdFriend_Find,
    CmdFriend_Add,
    CmdFriend_Del,
    CmdFriend_Remark,
    CmdFriend_AddGroup,
    CmdFriend_ModifyGroup
};

enum CMD_CROWD{
    CmdCrowd_Watch = 0x30,
    CmdCrowd_Update,
    CmdCrowd_Del,
    CmdCrowd_Add,
    CmdCrowd_AddMember,
    CmdCrowd_DelMember
};

enum CMD_MOOD{
    CmdMood_BrowseNewest = 0x30,
    CmdMood_Myself,
    CmdMood_Friendself,
    CmdMood_AddMood,
    CmdMood_DelMood,
    CmdMood_MoodFavour,
    CmdMood_MoodNotify,
    CmdMood_MoodReview
};


class NormalProtocol: public AbstractProtocol
{
public:
    NormalProtocol(quint32 recvUser = USER_NONE,
                   quint32 sendUser = USER_NONE,
                   quint8 operType = OperType_None,
                   quint8 operCmd = MSG_NONE_CMD,
                   quint8 dataType = DataType_None,
                   QByteArray dataCont = QByteArray());
    ~NormalProtocol();

    void updateNormalProtocol(quint32 recvUser = USER_NONE,
                   quint32 sendUser = USER_NONE,
                   quint8 operType = OperType_None,
                   quint8 operCmd = MSG_NONE_CMD,
                   quint8 dataType = DataType_None,
                   QByteArray dataCont = QByteArray());

    void clearProtocolData();
    void displayProtocol(void) const;
    QByteArray packetProtocol() const;
    void unpacketProtocol(QDataStream &in);

    /*normal protocol detail*/
    quint8 m_operType;
    quint8 m_operCmd;
    quint8 m_dataType;
    QByteArray m_dataCont;
};

typedef QQueue<NormalProtocol> QueueNormalProtocol;

#endif // NORMALPROTOCOL_H
