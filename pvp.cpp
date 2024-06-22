#include "pvp.h"
#include "ui_pvp.h"
#include "mainwindow.h"
#include <qmessagebox.h>
#include <random>
#include <QtWidgets>
#include "mode_selector.h"
#include <Qmessagebox>
#include <QDate>

using namespace std;

extern QString currentUsername;
extern  QString othertUsername;
QString playerLevel="local";
QString result_1;
QString result_2;


QString movesArray[9]; // Array to hold up to 9 moves
int moveCount = 0; // Counter to keep track of the number of moves made


pvp::pvp(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::pvp)
{
    ui->setupUi(this);
    // Display the global variable p1 in a QLabel
    ui->turntext->hide();
    ui->p1label->setText(currentUsername);     ui->p2label->setText(othertUsername);
    ui->one->hide();    ui->two->hide();    ui->three->hide();
    ui->four->hide();   ui->five->hide();   ui->six->hide();
    ui->seven->hide();  ui->eight->hide();  ui->nine->hide();
    setupConnections();
}


pvp::~pvp()
{
    delete ui;
}

string random_O_X() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 1);
    return (dis(gen) == 0) ? "O" : "X";
}
QString p1_turn = QString::fromStdString(random_O_X());

string second_player_turn() {
    string turn_2;
    if(p1_turn == "O")
        turn_2 = "X";
    else
        turn_2 = "O";
    return turn_2;
}
QString p2_turn = QString::fromStdString(second_player_turn());

int k,i;
int winCount_1 = 0;
int loseCount_1 =0;
int drawCount_1 = 0;
int winCount_2 = 0;
int loseCount_2 =0;
int drawCount_2 = 0;


void pvp::save_state()
{
    if(!connOpen()){
        qDebug() << "Failed to open the database";
        return;
    }

    QSqlQuery qry_1;
    qry_1.prepare("UPDATE data SET win =win+:winCount_1, draw =draw+:drawCount_1, lose =lose+:loseCount_1 WHERE Username = :currentUsername");
    qry_1.bindValue(":winCount_1", winCount_1);
    qry_1.bindValue(":drawCount_1", drawCount_1);
    qry_1.bindValue(":loseCount_1", loseCount_1);
    qry_1.bindValue(":currentUsername", currentUsername);

    if(qry_1.exec()){
        qDebug() << "Data updated successfully for username:" << othertUsername;
    } else {
        qDebug() << "Error updating data:" << qry_1.lastError().text();
    }

    QSqlQuery qry_2;
    qry_2.prepare("UPDATE data SET win =win+:winCount_2, draw =draw+:drawCount_2, lose =lose+:loseCount_2 WHERE Username = :othertUsername");
    qry_2.bindValue(":winCount_2", winCount_2);
    qry_2.bindValue(":drawCount_2", drawCount_2);
    qry_2.bindValue(":loseCount_2", loseCount_2);
    qry_2.bindValue(":othertUsername", othertUsername);

    if(qry_2.exec()){
        qDebug() << "Data updated successfully for username:" << othertUsername;
    } else {
        qDebug() << "Error updating data:" << qry_2.lastError().text();
    }

    connClose(); // Close the database connection when done
}


void pvp::init() {
    p1_turn = QString::fromStdString(random_O_X());
    p2_turn = QString::fromStdString(second_player_turn());
    ui->one->setText(" ");              ui->two->setText("  ");              ui->three->setText("   ");
    ui->four->setText("    ");          ui->five->setText("     ");          ui->six->setText("      ");
    ui->seven->setText("       ");      ui->eight->setText("        ");      ui->nine->setText("         ");
    i = 1;
    // Reset the 3x3 array
    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 3; ++col) {
            board[row][col] = "";
        }
    }
}

void pvp::update()
{
    board[0][0] = ui->one->text();   board[0][1] = ui->two->text();   board[0][2] = ui->three->text();
    board[1][0] = ui->four->text();  board[1][1] = ui->five->text();  board[1][2] = ui->six->text();
    board[2][0] = ui->seven->text(); board[2][1] = ui->eight->text(); board[2][2] = ui->nine->text();
}

bool pvp::iswon()
{
    //checking the win for Simple Rows and Simple Column
    for(int j=0; j<3 ; j++)
        if(((board[j][0] == board[j][1]) && (board[j][0] == board[j][2] ))||
            ((board[0][j] == board[1][j]) && (board[0][j] == board[2][j])))
            return true;

    //checking the win for both diagonal
    if(((board[0][0] == board[2][2]) && (board[1][1] == board[2][2] ))||
        ((board[0][2] == board[1][1]) && (board[0][2] == board[2][0])))
        return true;

    return false;
}

bool pvp::isdraw()
{
    if(!iswon() && i==10)
        return true;

    return false;
}

void pvp::handleButtonClick(QPushButton* button) {
    if(iswon() || isdraw())
        QMessageBox::warning(this," ","Game finished.");
    else if (button->text() == "X" || button->text() == "O")
        QMessageBox::warning(this, " ", "Already occupied. Please choose another box.");
    else
    {
        QString currentPlayer = (i % 2 != 0) ? p1_turn : p2_turn;
        button->setText(currentPlayer);
        ui->turntext->setText((i % 2 != 0) ? othertUsername + "'s turn" : currentUsername + "'s turn");

        // Determine the row and column of the clicked button and update the board state
        if (button == ui->one) { board[0][0] = currentPlayer; }
        else if (button == ui->two) { board[0][1] = currentPlayer; }
        else if (button == ui->three) { board[0][2] = currentPlayer; }
        else if (button == ui->four) { board[1][0] = currentPlayer; }
        else if (button == ui->five) { board[1][1] = currentPlayer; }
        else if (button == ui->six) { board[1][2] = currentPlayer; }
        else if (button == ui->seven) { board[2][0] = currentPlayer; }
        else if (button == ui->eight) { board[2][1] = currentPlayer; }
        else if (button == ui->nine) { board[2][2] = currentPlayer; }

        i++;
        k = i - 1;
        update();
        if (iswon() && (k % 2 != 0)) {
            ui->turntext->hide();
            QMessageBox::about(this, " ", currentUsername + " Won");
            winCount_1 = 1;loseCount_1 = 0;drawCount_1 = 0;
            loseCount_2 = 1; winCount_2 = 0; drawCount_2 = 0;
            result_1="win";
            result_2="lose";
            save_state();
            saveIntoMemory();
        } else if (iswon() && (k % 2 == 0)) {
            ui->turntext->hide();
            QMessageBox::about(this, " ", othertUsername + " Won");
            winCount_1 = 0; loseCount_1 = 1;drawCount_1 = 0;
            loseCount_2 = 0; winCount_2 = 1; drawCount_2 = 0;
            result_1="lose";
            result_2="win";
            save_state();
            saveIntoMemory();
        } else if (isdraw()) {
            ui->turntext->hide();
            QMessageBox::about(this, " ", "Draw");
            winCount_1 = 0;loseCount_1 = 0; drawCount_1 = 1;
            loseCount_2 = 0; winCount_2 = 0;drawCount_2 = 1;
            result_1="draw";
            result_2="draw";
            save_state();
            saveIntoMemory();
        }
    }
}

void pvp::setupConnections()
{
    connect(ui->one, &QPushButton::clicked, this, [this]() { handleButtonClick(ui->one); });
    connect(ui->two, &QPushButton::clicked, this, [this]() { handleButtonClick(ui->two); });
    connect(ui->three, &QPushButton::clicked, this, [this]() { handleButtonClick(ui->three); });
    connect(ui->four, &QPushButton::clicked, this, [this]() { handleButtonClick(ui->four); });
    connect(ui->five, &QPushButton::clicked, this, [this]() { handleButtonClick(ui->five); });
    connect(ui->six, &QPushButton::clicked, this, [this]() { handleButtonClick(ui->six); });
    connect(ui->seven, &QPushButton::clicked, this, [this]() { handleButtonClick(ui->seven); });
    connect(ui->eight, &QPushButton::clicked, this, [this]() { handleButtonClick(ui->eight); });
    connect(ui->nine, &QPushButton::clicked, this, [this]() { handleButtonClick(ui->nine); });
}

void pvp::on_startt_clicked()
{
    ui->one->show();    ui->two->show();    ui->three->show();
    ui->four->show();   ui->five->show();   ui->six->show();
    ui->seven->show();  ui->eight->show();  ui->nine->show();
    init();
    update();
    ui->turntext->setText(currentUsername+"'s turn");
    ui->turntext->show();
    ui->startt->setText("Restart Game");
}
void pvp::saveIntoMemory()
{
    if(!connOpen()){
        qDebug() << "Failed to open the database";
        return;
    }

    QSqlQuery qry_1;
    QDate gamePlayedDate = QDate::currentDate();
    QString Current_date = gamePlayedDate.toString("dd-MM-yyyy");
    qry_1.prepare("insert into player_" + currentUsername + " (game_level,result,game_played_date,move00,move01,move02,move10,move11,move12,move20,move21,move22) values ('"+playerLevel+"','"+result_1+"','"+Current_date+"','"+board[0][0]+"','"+board[0][1]+"','"+board[0][2]+"','"+board[1][0]+"','"+board[1][1]+"','"+board[1][2]+"','"+board[2][0]+"','"+board[2][1]+"','"+board[2][2]+"')");

    if(qry_1.exec()){
        qDebug() << "Data updated successfully for username:" << currentUsername;
    } else {
        qDebug() << "Error updating data:" << qry_1.lastError().text();
    }

    QSqlQuery qry_2;
    qry_2.prepare("insert into player_" + othertUsername + " (game_level,result,move00,move01,move02,move10,move11,move12,move20,move21,move22) values ('"+playerLevel+"','"+result_2+"','"+board[0][0]+"','"+board[0][1]+"','"+board[0][2]+"','"+board[1][0]+"','"+board[1][1]+"','"+board[1][2]+"','"+board[2][0]+"','"+board[2][1]+"','"+board[2][2]+"')");

    if(qry_2.exec()){
        qDebug() << "Data updated successfully for username:" << currentUsername;
    } else {
        qDebug() << "Error updating data:" << qry_2.lastError().text();
    }

    connClose(); // Close the database connection when done
}


void pvp::on_main_menu_clicked()
{
    this->hide();
    mode_selector mode;
    mode.setModal(true);
    mode.exec();
}

