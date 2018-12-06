#include "register.h"
#include "ui_register.h"
#include <QMessageBox>
#include <QDebug>
Register::Register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    ui->le_name->setPlaceholderText("昵称");
    ui->le_password1->setPlaceholderText("密码");
    ui->le_password2->setPlaceholderText("再次输入密码");
}

Register::~Register()
{
    delete ui;
}

void Register::Ridshow(QString id)
{
    qDebug() << "aslkdjf";
    QMessageBox::information(NULL, QString("RegisterSuccess"),
                             QString("Your UID:%1").arg(id));
    this->close();
}

void Register::closeEvent(QCloseEvent *ev)
{
    emit signalCloseProject();
    ev->accept();
}

void Register::on_pb_ok_clicked()
{
    if(ui->le_password1->text() == ui->le_password2->text())
    {
        emit signalConnectServerReg(ui->le_name->text(), ui->le_password1->text());
    }else
    {
        QMessageBox::information(NULL, QString("title"),
                                QString("password error"));
    }
}

void Register::on_pb_close_clicked()
{
    this->close();
}

void Register::slotRegisterWidget()
{
    this->show();
}
