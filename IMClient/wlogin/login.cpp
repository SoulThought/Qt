#include "login.h"
#include "ui_login.h"

#include <QDebug>
#include <QMessageBox>

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}


void Login::on_pb_enter_clicked()
{
    emit signalConnectServer(ui->le_id->text(), ui->le_pswd->text());
}

void Login::on_pb_cancle_clicked()
{
    this->close();
}

void Login::closeEvent(QCloseEvent *ev)
{
    emit signalCloseProject();
    ev->accept();
}

void Login::on_pb_register_clicked()
{
    emit signalRegisterWidget();
}
