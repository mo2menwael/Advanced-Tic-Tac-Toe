#ifndef DISPLAY_H
#define DISPLAY_H

#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtDebug>
#include <QStringList>
#include <QPair>
#include <QList>

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
        mydb = QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("C:/Users/moame/Documents/QT/Advanced-Tic-Tac-Toe/SqLite/TicTacToe_Project.db");
        if (!mydb.open()) {
            qDebug() << "Database connection failed.";
            return false;
        } else {
            qDebug() << "Database connection opened successfully.";
            return true;
        }
    }

private slots:
    void loadMoves(int gameId);
    void displayCurrentMove();
    void clearBoard();
    void on_doButton_clicked();
    void on_undoButton_clicked();
    void on_main_menu_clicked();
    void on_back_to_history_clicked();

private:
    Ui::display *ui;
    QList<QPair<int, QPair<int, QString>>> moves;  // List to store moves and their order
    int currentMoveIndex;
    bool movesDisplayed; // Flag to track if moves have been displayed
private:
    QStringList labelNames = {"one_3", "two_3", "three_3", "four_3", "five_3", "six_3", "seven_3", "eight_3", "nine_3"};
};

#endif // DISPLAY_H
