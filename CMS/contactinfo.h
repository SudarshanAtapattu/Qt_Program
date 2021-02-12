#ifndef CONTACTINFO_H
#define CONTACTINFO_H

#include <QDialog>
#include "mainwindow.h"
namespace Ui {
class ContactInfo;
}

class ContactInfo : public QDialog
{
    Q_OBJECT

public:

    explicit ContactInfo(QWidget *parent = nullptr);
    ~ContactInfo();

private slots:
    void on_pushButton_clicked();

    void on_btn_save_clicked();

    void on_btn_update_clicked();

    void on_btn_delete_clicked();

    void on_btn_loadContact_clicked();


    //void on_txt_Email_2_textChanged(const QString &constarg1);

    void on_btn_search_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_btn_delete_2_clicked();

private:
    Ui::ContactInfo *ui;
};

#endif // CONTACTINFO_H
