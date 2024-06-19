// displaygamedialog.cpp
#include "display.h"
#include "ui_display.h"
#include <QtWidgets>
#include "mainwindow.h"
#include "mode_selector.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QScrollArea>
#include <QFrame>
history *m4;
extern QString currentUsername;
display::display(int gameId, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::display)
{
    ui->setupUi(this);
    displayAllMoves(gameId);
};

void display::displayAllMoves(int gameId) {
    QString tableName = "player_" + currentUsername; // Construct table name
    if (connOpen()) {
        qDebug() << "Database connection opened successfully.";
        QSqlQuery query;
        QString queryString = QString("SELECT move00,move01,move02,move10,move11,move12,move20,move21,move22 FROM %1 WHERE id = %2").arg(tableName).arg(gameId);

        if (query.exec(queryString)) {
            qDebug() << "Query executed successfully for game ID:" << gameId;
            if (query.next()) {
                qDebug() << "Data retrieved successfully for game ID:" << gameId;
                QStringList labelNames = {"one_3", "two_3", "three_3", "four_3", "five_3", "six_3", "seven_3", "eight_3", "nine_3"};
                for (int i = 0; i < 9; ++i) {
                    QString move = query.value(i).toString(); // Retrieve each move
                    qDebug() << "Move retrieved:" << move;
                    QLabel *label = findChild<QLabel*>(labelNames[i]);
                    if (label) {
                        label->setText(move); // Set the move as text of the corresponding QLabel
                    }
                }
            } else {
                qDebug() << "No data found for game ID:" << gameId;
            }
        } else {
            qDebug() << "Query execution failed:" << query.lastError().text();
        }
        connClose();
    } else {
        qDebug() << "Failed to open database connection.";
    }
}


display::~display()
{
    delete ui;
}

void display::on_main_menu_clicked()
{
    this->hide();
    mode_selector mode;
    mode.setModal(true);
    mode.exec();
}


void display::on_back_to_history_clicked()
{
    this->hide();
    m4 = new history();
    m4->show();
}


