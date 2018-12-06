/********************************************************************************
** Form generated from reading UI file 'userinfoform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINFOFORM_H
#define UI_USERINFOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserInfoForm
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLineEdit *le_ipAddr;
    QLabel *label_8;
    QLineEdit *le_netAge;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *le_sex;
    QLabel *label_5;
    QLineEdit *le_sign;
    QLineEdit *le_uid;
    QLineEdit *le_name;
    QLabel *label_4;
    QLabel *lb_icon;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_6;
    QLineEdit *le_birth;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pb_Edit;

    void setupUi(QWidget *UserInfoForm)
    {
        if (UserInfoForm->objectName().isEmpty())
            UserInfoForm->setObjectName(QStringLiteral("UserInfoForm"));
        UserInfoForm->resize(416, 300);
        widget = new QWidget(UserInfoForm);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 30, 371, 251));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        le_ipAddr = new QLineEdit(widget);
        le_ipAddr->setObjectName(QStringLiteral("le_ipAddr"));
        le_ipAddr->setEnabled(false);
        sizePolicy.setHeightForWidth(le_ipAddr->sizePolicy().hasHeightForWidth());
        le_ipAddr->setSizePolicy(sizePolicy);

        gridLayout->addWidget(le_ipAddr, 7, 1, 1, 2);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 7, 3, 1, 1);

        le_netAge = new QLineEdit(widget);
        le_netAge->setObjectName(QStringLiteral("le_netAge"));
        le_netAge->setEnabled(false);
        sizePolicy.setHeightForWidth(le_netAge->sizePolicy().hasHeightForWidth());
        le_netAge->setSizePolicy(sizePolicy);

        gridLayout->addWidget(le_netAge, 7, 4, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 4, 4, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 2, 4, 1, 1);

        le_sex = new QLineEdit(widget);
        le_sex->setObjectName(QStringLiteral("le_sex"));
        le_sex->setEnabled(false);
        sizePolicy.setHeightForWidth(le_sex->sizePolicy().hasHeightForWidth());
        le_sex->setSizePolicy(sizePolicy);

        gridLayout->addWidget(le_sex, 5, 1, 1, 2);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        le_sign = new QLineEdit(widget);
        le_sign->setObjectName(QStringLiteral("le_sign"));
        le_sign->setEnabled(false);
        sizePolicy.setHeightForWidth(le_sign->sizePolicy().hasHeightForWidth());
        le_sign->setSizePolicy(sizePolicy);

        gridLayout->addWidget(le_sign, 1, 2, 1, 3);

        le_uid = new QLineEdit(widget);
        le_uid->setObjectName(QStringLiteral("le_uid"));
        le_uid->setEnabled(false);
        sizePolicy.setHeightForWidth(le_uid->sizePolicy().hasHeightForWidth());
        le_uid->setSizePolicy(sizePolicy);

        gridLayout->addWidget(le_uid, 3, 1, 1, 2);

        le_name = new QLineEdit(widget);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setEnabled(false);
        sizePolicy.setHeightForWidth(le_name->sizePolicy().hasHeightForWidth());
        le_name->setSizePolicy(sizePolicy);

        gridLayout->addWidget(le_name, 3, 4, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 3, 1, 1);

        lb_icon = new QLabel(widget);
        lb_icon->setObjectName(QStringLiteral("lb_icon"));
        sizePolicy.setHeightForWidth(lb_icon->sizePolicy().hasHeightForWidth());
        lb_icon->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lb_icon, 0, 2, 1, 2);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 5, 3, 1, 1);

        le_birth = new QLineEdit(widget);
        le_birth->setObjectName(QStringLiteral("le_birth"));
        le_birth->setEnabled(false);
        sizePolicy.setHeightForWidth(le_birth->sizePolicy().hasHeightForWidth());
        le_birth->setSizePolicy(sizePolicy);

        gridLayout->addWidget(le_birth, 5, 4, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 6, 4, 1, 1);

        pb_Edit = new QPushButton(widget);
        pb_Edit->setObjectName(QStringLiteral("pb_Edit"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pb_Edit->sizePolicy().hasHeightForWidth());
        pb_Edit->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pb_Edit, 0, 4, 1, 1);


        retranslateUi(UserInfoForm);

        QMetaObject::connectSlotsByName(UserInfoForm);
    } // setupUi

    void retranslateUi(QWidget *UserInfoForm)
    {
        UserInfoForm->setWindowTitle(QApplication::translate("UserInfoForm", "Form", 0));
        label_7->setText(QApplication::translate("UserInfoForm", "IpAddr:", 0));
        label_8->setText(QApplication::translate("UserInfoForm", "Net Age:", 0));
        label_5->setText(QApplication::translate("UserInfoForm", "Sex:", 0));
        label_4->setText(QApplication::translate("UserInfoForm", "Name:", 0));
        lb_icon->setText(QApplication::translate("UserInfoForm", "icon", 0));
        label_2->setText(QApplication::translate("UserInfoForm", "Self Sign:", 0));
        label_3->setText(QApplication::translate("UserInfoForm", "UID:", 0));
        label_6->setText(QApplication::translate("UserInfoForm", "Birthday", 0));
        pb_Edit->setText(QApplication::translate("UserInfoForm", "Edit", 0));
    } // retranslateUi

};

namespace Ui {
    class UserInfoForm: public Ui_UserInfoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINFOFORM_H
