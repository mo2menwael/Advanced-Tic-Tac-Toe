// displaygamedialog.h
#ifndef DISPLAY_H
#define DISPLAY_H

#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QVBoxLayout>
#include <QLabel>
#include <QScrollArea>
#include <QFrame>


namespace Ui {
class display;
}

class display : public QDialog
{
    Q_OBJECT

public:
   explicit display(int gameId, QWidget *parent = nullptr);
    ~display();

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

private slots:
    void displayAllMoves(int gameId);

    void on_main_menu_clicked();

    void on_back_to_history_clicked();

private:
    Ui::display *ui;  // UI object pointer
    // Declare other member variables as needed
};

#endif // DISPLAYGAMEDIALOG_H
