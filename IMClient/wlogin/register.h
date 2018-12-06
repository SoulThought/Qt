#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>
#include <QCloseEvent>

namespace Ui {
class Register;
}

class Register : public QWidget
{
    Q_OBJECT

signals:
    void signalCloseProject(void);
    void signalConnectServerReg(QString name, QString pswd);

public:
    explicit Register(QWidget *parent = 0);
    void Ridshow(QString id);
    ~Register();

protected:
    void closeEvent(QCloseEvent *ev);
public slots:
    void slotRegisterWidget();

private slots:
    void on_pb_ok_clicked();

    void on_pb_close_clicked();

private:
    Ui::Register *ui;
};

#endif // REGISTER_H
