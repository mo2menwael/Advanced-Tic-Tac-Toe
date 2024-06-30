#include "signup.h"
#include "ui_signup.h"
#include "mainwindow.h"
#include <QCryptographicHash>



MainWindow *m1;
SignUp::SignUp(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SignUp)
{
    ui->setupUi(this);
    this->setWindowTitle("Sign Up");
}

SignUp::~SignUp()
{
    delete ui;

}

void SignUp::on_Register_clicked()
{
    QString username,password,confirm,win_inialization,draw_inialization,lose_inialization;
    username=ui->lineEdit->text();
    password=ui->lineEdit_3->text();
    confirm=ui->lineEdit_4->text();
    win_inialization=0;
    draw_inialization=0;
    lose_inialization=0;

    if(!connOpen()){
        qDebug()<<"Failed to open the database";
        return;
    }

    connOpen();
    QSqlQuery qry5;
    qry5.prepare("select * from data where Username='"+username+"'");
    if(qry5.exec())
    {
        connClose();
        int count=0;
        while(qry5.next())
        {
            count++;
        }

        if(count==1){
            ui->match->setText("User already exists");
            return;}
    }

    if(password.length() < 4) {
        ui->match->setText("Password must be at least 4 characters");
        return;}

    if(username.length() < 4) {
        ui->match->setText("Username must be at least 4 characters");
        return;}

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

    // Create a unique table for the player
    QSqlQuery qry2;
    QString tableName = "player_" + username;
    QString createTableQuery = QString("CREATE TABLE IF NOT EXISTS %1 ("
                                       "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                                       "game_level INTEGER, "
                                       "result INTEGER, "
                                       "game_played_date DATE NOT NULL,"
                                       "ip00 INTEGER, "
                                       "move00 CHAR(1), "
                                       "ip01 INTEGER, "
                                       "move01 CHAR(1), "
                                       "ip02 INTEGER, "
                                       "move02 CHAR(1), "
                                       "ip10 INTEGER, "
                                       "move10 CHAR(1), "
                                       "ip11 INTEGER, "
                                       "move11 CHAR(1), "
                                       "ip12 INTEGER, "
                                       "move12 CHAR(1), "
                                       "ip20 INTEGER, "
                                       "move20 CHAR(1), "
                                       "ip21 INTEGER, "
                                       "move21 CHAR(1), "
                                       "ip22 INTEGER, "
                                       "move22 CHAR(1))").arg(tableName);
    if(!qry2.exec(createTableQuery)){
        qDebug() << "Failed to create table for user:" << username;
        return;
    }

    connOpen();
    QSqlQuery qry;
    qry.prepare("insert into data (Username,Password,win,draw,lose) values ('"+username+"','"+hashedPassword+"','"+ win_inialization+"','"+draw_inialization+"','"+lose_inialization+"')");
    if(qry.exec()){
  qDebug()<<"data inserted match";
        this->hide();
        m1 = new MainWindow();
        m1->show();
    }

}
