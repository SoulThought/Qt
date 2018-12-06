/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label_3;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *le_id;
    QLabel *label_2;
    QLineEdit *le_pswd;
    QPushButton *pb_enter;
    QPushButton *pb_cancle;
    QPushButton *pb_register;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(400, 300);
        label_3 = new QLabel(Login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 50, 151, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(Login);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 120, 291, 111));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        le_id = new QLineEdit(layoutWidget);
        le_id->setObjectName(QStringLiteral("le_id"));
        sizePolicy.setHeightForWidth(le_id->sizePolicy().hasHeightForWidth());
        le_id->setSizePolicy(sizePolicy);

        gridLayout->addWidget(le_id, 0, 1, 1, 2);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        le_pswd = new QLineEdit(layoutWidget);
        le_pswd->setObjectName(QStringLiteral("le_pswd"));
        sizePolicy.setHeightForWidth(le_pswd->sizePolicy().hasHeightForWidth());
        le_pswd->setSizePolicy(sizePolicy);

        gridLayout->addWidget(le_pswd, 1, 1, 1, 2);

        pb_enter = new QPushButton(layoutWidget);
        pb_enter->setObjectName(QStringLiteral("pb_enter"));
        sizePolicy.setHeightForWidth(pb_enter->sizePolicy().hasHeightForWidth());
        pb_enter->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb_enter, 2, 1, 1, 1);

        pb_cancle = new QPushButton(layoutWidget);
        pb_cancle->setObjectName(QStringLiteral("pb_cancle"));
        sizePolicy.setHeightForWidth(pb_cancle->sizePolicy().hasHeightForWidth());
        pb_cancle->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb_cancle, 2, 2, 1, 1);

        pb_register = new QPushButton(layoutWidget);
        pb_register->setObjectName(QStringLiteral("pb_register"));
        sizePolicy.setHeightForWidth(pb_register->sizePolicy().hasHeightForWidth());
        pb_register->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb_register, 2, 0, 1, 1);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "IMClient", 0));
        label_3->setText(QApplication::translate("Login", "Chat in mind", 0));
        label->setText(QApplication::translate("Login", "User ID", 0));
        label_2->setText(QApplication::translate("Login", "PASSWORD:", 0));
        pb_enter->setText(QApplication::translate("Login", "ENTER", 0));
        pb_cancle->setText(QApplication::translate("Login", "CANCLE", 0));
        pb_register->setText(QApplication::translate("Login", "Register", 0));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
