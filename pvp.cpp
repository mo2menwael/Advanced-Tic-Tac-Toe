#include "pvp.h"
#include "ui_pvp.h"
#include "mainwindow.h"
#include "./ui_mainwindow.h"
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

    ui->one->hide();    ui->two->hide();    ui->three->hide();
    ui->four->hide();   ui->five->hide();   ui->six->hide();
    ui->seven->hide();  ui->eight->hide();  ui->nine->hide();
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


void pvp::on_one_clicked()
{
    if(ui->one->text()=="X" || ui->one->text()=="O")
        QMessageBox::warning(this," ","Already occupied. Please choose another box.");
    else
    {
        if(i%2 != 0)
            ui->one->setText(p1_turn);
        else
            ui->one->setText(p2_turn);
        i++;
    }
    k=i-1;
    update();
    if(iswon() && (k%2 != 0))
        QMessageBox::about(this," ",player1+" Won");
    else if(iswon() && (k%2 == 0))
        QMessageBox::about(this," ",player2+" Won");
    else if(!iswon() && i==10)
        QMessageBox::about(this," ","Draw");
}

void pvp::on_two_clicked()
{
    if(ui->two->text()=="X" || ui->two->text()=="O")
        QMessageBox::warning(this," ","Already occupied. Please choose another box.");
    else
    {
        if(i%2 != 0)
            ui->two->setText(p1_turn);
        else
            ui->two->setText(p2_turn);
        i++;
    }
    k=i-1;
    update();
    if(iswon() && (k%2 != 0))
        QMessageBox::about(this," ",player1+" Won");
    else if(iswon() && (k%2 == 0))
        QMessageBox::about(this," ",player2+" Won");
    else if(!iswon() && i==10)
        QMessageBox::about(this," ","Draw");
}


void pvp::on_three_clicked()
{
    if(ui->three->text()=="X" || ui->three->text()=="O")
        QMessageBox::warning(this," ","Already occupied. Please choose another box.");
    else
    {
        if(i%2 != 0)
            ui->three->setText(p1_turn);
        else
            ui->three->setText(p2_turn);
        i++;
    }
    k=i-1;
    update();
    if(iswon() && (k%2 != 0))
        QMessageBox::about(this," ",player1+" Won");
    else if(iswon() && (k%2 == 0))
        QMessageBox::about(this," ",player2+" Won");
    else if(!iswon() && i==10)
        QMessageBox::about(this," ","Draw");
}


void pvp::on_four_clicked()
{
    if(ui->four->text()=="X" || ui->four->text()=="O")
        QMessageBox::warning(this," ","Already occupied. Please choose another box.");
    else
    {
        if(i%2 != 0)
            ui->four->setText(p1_turn);
        else
            ui->four->setText(p2_turn);
        i++;
    }
    k=i-1;
    update();
    if(iswon() && (k%2 != 0))
        QMessageBox::about(this," ",player1+" Won");
    else if(iswon() && (k%2 == 0))
        QMessageBox::about(this," ",player2+" Won");
    else if(!iswon() && i==10)
        QMessageBox::about(this," ","Draw");
}


void pvp::on_five_clicked()
{
    if(ui->five->text()=="X" || ui->five->text()=="O")
        QMessageBox::warning(this," ","Already occupied. Please choose another box.");
    else
    {
        if(i%2 != 0)
            ui->five->setText(p1_turn);
        else
            ui->five->setText(p2_turn);
        i++;
    }
    k=i-1;
    update();
    if(iswon() && (k%2 != 0))
        QMessageBox::about(this," ",player1+" Won");
    else if(iswon() && (k%2 == 0))
        QMessageBox::about(this," ",player2+" Won");
    else if(!iswon() && i==10)
        QMessageBox::about(this," ","Draw");
}


void pvp::on_six_clicked()
{
    if(ui->six->text()=="X" || ui->six->text()=="O")
        QMessageBox::warning(this," ","Already occupied. Please choose another box.");
    else
    {
        if(i%2 != 0)
            ui->six->setText(p1_turn);
        else
            ui->six->setText(p2_turn);
        i++;
    }
    k=i-1;
    update();
    if(iswon() && (k%2 != 0))
        QMessageBox::about(this," ",player1+" Won");
    else if(iswon() && (k%2 == 0))
        QMessageBox::about(this," ",player2+" Won");
    else if(!iswon() && i==10)
        QMessageBox::about(this," ","Draw");
}


void pvp::on_seven_clicked()
{
    if(ui->seven->text()=="X" || ui->seven->text()=="O")
        QMessageBox::warning(this," ","Already occupied. Please choose another box.");
    else
    {
        if(i%2 != 0)
            ui->seven->setText(p1_turn);
        else
            ui->seven->setText(p2_turn);
        i++;
    }
    k=i-1;
    update();
    if(iswon() && (k%2 != 0))
        QMessageBox::about(this," ",player1+" Won");
    else if(iswon() && (k%2 == 0))
        QMessageBox::about(this," ",player2+" Won");
    else if(!iswon() && i==10)
        QMessageBox::about(this," ","Draw");
}


void pvp::on_eight_clicked()
{
    if(ui->eight->text()=="X" || ui->eight->text()=="O")
        QMessageBox::warning(this," ","Already occupied. Please choose another box.");
    else
    {
        if(i%2 != 0)
            ui->eight->setText(p1_turn);
        else
            ui->eight->setText(p2_turn);
        i++;
    }
    k=i-1;
    update();
    if(iswon() && (k%2 != 0))
        QMessageBox::about(this," ",player1+" Won");
    else if(iswon() && (k%2 == 0))
        QMessageBox::about(this," ",player2+" Won");
    else if(!iswon() && i==10)
        QMessageBox::about(this," ","Draw");
}


void pvp::on_nine_clicked()
{
    if(ui->nine->text()=="X" || ui->nine->text()=="O")
        QMessageBox::warning(this," ","Already occupied. Please choose another box.");
    else
    {
        if(i%2 != 0)
            ui->nine->setText(p1_turn);
        else
            ui->nine->setText(p2_turn);
        i++;
    }
    k=i-1;
    update();
    if(iswon() && (k%2 != 0))
        QMessageBox::about(this," ",player1+" Won");
    else if(iswon() && (k%2 == 0))
        QMessageBox::about(this," ",player2+" Won");
    else if(!iswon() && i==10)
        QMessageBox::about(this," ","Draw");
}


void pvp::on_startt_clicked()
{
    ui->one->show();    ui->two->show();    ui->three->show();
    ui->four->show();   ui->five->show();   ui->six->show();
    ui->seven->show();  ui->eight->show();  ui->nine->show();
    init();
    update();
    ui->startt->setText("Restart Game");
}


void pvp::on_main_menu_clicked()
{
    this->hide();
    mode_selector mode;
    mode.setModal(true);
    mode.exec();
}

