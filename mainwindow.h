#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mode_selector.h"
#include "signup.h"
#include "display.h"
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QString>
#include <QPushButton>


extern  QString currentUsername;
extern  QString othertUsername;
extern QString userlabel;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    QSqlDatabase mydb;

    void connClose()
    {
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }

    bool connOpen()
    {
        mydb=QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("C:/Users/moame/Documents/QT/Advanced-Tic-Tac-Toe/SqLite/TicTacToe_Project.db");

        if(!mydb.open()){
            qDebug()<<("none");
            return false;
        }

        else{
            qDebug()<<("DataBaseIsOpened");
            return true;
        }
    }

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_SignIn_Button_clicked();

    void on_SignUp_Button_clicked();

    void on_exit_clicked();

private:
    Ui::MainWindow *ui;
    mode_selector *modeselector;
    SignUp *sign_up;
    pvai *pvai_;
    history *history_;
    display *display_;
};
#endif // MAINWINDOW_H
