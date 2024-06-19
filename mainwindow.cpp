#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "mode_selector.h"
#include "signup.h"
#include <QCryptographicHash>
#include "ui_mode_selector.h"
#include <qmessagebox.h>
#include <random>
#include <QtWidgets>
#include <Qmessagebox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    // Initialize the text fields with empty strings
    ui->username->setText("");
    ui->Password->setText("");
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString userlabel;
void MainWindow::on_SignIn_Button_clicked()
{
    QString username,password;
    username=ui->username->text();
    userlabel=ui->username->text();
    password=ui->Password->text();

    // Hash the entered password using QCryptographicHash
    QByteArray passwordData = password.toUtf8();
    QByteArray hash = QCryptographicHash::hash(passwordData, QCryptographicHash::Sha256);
    QString hashedPassword = QString(hash.toHex());

    if(!connOpen()){
        qDebug()<<"Failed to open the database";
        return;
    }

    connOpen();
    QSqlQuery qry;
    qry.prepare("select * from data where Username='"+username+"'and Password='"+hashedPassword+"' ");
    if(qry.exec())
    {
        connClose();
        int count=0;
        while(qry.next())
        {
            count++;
        }
        if(count==1){
            ui->label_6->setText("username and password is correct");
            currentUsername = username;
            connClose();
            this->hide();
            mode_selector modeselector;
            modeselector.setModal(true);
            modeselector.exec();
        }

        if(count<1)
            ui->label_6->setText("username and password not found");
    }
}


void MainWindow::on_SignUp_Button_clicked()
{
    this->hide();
    SignUp signup;
    signup.setModal(true);
    signup.exec();
}

