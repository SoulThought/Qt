/********************************************************************************
** Form generated from reading UI file 'friendlist.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRIENDLIST_H
#define UI_FRIENDLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FriendList
{
public:
    QListWidget *listWidget;
    QPushButton *pb_name;
    QToolButton *tb_icon;
    QLineEdit *le_sign;

    void setupUi(QWidget *FriendList)
    {
        if (FriendList->objectName().isEmpty())
            FriendList->setObjectName(QStringLiteral("FriendList"));
        FriendList->resize(263, 462);
        listWidget = new QListWidget(FriendList);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 80, 241, 371));
        pb_name = new QPushButton(FriendList);
        pb_name->setObjectName(QStringLiteral("pb_name"));
        pb_name->setGeometry(QRect(100, 10, 151, 31));
        tb_icon = new QToolButton(FriendList);
        tb_icon->setObjectName(QStringLiteral("tb_icon"));
        tb_icon->setGeometry(QRect(10, 10, 71, 61));
        le_sign = new QLineEdit(FriendList);
        le_sign->setObjectName(QStringLiteral("le_sign"));
        le_sign->setEnabled(false);
        le_sign->setGeometry(QRect(100, 50, 151, 21));

        retranslateUi(FriendList);

        QMetaObject::connectSlotsByName(FriendList);
    } // setupUi

    void retranslateUi(QWidget *FriendList)
    {
        FriendList->setWindowTitle(QApplication::translate("FriendList", "Form", 0));
        pb_name->setText(QApplication::translate("FriendList", "UserName", 0));
        tb_icon->setText(QApplication::translate("FriendList", "icon", 0));
    } // retranslateUi

};

namespace Ui {
    class FriendList: public Ui_FriendList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIENDLIST_H
