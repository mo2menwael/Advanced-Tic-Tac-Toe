#include "signup.h"
#include "ui_signup.h"
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "mode_selector.h"
#include <QCryptographicHash>



MainWindow *m1;
SignUp::SignUp(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SignUp)
{
    ui->setupUi(this);
}

SignUp::~SignUp()
{
    delete ui;

}

void SignUp::on_Register_clicked()
{
    QString username,password,confirm;
    username=ui->lineEdit->text();
    password=ui->lineEdit_3->text();
    confirm=ui->lineEdit_4->text();

   /* if(ui->Male->isChecked())
        gender = "Male";
    else if(ui->Female->isChecked())
        gender = "Female";*/

    if(password != confirm){
         ui->match->setText("Passwords do not match");
        return;
    }
    // Hash the password using QCryptographicHash
    QByteArray passwordData = password.toUtf8();
    QByteArray hash = QCryptographicHash::hash(passwordData, QCryptographicHash::Sha256);
    QString hashedPassword = QString(hash.toHex());


    if(!connOpen()){
        qDebug()<<"Failed to open the database";
    }

    connOpen();
    QSqlQuery qry;
    qry.prepare("insert into data (Username,Password) values ('"+username+"','"+hashedPassword+"')");
    if(qry.exec()){
  qDebug()<<"data inserted match";
        this->hide();
        m1 = new MainWindow();
        m1->show();
    }

}
