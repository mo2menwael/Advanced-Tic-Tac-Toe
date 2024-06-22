#include "display.h"
#include "ui_display.h"
#include <QtWidgets>
#include "mainwindow.h"
#include "mode_selector.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QScrollArea>
#include <QFrame>

extern QString currentUsername;
history *m4;
display::display(int gameId, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::display),
    currentMoveIndex(0)
{
    ui->setupUi(this);
    loadMoves(gameId);
    displayCurrentMove();
}

void display::loadMoves(int gameId) {
    QString tableName = "player_" + currentUsername;
    if (connOpen()) {
        qDebug() << "Database connection opened successfully.";
        QSqlQuery query;
        QString queryString = QString("SELECT ip00, move00, ip01, move01, ip02, move02, ip10, move10, ip11, move11, ip12, move12, ip20, move20, ip21, move21, ip22, move22 FROM %1 WHERE id = %2").arg(tableName).arg(gameId);

        if (query.exec(queryString)) {
            qDebug() << "Query executed successfully for game ID:" << gameId;
            if (query.next()) {
                qDebug() << "Data retrieved successfully for game ID:" << gameId;
                for (int i = 0; i < 9; ++i) {
                    int ip = query.value(i * 2).toInt();
                    QString move = query.value(i * 2 + 1).toString();
                    if (ip != 0) {
                        moves.append(qMakePair(ip, qMakePair(i, move)));
                    }
                }
                std::sort(moves.begin(), moves.end(), [](const QPair<int, QPair<int, QString>> &a, const QPair<int, QPair<int, QString>> &b) {
                    return a.first < b.first;
                });
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

void display::displayCurrentMove() {
    clearBoard();
    QStringList labelNames = {"one_3", "two_3", "three_3", "four_3", "five_3", "six_3", "seven_3", "eight_3", "nine_3"};
    for (int i = 0; i < currentMoveIndex; ++i) {
        int moveIndex = moves[i].second.first;
        QString move = moves[i].second.second;

        QLabel *label = findChild<QLabel*>(labelNames[moveIndex]);
        if (label) {
            label->setText(move);
        }
    }
}

void display::clearBoard() {
    QStringList labelNames = {"one_3", "two_3", "three_3", "four_3", "five_3", "six_3", "seven_3", "eight_3", "nine_3"};
    for (const QString &labelName : labelNames) {
        QLabel *label = findChild<QLabel*>(labelName);
        if (label) {
            label->setText("");
        }
    }
}

void display::on_doButton_clicked() {
    if (currentMoveIndex < moves.size()) {
        int moveIndex = moves[currentMoveIndex].second.first;
        QString move = moves[currentMoveIndex].second.second;

        QLabel *label = findChild<QLabel*>(labelNames[moveIndex]);
        if (label) {
            label->setText(move);
        }

        // Display all previous moves up to the current index
        for (int i = 0; i < currentMoveIndex; ++i) {
            int prevMoveIndex = moves[i].second.first;
            QString prevMove = moves[i].second.second;

            QLabel *prevLabel = findChild<QLabel*>(labelNames[prevMoveIndex]);
            if (prevLabel) {
                prevLabel->setText(prevMove);
            }
        }

        ++currentMoveIndex;
    }
}


void display::on_undoButton_clicked() {
    if (currentMoveIndex > 0) {
        --currentMoveIndex;
        displayCurrentMove();
    }
}

display::~display() {
    delete ui;
}

void display::on_main_menu_clicked() {
    this->hide();
    mode_selector mode;
    mode.setModal(true);
    mode.exec();
}

void display::on_back_to_history_clicked() {
    this->hide();
    m4 = new history();
    m4->show();
}
