#ifndef FRIENDLIST_H
#define FRIENDLIST_H

#include <QWidget>

#include "common.h"
#include <QCloseEvent>

namespace Ui {
class FriendList;
}

class FriendList : public QWidget
{
    Q_OBJECT

signals:
    void signalClickUserInfo(UserInfo info);
    void signalCloseProject(void);

public:
    explicit FriendList(QWidget *parent = 0);
    ~FriendList();

    void initUserInfo(UserInfo info);

protected:
    void closeEvent(QCloseEvent *ev);

private slots:
    void on_pb_name_clicked();

private:
    Ui::FriendList *ui;

    UserInfo m_info;
};

#endif // FRIENDLIST_H
