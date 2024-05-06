#include "pvai.h"
#include "ui_pvai.h"
#include <random>
#include <Qmessagebox>
using namespace std;
pvai::pvai(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::pvai)
{
    ui->setupUi(this);
}

pvai::~pvai()
{
    delete ui;
}

string random_X_O() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 1);
    return (dis(gen) == 0) ? "O" : "X";
}

const QString player_turn = QString::fromStdString(random_X_O());

string ai__turn() {
    string turn_2;
    if(player_turn == "O")
        turn_2 = "X";
    else
        turn_2 = "O";
    return turn_2;
}

const QString ai_turn = QString::fromStdString(ai__turn());
int m,l,mode;

void pvai::init()
{
    ui->one->setText(" ");              ui->two->setText("  ");              ui->three->setText("   ");
    ui->four->setText("    ");          ui->five->setText("     ");          ui->six->setText("      ");
    ui->seven->setText("       ");      ui->eight->setText("        ");      ui->nine->setText("         ");
    l=1;
}

void pvai::update()
{
    board[0][0] = ui->one->text();   board[0][1] = ui->two->text();   board[0][2] = ui->three->text();
    board[1][0] = ui->four->text();  board[1][1] = ui->five->text();  board[1][2] = ui->six->text();
    board[2][0] = ui->seven->text(); board[2][1] = ui->eight->text(); board[2][2] = ui->nine->text();
}

void pvai::move(int r,int c)
{
    if(r==0 && c==0)
        ui->one->setText(ai_turn);
    else if(r==0 && c==1)
        ui->two->setText(ai_turn);
    else if(r==0 && c==2)
        ui->three->setText(ai_turn);
    else if(r==1 && c==0)
        ui->four->setText(ai_turn);
    else if(r==1 && c==1)
        ui->five->setText(ai_turn);
    else if(r==1 && c==2)
        ui->six->setText(ai_turn);
    else if(r==2 && c==0)
        ui->seven->setText(ai_turn);
    else if(r==2 && c==1)
        ui->eight->setText(ai_turn);
    else if(r==2 && c==2)
        ui->nine->setText(ai_turn);
}

bool pvai::iswon()
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

int row,column;
void pvai::computer_turn_easy()
{
    srand(time(nullptr));
    do {
        row = rand() % 3;
        column = rand() % 3;
    } while (board[row][column] == "X" || board[row][column] == "O");
    move(row,column);
    l++;
    m=l-1;
    update();
    if(iswon() && (m%2 != 0))
        QMessageBox::about(this," ","Ai Won");
    else if(!iswon() && l==10)
        QMessageBox::about(this," ","Draw");
}

void pvai::computer_turn_medium()
{

}

void pvai::computer_turn_hard()
{

}

void pvai::on_one_clicked()
{
    if(ui->one->text()=="X" || ui->one->text()=="O")
        QMessageBox::warning(this," ","Already occupied. Please choose another box.");
    else
    {
        ui->one->setText(player_turn);
        l++;
    }
    m=l-1;
    update();
    if(iswon() && (m%2 == 0))
        QMessageBox::about(this," ","Player Won");
    else if(!iswon() && l!=10 && mode==1)
        computer_turn_easy();
    else if(!iswon() && l!=10 && mode==2)
        computer_turn_medium();
    else if(!iswon() && l!=10 && mode==3)
        computer_turn_hard();
    else if(!iswon() && l==10)
        QMessageBox::about(this," ","Draw");
}


void pvai::on_two_clicked()
{
    if(ui->two->text()=="X" || ui->two->text()=="O")
        QMessageBox::warning(this," ","Already occupied. Please choose another box.");
    else
    {
        ui->two->setText(player_turn);
        l++;
    }
    m=l-1;
    update();
    if(iswon() && (m%2 == 0))
        QMessageBox::about(this," ","Player Won");
    else if(!iswon() && l!=10 && mode==1)
        computer_turn_easy();
    else if(!iswon() && l!=10 && mode==2)
        computer_turn_medium();
    else if(!iswon() && l!=10 && mode==3)
        computer_turn_hard();
    else if(!iswon() && l==10)
        QMessageBox::about(this," ","Draw");
}


void pvai::on_three_clicked()
{
    if(ui->three->text()=="X" || ui->three->text()=="O")
        QMessageBox::warning(this," ","Already occupied. Please choose another box.");
    else
    {
        ui->three->setText(player_turn);
        l++;
    }
    m=l-1;
    update();
    if(iswon() && (m%2 == 0))
        QMessageBox::about(this," ","Player Won");
    else if(!iswon() && l!=10 && mode==1)
        computer_turn_easy();
    else if(!iswon() && l!=10 && mode==2)
        computer_turn_medium();
    else if(!iswon() && l!=10 && mode==3)
        computer_turn_hard();
    else if(!iswon() && l==10)
        QMessageBox::about(this," ","Draw");
}


void pvai::on_four_clicked()
{
    if(ui->four->text()=="X" || ui->four->text()=="O")
        QMessageBox::warning(this," ","Already occupied. Please choose another box.");
    else
    {
        ui->four->setText(player_turn);
        l++;
    }
    m=l-1;
    update();
    if(iswon() && (m%2 == 0))
        QMessageBox::about(this," ","Player Won");
    else if(!iswon() && l!=10 && mode==1)
        computer_turn_easy();
    else if(!iswon() && l!=10 && mode==2)
        computer_turn_medium();
    else if(!iswon() && l!=10 && mode==3)
        computer_turn_hard();
    else if(!iswon() && l==10)
        QMessageBox::about(this," ","Draw");
}


void pvai::on_five_clicked()
{
    if(ui->five->text()=="X" || ui->five->text()=="O")
        QMessageBox::warning(this," ","Already occupied. Please choose another box.");
    else
    {
        ui->five->setText(player_turn);
        l++;
    }
    m=l-1;
    update();
    if(iswon() && (m%2 == 0))
        QMessageBox::about(this," ","Player Won");
    else if(!iswon() && l!=10 && mode==1)
        computer_turn_easy();
    else if(!iswon() && l!=10 && mode==2)
        computer_turn_medium();
    else if(!iswon() && l!=10 && mode==3)
        computer_turn_hard();
    else if(!iswon() && l==10)
        QMessageBox::about(this," ","Draw");
}


void pvai::on_six_clicked()
{
    if(ui->six->text()=="X" || ui->six->text()=="O")
        QMessageBox::warning(this," ","Already occupied. Please choose another box.");
    else
    {
        ui->six->setText(player_turn);
        l++;
    }
    m=l-1;
    update();
    if(iswon() && (m%2 == 0))
        QMessageBox::about(this," ","Player Won");
    else if(!iswon() && l!=10 && mode==1)
        computer_turn_easy();
    else if(!iswon() && l!=10 && mode==2)
        computer_turn_medium();
    else if(!iswon() && l!=10 && mode==3)
        computer_turn_hard();
    else if(!iswon() && l==10)
        QMessageBox::about(this," ","Draw");
}


void pvai::on_seven_clicked()
{
    if(ui->seven->text()=="X" || ui->seven->text()=="O")
        QMessageBox::warning(this," ","Already occupied. Please choose another box.");
    else
    {
        ui->seven->setText(player_turn);
        l++;
    }
    m=l-1;
    update();
    if(iswon() && (m%2 == 0))
        QMessageBox::about(this," ","Player Won");
    else if(!iswon() && l!=10 && mode==1)
        computer_turn_easy();
    else if(!iswon() && l!=10 && mode==2)
        computer_turn_medium();
    else if(!iswon() && l!=10 && mode==3)
        computer_turn_hard();
    else if(!iswon() && l==10)
        QMessageBox::about(this," ","Draw");
}


void pvai::on_eight_clicked()
{
    if(ui->eight->text()=="X" || ui->eight->text()=="O")
        QMessageBox::warning(this," ","Already occupied. Please choose another box.");
    else
    {
        ui->eight->setText(player_turn);
        l++;
    }
    m=l-1;
    update();
    if(iswon() && (m%2 == 0))
        QMessageBox::about(this," ","Player Won");
    else if(!iswon() && l!=10 && mode==1)
        computer_turn_easy();
    else if(!iswon() && l!=10 && mode==2)
        computer_turn_medium();
    else if(!iswon() && l!=10 && mode==3)
        computer_turn_hard();
    else if(!iswon() && l==10)
        QMessageBox::about(this," ","Draw");
}


void pvai::on_nine_clicked()
{
    if(ui->nine->text()=="X" || ui->nine->text()=="O")
        QMessageBox::warning(this," ","Already occupied. Please choose another box.");
    else
    {
        ui->nine->setText(player_turn);
        l++;
    }
    m=l-1;
    update();
    if(iswon() && (m%2 == 0))
        QMessageBox::about(this," ","Player Won");
    else if(!iswon() && l!=10 && mode==1)
        computer_turn_easy();
    else if(!iswon() && l!=10 && mode==2)
        computer_turn_medium();
    else if(!iswon() && l!=10 && mode==3)
        computer_turn_hard();
    else if(!iswon() && l==10)
        QMessageBox::about(this," ","Draw");
}


void pvai::on_easy_clicked()
{
    mode=1;
    init();
    update();
    computer_turn_easy();
}


void pvai::on_medium_clicked()
{
    mode=2;
    init();
    update();
    computer_turn_medium();
}


void pvai::on_hard_clicked()
{
    mode=3;
    init();
    update();
    computer_turn_hard();
}

