#ifndef Login_H
#define Login_H

#include <QWidget>
#include <QCloseEvent>

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

signals:
//    void signalLoginSuccess(UserInfo *info);
    void signalConnectServer(QString id, QString pswd);
    void signalCloseProject(void);
    void signalRegisterWidget();

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

protected:
    void closeEvent(QCloseEvent *ev);

private slots:
    void on_pb_enter_clicked();
    void on_pb_cancle_clicked();

    void on_pb_register_clicked();

private:
    Ui::Login *ui;
};

#endif // Login_H
