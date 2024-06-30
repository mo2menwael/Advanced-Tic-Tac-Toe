#include "mainwindow.h"
#include <QApplication>
#include <QSql>

QString  currentUsername;
QString othertUsername;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    // Establish a connection to the SQLite database
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("TicTacToe_Project.db");

    if (!db.open()) {
        qDebug() << "Error: Could not connect to database.";
        return -1;
    } else {
        qDebug() << "Database connected successfully!";
    }

    QSqlQuery query;
    QString createTableQuery = R"(
    CREATE TABLE "data" (
    "Username"  varchar(20),
    "Password"  integer,
    "win"   INTEGER DEFAULT 1,
    "draw"  INTEGER DEFAULT 0,
    "lose"  INTEGER DEFAULT 0
    )
    )";

    if (!query.exec(createTableQuery)) {
        qDebug() << "Error: Failed to create table." << query.lastError();
    } else {
        qDebug() << "Table created successfully!";
    }
    return a.exec();
}
