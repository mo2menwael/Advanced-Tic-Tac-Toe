#include "pvai.h"
#include "ui_pvai.h"
#include <random>
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

string random_O_X() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 1);
    return (dis(gen) == 0) ? "O" : "X";
}

const QString player_turn = QString::fromStdString(random_O_X());

string second_player_turn() {
    string turn_2;
    if(player_turn == "O")
        turn_2 = "X";
    else
        turn_2 = "O";
    return turn_2;
}

const QString ai_turn = QString::fromStdString(second_player_turn());
int k,i;

void pvai::init()
{
    ui->one->setText(" ");              ui->two->setText("  ");              ui->three->setText("   ");
    ui->four->setText("    ");          ui->five->setText("     ");          ui->six->setText("      ");
    ui->seven->setText("       ");      ui->eight->setText("        ");      ui->nine->setText("         ");
    i=1;
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
}

void pvai::computer_turn_medium()
{

}

void pvai::computer_turn_hard()
{

}

void pvai::on_one_clicked()
{

}


void pvai::on_two_clicked()
{

}


void pvai::on_three_clicked()
{

}


void pvai::on_four_clicked()
{

}


void pvai::on_five_clicked()
{

}


void pvai::on_six_clicked()
{

}


void pvai::on_seven_clicked()
{

}


void pvai::on_eight_clicked()
{

}


void pvai::on_nine_clicked()
{

}


void pvai::on_easy_clicked()
{

    init();
    update();
}


void pvai::on_medium_clicked()
{

    init();
    update();
}


void pvai::on_hard_clicked()
{

    init();
    update();
}

