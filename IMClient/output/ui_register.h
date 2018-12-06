/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QPushButton *pb_ok;
    QPushButton *pb_close;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *le_name;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *le_password1;
    QHBoxLayout *horizontalLayout;
    QLineEdit *le_password2;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(400, 300);
        Register->setLayoutDirection(Qt::LeftToRight);
        pb_ok = new QPushButton(Register);
        pb_ok->setObjectName(QStringLiteral("pb_ok"));
        pb_ok->setGeometry(QRect(200, 210, 71, 31));
        pb_close = new QPushButton(Register);
        pb_close->setObjectName(QStringLiteral("pb_close"));
        pb_close->setGeometry(QRect(290, 210, 71, 31));
        layoutWidget = new QWidget(Register);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 50, 231, 121));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        le_name = new QLineEdit(layoutWidget);
        le_name->setObjectName(QStringLiteral("le_name"));

        horizontalLayout_3->addWidget(le_name);

        horizontalLayout_3->setStretch(0, 5);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        le_password1 = new QLineEdit(layoutWidget);
        le_password1->setObjectName(QStringLiteral("le_password1"));

        horizontalLayout_2->addWidget(le_password1);

        horizontalLayout_2->setStretch(0, 5);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        le_password2 = new QLineEdit(layoutWidget);
        le_password2->setObjectName(QStringLiteral("le_password2"));

        horizontalLayout->addWidget(le_password2);

        horizontalLayout->setStretch(0, 5);

        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Form", 0));
        pb_ok->setText(QApplication::translate("Register", "OK", 0));
        pb_close->setText(QApplication::translate("Register", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
