#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_SignIn_Button_clicked()
{
    QString username,password;
    username=ui->UsernameEmail->text();
    password=ui->Password->text();
    if(!connOpen()){
        qDebug()<<"Failed to open the database";
    }

    connOpen();
    QSqlQuery qry;
    qry.prepare("select * from data where Username='"+username+"'and Password='"+password+"' ");
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
            connClose();
            this->hide();
            mode_selector modeselector;
            modeselector.setModal(true);
            modeselector.exec();
        }

        if(count<1)
            ui->label_6->setText("username and password not found");
    }
    this->hide();
    mode_selector modeselector;
    modeselector.setModal(true);
    modeselector.exec();
}


void MainWindow::on_SignUp_Button_clicked()
{
    QString username,password;
    username=ui->UsernameEmail->text();
    password=ui->Password->text();
    if(!mydb.open()){
        qDebug()<<"Failed to open the database";
    }
    QSqlQuery qry;
    qry.prepare("insert into data(Username,Password) values('"+username+"','"+password+"')");
    if(qry.exec())
    {
        int count=0;
        while(qry.next())
        {
            count++;

        }
        if(count==1){
            ui->label_6->setText("username and password is already signUp");
        }

        if(count<1){
            ui->label_6->setText("username and password");
            this->hide();
            mode_selector modeselector1;
            modeselector1.setModal(true);
            modeselector1.exec();
        }
    }

}

