#include "userinfoform.h"
#include "ui_userinfoform.h"

UserInfoForm::UserInfoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserInfoForm)
{
    ui->setupUi(this);
}

UserInfoForm::~UserInfoForm()
{
    delete ui;
}

void UserInfoForm::updateUserInfoToForm(UserInfo &info)
{
    ui->le_name->setText(info.getName());
    ui->le_uid->setText(info.getUID());
}

