#include "contactinfo.h"
#include "ui_contactinfo.h"
#include<QMessageBox>
#include<QPixmap>
#include "qpixmap.h"


ContactInfo::ContactInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ContactInfo)
{
    ui->setupUi(this);

    //button icon
    ui->btn_save->setIcon(QIcon("/home/zshana/contact/CMS/img/save.png"));
    ui->btn_update->setIcon(QIcon("/home/zshana/contact/CMS/img/updatenew.png"));
    ui->btn_delete->setIcon(QIcon("/home/zshana/contact/CMS/img/erase.png"));
    ui->btn_delete_2->setIcon(QIcon("/home/zshana/contact/CMS/img/refresh.png"));
    ui->btn_search->setIcon(QIcon("/home/zshana/contact/CMS/img/map.png"));
    ui->btn_loadContact->setIcon(QIcon("/home/zshana/contact/CMS/img/refreshdata.png"));

    MainWindow conn;
         if(!conn.connOpen())
              ui->label_sec_sts->setText("failed to open the database");
         else
              ui->label_sec_sts->setText("connected.......");

}

ContactInfo::~ContactInfo()
{
    delete ui;
}

void ContactInfo::on_pushButton_clicked()
{

}


void ContactInfo::on_btn_save_clicked()
{


    MainWindow conn;
    QString ID,FirstName,LastName,TeleNo,Email,Category,Address,Status;
     ID=ui->txt_ID->text();
     FirstName=ui->txt_FName->text();
     LastName=ui->txt_LName->text();
     Email=ui->txt_Email->text();
     Category=ui->comboBox_cat->currentText();
     TeleNo=ui->txt_TeleNo->text();
     Address=ui->txt_Address->text();
     Status=ui->comboBox_status->currentText();



     if(!conn.connOpen())
     {
         qDebug()<<"Failed to open the database";
         return;
     }
     conn.connOpen();
     QSqlQuery qry;
     qry.prepare("insert into info (ID,FirstName,LastName,Email,Category,TeleNo,Address,Status) values ('"+ID+"' ,'"+FirstName+"' ,'"+LastName+"' ,'"+Email+"' ,'"+Category+"','"+TeleNo+"' ,'"+Address+"','"+Status+"')");

     if(qry.exec())
     {

        QMessageBox::information(this,tr("save data"),tr("Data saved successfully !"));
        conn.connClose();
        ui->txt_ID->clear();
        ui->txt_FName->clear();
        ui->txt_LName->clear();
        ui->txt_Email->clear();
        ui->txt_TeleNo->clear();
        ui->txt_Address->clear();
     }
     else
     {
         QMessageBox::critical(this,tr("error::"),qry.lastError().text());
     }

}

void ContactInfo::on_btn_update_clicked()
{

    MainWindow conn;
     QString FirstName,LastName,Email,TeleNo,Address,Category,Status;

     FirstName=ui->txt_FName->text();
     LastName=ui->txt_LName->text();
     Email=ui->txt_Email->text();
     TeleNo=ui->txt_TeleNo->text();
     Address=ui->txt_Address->text();
     Category=ui->comboBox_cat->currentText();
     Status=ui->comboBox_status->currentText();


     if(!conn.connOpen())
     {
         qDebug()<<"Failed to open the database";
         return;
     }
     conn.connOpen();
     QSqlQuery qry;

     qry.prepare("update info set FirstName='"+FirstName+"',LastName='"+LastName+"',Email='"+Email+"',TeleNo='"+TeleNo+"',Address='"+Address+"',Category='"+Category+"',Status='"+Status+"' where TeleNo='"+TeleNo+"'");
     if(qry.exec())
     {
        QMessageBox::information(this,tr("update data"),tr("Data updated successfully !"));
        conn.connClose();
        ui->txt_ID->clear();
        ui->txt_FName->clear();
        ui->txt_LName->clear();
        ui->txt_Email->clear();
        ui->txt_TeleNo->clear();
        ui->txt_Address->clear();
     }
     else
     {
         QMessageBox::critical(this,tr("error::"),qry.lastError().text());
     }

}

void ContactInfo::on_btn_delete_clicked()
{
    MainWindow conn;
    QString ID,FirstName,LastName,TeleNo,Email,Address;
     ID=ui->txt_ID->text();
     FirstName=ui->txt_FName->text();
     LastName=ui->txt_LName->text();
     Email=ui->txt_Email->text();
     TeleNo=ui->txt_TeleNo->text();
     Address=ui->txt_Address->text();


     if(!conn.connOpen())
     {
         qDebug()<<"Failed to open he database";
         return;
     }
     conn.connOpen();
     QSqlQuery qry;
     qry.prepare("Delete from info where TeleNo='"+TeleNo+"'");

     if(qry.exec())
     {
        QMessageBox::warning(this,tr("Delete"),tr("Delete data successfully !"));
        conn.connClose();
        ui->txt_ID->clear();
        ui->txt_FName->clear();
        ui->txt_LName->clear();
        ui->txt_Email->clear();
        ui->txt_TeleNo->clear();
        ui->txt_Address->clear();

     }
     else
     {
         QMessageBox::critical(this,tr("error::"),qry.lastError().text());
     }
}

void ContactInfo::on_btn_loadContact_clicked()
{
    MainWindow conn;
    QSqlQueryModel * modal = new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery * qry = new QSqlQuery(conn.mydb);
    qry-> prepare("select TeleNo,FirstName,LastName,Email,Category,Address,Status from info");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    conn.connClose();
    qDebug() <<(modal->rowCount());

}

//void ContactInfo::on_txt_Email_2_textChanged(const QString & constarg1)
//{


//}

void ContactInfo::on_btn_search_clicked()
{
    MainWindow conn;
    QString val;

    val=ui->txt_sarchk->text();

    QSqlQueryModel * modal = new QSqlQueryModel();
    conn.connOpen();
    QSqlQuery * qry = new QSqlQuery(conn.mydb);
    qry-> prepare("select TeleNo,FirstName,LastName,Email,Category,Address,Status from info WHERE TeleNo LIKE '"+val+"'  ;");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    conn.connClose();
    qDebug() <<(modal->rowCount());
}

void ContactInfo::on_tableView_activated(const QModelIndex &index)
{
    QString val = ui->tableView->model()->data(index).toString();
    MainWindow conn;
    if(!conn.connOpen())
    {
        qDebug()<<"Failed to open he database";
        return;
    }
    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("select * from info where ID='"+val+"'or FirstName='"+val+"' or LastName ='"+val+"' or Email='"+val+"' ");

    if(qry.exec())
    {
        while(qry.next())
       {       
        ui->txt_FName->setText(qry.value(1).toString());
        ui->txt_LName->setText(qry.value(2).toString());
        ui->txt_Email->setText(qry.value(3).toString());
        ui->txt_TeleNo->setText(qry.value(4).toString());
        ui->txt_Address->setText(qry.value(5).toString());


       }
    conn.connClose();
    }
    else {
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }
}

void ContactInfo::on_radioButton_clicked()
{
    if(ui->radioButton->isChecked())
    {
        MainWindow conn;
        QSqlQueryModel * modal = new QSqlQueryModel();
        conn.connOpen();
        QSqlQuery * qry = new QSqlQuery(conn.mydb);
        qry-> prepare("SELECT TeleNo,FirstName,LastName,Email,Category,Address,Status FROM info WHERE Status LIKE 'a%';");
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);
        conn.connClose();
        qDebug() <<(modal->rowCount());
    }

}

void ContactInfo::on_radioButton_2_clicked()
{
    if(ui->radioButton_2->isChecked())
    {
        MainWindow conn;
        QSqlQueryModel * modal = new QSqlQueryModel();
        conn.connOpen();
        QSqlQuery * qry = new QSqlQuery(conn.mydb);
        qry-> prepare("SELECT TeleNo,FirstName,LastName,Email,Category,Address,Status FROM info WHERE Status LIKE 'i%';");
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);
        conn.connClose();
        qDebug() <<(modal->rowCount());
    }

}




void ContactInfo::on_btn_delete_2_clicked()
{
    ui->txt_ID->clear();
    ui->txt_FName->clear();
    ui->txt_LName->clear();
    ui->txt_Email->clear();
    ui->txt_TeleNo->clear();
    ui->txt_Address->clear();
}
