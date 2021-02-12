#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

       ui->label_status->setStyleSheet("QLabel{color: black;}");

    QPixmap pix("/home/zshana/contact/CMS/img/password.png");
    int w=ui->label_3->width();
    int h=ui->label_3->height();
    ui->label_3->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));



    if(!connOpen())
        ui->label_status->setText("failed to open the database");
    else
        ui->label_status->setText("connected.......");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

    QString userID,password;
     userID=ui->lineEdit_Usrname->text();
     password=ui->lineEdit_Password->text();

     if(!connOpen())
     {
         qDebug()<<"Failed to open he database";
         return;
     }
     connOpen();
     QSqlQuery qry;  //logContact
     qry.prepare("select * from password where userID='"+userID+"' and password='"+password+"'");

     if(qry.exec())
     {
        int count = 0;
        while(qry.next())
        {
            count++;
        }
        if(count==1)
        {
             ui->label_check->setText("username & password is corrrect");
             connClose();
             this->hide();
             ContactInfo conactinfo ;
             conactinfo.setModal(true);
             conactinfo.exec();

        }
        if(count> 1)
             ui->label_check->setText("Duplicate username & password");

        if(count<1)
             ui->label_check->setText("username & password is not corrrect");

     }

}
