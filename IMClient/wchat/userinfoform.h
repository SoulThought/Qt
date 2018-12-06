#ifndef USERINFOFORM_H
#define USERINFOFORM_H

#include <QWidget>

#include "common.h"

namespace Ui {
class UserInfoForm;
}

class UserInfoForm : public QWidget
{
    Q_OBJECT

signals:
    void signalCloseProject(void);

public:
    explicit UserInfoForm(QWidget *parent = 0);
    ~UserInfoForm();

    void updateUserInfoToForm(UserInfo &info);

private:
    Ui::UserInfoForm *ui;
};

#endif // USERINFOFORM_H
