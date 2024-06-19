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
    QString username,password,confirm,win_inialization,draw_inialization,lose_inialization;
    username=ui->lineEdit->text();
    password=ui->lineEdit_3->text();
    confirm=ui->lineEdit_4->text();
    win_inialization=0;
    draw_inialization=0;
    lose_inialization=0;

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
                                       "move00 CHAR(1), "
                                       "move01 CHAR(1), "
                                       "move02 CHAR(1), "
                                       "move10 CHAR(1), "
                                       "move11 CHAR(1), "
                                       "move12 CHAR(1), "
                                       "move20 CHAR(1), "
                                       "move21 CHAR(1), "
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
