/********************************************************************************
** Form generated from reading UI file 'contactinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTINFO_H
#define UI_CONTACTINFO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ContactInfo
{
public:
    QGroupBox *groupBox;
    QLineEdit *txt_Address;
    QLabel *lbl_FName;
    QLabel *lbl_TeleNo;
    QLabel *lbl_LName;
    QLineEdit *txt_FName;
    QLabel *lbl_Group;
    QLabel *lbl_Address;
    QLabel *lbl_Email;
    QLineEdit *txt_Email;
    QLabel *label_6;
    QLineEdit *txt_TeleNo;
    QLineEdit *txt_LName;
    QComboBox *comboBox_cat;
    QComboBox *comboBox_status;
    QLabel *label;
    QLineEdit *txt_ID;
    QTableView *tableView;
    QPushButton *btn_loadContact;
    QGroupBox *groupBox_2;
    QLineEdit *txt_sarchk;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *btn_search;
    QGroupBox *groupBox_3;
    QPushButton *btn_save;
    QPushButton *btn_update;
    QPushButton *btn_delete;
    QPushButton *btn_delete_2;
    QLabel *label_sec_sts;

    void setupUi(QDialog *ContactInfo)
    {
        if (ContactInfo->objectName().isEmpty())
            ContactInfo->setObjectName(QString::fromUtf8("ContactInfo"));
        ContactInfo->resize(741, 788);
        ContactInfo->setMinimumSize(QSize(741, 788));
        ContactInfo->setMaximumSize(QSize(741, 788));
        ContactInfo->setStyleSheet(QString::fromUtf8("border-left-color: rgb(164, 0, 0);"));
        groupBox = new QGroupBox(ContactInfo);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 711, 311));
        txt_Address = new QLineEdit(groupBox);
        txt_Address->setObjectName(QString::fromUtf8("txt_Address"));
        txt_Address->setGeometry(QRect(170, 230, 301, 26));
        lbl_FName = new QLabel(groupBox);
        lbl_FName->setObjectName(QString::fromUtf8("lbl_FName"));
        lbl_FName->setGeometry(QRect(20, 30, 121, 18));
        lbl_TeleNo = new QLabel(groupBox);
        lbl_TeleNo->setObjectName(QString::fromUtf8("lbl_TeleNo"));
        lbl_TeleNo->setGeometry(QRect(20, 110, 121, 18));
        lbl_LName = new QLabel(groupBox);
        lbl_LName->setObjectName(QString::fromUtf8("lbl_LName"));
        lbl_LName->setGeometry(QRect(20, 70, 131, 18));
        txt_FName = new QLineEdit(groupBox);
        txt_FName->setObjectName(QString::fromUtf8("txt_FName"));
        txt_FName->setGeometry(QRect(170, 30, 301, 26));
        lbl_Group = new QLabel(groupBox);
        lbl_Group->setObjectName(QString::fromUtf8("lbl_Group"));
        lbl_Group->setGeometry(QRect(20, 190, 111, 18));
        lbl_Address = new QLabel(groupBox);
        lbl_Address->setObjectName(QString::fromUtf8("lbl_Address"));
        lbl_Address->setGeometry(QRect(20, 230, 71, 18));
        lbl_Email = new QLabel(groupBox);
        lbl_Email->setObjectName(QString::fromUtf8("lbl_Email"));
        lbl_Email->setGeometry(QRect(20, 150, 121, 18));
        txt_Email = new QLineEdit(groupBox);
        txt_Email->setObjectName(QString::fromUtf8("txt_Email"));
        txt_Email->setGeometry(QRect(170, 150, 301, 26));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 270, 121, 18));
        txt_TeleNo = new QLineEdit(groupBox);
        txt_TeleNo->setObjectName(QString::fromUtf8("txt_TeleNo"));
        txt_TeleNo->setGeometry(QRect(170, 110, 301, 26));
        txt_LName = new QLineEdit(groupBox);
        txt_LName->setObjectName(QString::fromUtf8("txt_LName"));
        txt_LName->setGeometry(QRect(170, 70, 301, 26));
        comboBox_cat = new QComboBox(groupBox);
        comboBox_cat->addItem(QString());
        comboBox_cat->addItem(QString());
        comboBox_cat->addItem(QString());
        comboBox_cat->addItem(QString());
        comboBox_cat->setObjectName(QString::fromUtf8("comboBox_cat"));
        comboBox_cat->setGeometry(QRect(170, 190, 301, 26));
        comboBox_cat->setLayoutDirection(Qt::LeftToRight);
        comboBox_cat->setEditable(true);
        comboBox_status = new QComboBox(groupBox);
        comboBox_status->addItem(QString());
        comboBox_status->addItem(QString());
        comboBox_status->setObjectName(QString::fromUtf8("comboBox_status"));
        comboBox_status->setGeometry(QRect(170, 270, 301, 26));
        comboBox_status->setEditable(false);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 470, 71, 18));
        txt_ID = new QLineEdit(groupBox);
        txt_ID->setObjectName(QString::fromUtf8("txt_ID"));
        txt_ID->setGeometry(QRect(80, 470, 301, 26));
        tableView = new QTableView(ContactInfo);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 550, 711, 211));
        btn_loadContact = new QPushButton(ContactInfo);
        btn_loadContact->setObjectName(QString::fromUtf8("btn_loadContact"));
        btn_loadContact->setGeometry(QRect(10, 500, 711, 41));
        btn_loadContact->setCursor(QCursor(Qt::PointingHandCursor));
        btn_loadContact->setAcceptDrops(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8("img/refreshdata.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_loadContact->setIcon(icon);
        btn_loadContact->setIconSize(QSize(40, 40));
        btn_loadContact->setFlat(true);
        groupBox_2 = new QGroupBox(ContactInfo);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 410, 711, 81));
        txt_sarchk = new QLineEdit(groupBox_2);
        txt_sarchk->setObjectName(QString::fromUtf8("txt_sarchk"));
        txt_sarchk->setGeometry(QRect(20, 30, 331, 26));
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(530, 10, 118, 24));
        radioButton->setCursor(QCursor(Qt::PointingHandCursor));
        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(530, 50, 118, 24));
        radioButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        radioButton_2->setStyleSheet(QString::fromUtf8(""));
        btn_search = new QPushButton(groupBox_2);
        btn_search->setObjectName(QString::fromUtf8("btn_search"));
        btn_search->setEnabled(true);
        btn_search->setGeometry(QRect(360, 10, 161, 61));
        btn_search->setCursor(QCursor(Qt::PointingHandCursor));
        btn_search->setMouseTracking(true);
        btn_search->setTabletTracking(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("img/map.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_search->setIcon(icon1);
        btn_search->setIconSize(QSize(32, 32));
        btn_search->setAutoDefault(false);
        btn_search->setFlat(false);
        groupBox_3 = new QGroupBox(ContactInfo);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 320, 711, 91));
        groupBox_3->setFlat(false);
        btn_save = new QPushButton(groupBox_3);
        btn_save->setObjectName(QString::fromUtf8("btn_save"));
        btn_save->setGeometry(QRect(20, 20, 161, 61));
        btn_save->setCursor(QCursor(Qt::PointingHandCursor));
        btn_save->setLayoutDirection(Qt::LeftToRight);
        QIcon icon2;
        QString iconThemeName = QString::fromUtf8("new");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8("img/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        btn_save->setIcon(icon2);
        btn_save->setIconSize(QSize(32, 32));
        btn_save->setAutoRepeat(false);
        btn_save->setFlat(false);
        btn_update = new QPushButton(groupBox_3);
        btn_update->setObjectName(QString::fromUtf8("btn_update"));
        btn_update->setGeometry(QRect(190, 20, 161, 61));
        btn_update->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("img/updatenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_update->setIcon(icon3);
        btn_update->setIconSize(QSize(32, 32));
        btn_update->setFlat(false);
        btn_delete = new QPushButton(groupBox_3);
        btn_delete->setObjectName(QString::fromUtf8("btn_delete"));
        btn_delete->setGeometry(QRect(360, 20, 161, 61));
        btn_delete->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("img/erase.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_delete->setIcon(icon4);
        btn_delete->setIconSize(QSize(30, 32));
        btn_delete->setFlat(false);
        btn_delete_2 = new QPushButton(groupBox_3);
        btn_delete_2->setObjectName(QString::fromUtf8("btn_delete_2"));
        btn_delete_2->setGeometry(QRect(530, 20, 161, 61));
        btn_delete_2->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("img/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_delete_2->setIcon(icon5);
        btn_delete_2->setIconSize(QSize(30, 32));
        btn_delete_2->setFlat(false);
        label_sec_sts = new QLabel(ContactInfo);
        label_sec_sts->setObjectName(QString::fromUtf8("label_sec_sts"));
        label_sec_sts->setGeometry(QRect(10, 770, 521, 18));
        tableView->raise();
        btn_loadContact->raise();
        groupBox_2->raise();
        groupBox_3->raise();
        label_sec_sts->raise();
        groupBox->raise();

        retranslateUi(ContactInfo);

        btn_search->setDefault(false);


        QMetaObject::connectSlotsByName(ContactInfo);
    } // setupUi

    void retranslateUi(QDialog *ContactInfo)
    {
        ContactInfo->setWindowTitle(QCoreApplication::translate("ContactInfo", "Contact Management System", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ContactInfo", "Contact Info", nullptr));
        lbl_FName->setText(QCoreApplication::translate("ContactInfo", "First Name", nullptr));
        lbl_TeleNo->setText(QCoreApplication::translate("ContactInfo", "Tele No.", nullptr));
        lbl_LName->setText(QCoreApplication::translate("ContactInfo", "Last Name", nullptr));
        lbl_Group->setText(QCoreApplication::translate("ContactInfo", "Category", nullptr));
        lbl_Address->setText(QCoreApplication::translate("ContactInfo", "Address", nullptr));
        lbl_Email->setText(QCoreApplication::translate("ContactInfo", "Email", nullptr));
        label_6->setText(QCoreApplication::translate("ContactInfo", "Status", nullptr));
        comboBox_cat->setItemText(0, QCoreApplication::translate("ContactInfo", "Family", nullptr));
        comboBox_cat->setItemText(1, QCoreApplication::translate("ContactInfo", "Friend", nullptr));
        comboBox_cat->setItemText(2, QCoreApplication::translate("ContactInfo", "Work", nullptr));
        comboBox_cat->setItemText(3, QCoreApplication::translate("ContactInfo", "Other", nullptr));

        comboBox_status->setItemText(0, QCoreApplication::translate("ContactInfo", "Acive", nullptr));
        comboBox_status->setItemText(1, QCoreApplication::translate("ContactInfo", "Inactive", nullptr));

        comboBox_status->setPlaceholderText(QCoreApplication::translate("ContactInfo", "<---select status --->", nullptr));
        label->setText(QCoreApplication::translate("ContactInfo", "ID", nullptr));
#if QT_CONFIG(tooltip)
        btn_loadContact->setToolTip(QCoreApplication::translate("ContactInfo", "Load Contact", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_loadContact->setText(QString());
        groupBox_2->setTitle(QString());
        txt_sarchk->setPlaceholderText(QCoreApplication::translate("ContactInfo", "Enter  Tele No", nullptr));
        radioButton->setText(QCoreApplication::translate("ContactInfo", "Active", nullptr));
        radioButton_2->setText(QCoreApplication::translate("ContactInfo", "Inactive", nullptr));
#if QT_CONFIG(tooltip)
        btn_search->setToolTip(QCoreApplication::translate("ContactInfo", "Search data", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_search->setText(QString());
        groupBox_3->setTitle(QString());
#if QT_CONFIG(tooltip)
        btn_save->setToolTip(QCoreApplication::translate("ContactInfo", "Add Data", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_save->setText(QString());
#if QT_CONFIG(tooltip)
        btn_update->setToolTip(QCoreApplication::translate("ContactInfo", "Edit Data", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_update->setText(QString());
#if QT_CONFIG(tooltip)
        btn_delete->setToolTip(QCoreApplication::translate("ContactInfo", "Delete Data", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_delete->setText(QString());
#if QT_CONFIG(tooltip)
        btn_delete_2->setToolTip(QCoreApplication::translate("ContactInfo", "Clear Text", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_delete_2->setText(QString());
        label_sec_sts->setText(QCoreApplication::translate("ContactInfo", "Connection status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ContactInfo: public Ui_ContactInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTINFO_H
