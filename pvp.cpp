#include "pvp.h"
#include "ui_pvp.h"
#include "mainwindow.h"
#include <qmessagebox.h>
#include <random>
#include <QtWidgets>
using namespace std;

pvp::pvp(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::pvp)
{
    ui->setupUi(this);
    // Display the global variable p1 in a QLabel
    ui->p1->setText(player1);
    ui->p2->setText(player2);
    ui->turntext->hide();
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
void pvp::init()
{
    p1_turn = QString::fromStdString(random_O_X());
    p2_turn = QString::fromStdString(second_player_turn());
    ui->one->setText(" ");              ui->two->setText("  ");              ui->three->setText("   ");
    ui->four->setText("    ");          ui->five->setText("     ");          ui->six->setText("      ");
    ui->seven->setText("       ");      ui->eight->setText("        ");      ui->nine->setText("         ");
    i=1;
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


void pvp::handleButtonClick(QPushButton* button)
{
    if(button->text() == "X" || button->text() == "O") {
        QMessageBox::warning(this, " ", "Already occupied. Please choose another box.");
    } else {
        if(i % 2 != 0) {
            button->setText(p1_turn);
            ui->turntext->setText(player2 + "'s turn");
        } else {
            button->setText(p2_turn);
            ui->turntext->setText(player1 + "'s turn");
        }
        i++;
    }
    k = i - 1;
    update();
    if(iswon() && (k % 2 != 0)) {
        ui->turntext->hide();
        QMessageBox::about(this, " ", player1 + " Won");
    } else if(iswon() && (k % 2 == 0)) {
        ui->turntext->hide();
        QMessageBox::about(this, " ", player2 + " Won");
    } else if(!iswon() && i == 10) {
        ui->turntext->hide();
        QMessageBox::about(this, " ", "Draw");
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
    ui->turntext->setText(player1+"'s turn");
    ui->turntext->show();
    ui->startt->setText("Restart Game");
}


void pvp::on_main_menu_clicked()
{
    this->hide();
    mode_selector mode;
    mode.setModal(true);
    mode.exec();
}

