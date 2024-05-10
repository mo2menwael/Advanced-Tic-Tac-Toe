#include "pvai.h"
#include "ui_pvai.h"
#include "mainwindow.h"
#include "mode_selector.h"
#include <random>
#include <Qmessagebox>
using namespace std;
pvai::pvai(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::pvai)
{
    ui->setupUi(this);
    ui->username->setText(userlabel);
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

void pvai::move(int r,int c, const QString turn)
{
    if(r==0 && c==0)
        ui->one->setText(turn);
    else if(r==0 && c==1)
        ui->two->setText(turn);
    else if(r==0 && c==2)
        ui->three->setText(turn);
    else if(r==1 && c==0)
        ui->four->setText(turn);
    else if(r==1 && c==1)
        ui->five->setText(turn);
    else if(r==1 && c==2)
        ui->six->setText(turn);
    else if(r==2 && c==0)
        ui->seven->setText(turn);
    else if(r==2 && c==1)
        ui->eight->setText(turn);
    else if(r==2 && c==2)
        ui->nine->setText(turn);
    update();
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
    move(row,column,ai_turn);
    l++;
    m=l-1;
    if(iswon() && (m%2 != 0))
        QMessageBox::about(this," ","Ai Won");
    else if(!iswon() && l==10)
        QMessageBox::about(this," ","Draw");
}

void pvai::computer_turn_medium()
{
    //Check for winning move
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != "X" && board[i][j] != "O") {
                QString temp = board[i][j];
                move(i,j,ai_turn);
                if (iswon()) {
                    l++;
                    m=l-1;
                    if(iswon() && (m%2 != 0))
                        QMessageBox::about(this," ","Ai Won");
                    else if(!iswon() && l==10)
                        QMessageBox::about(this," ","Draw");
                    return;
                }
                move(i,j,temp); // Undo the move
            }
        }
    }
    // Block opponent's winning move
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != "X" && board[i][j] != "O") {
                QString temp = board[i][j];
                move(i,j,player_turn);
                if (iswon()) {
                    move(i,j,ai_turn); // Block the opponent's winning move
                    l++;
                    m=l-1;
                    if(iswon() && (m%2 != 0))
                        QMessageBox::about(this," ","Ai Won");
                    else if(!iswon() && l==10)
                        QMessageBox::about(this," ","Draw");
                    return;
                }
                move(i,j,temp); // Undo the move
            }
        }
    }
    // If no winning move or blocking move, make a random move
    srand(time(NULL));
    do {
        row = rand() % 3;
        column = rand() % 3;
    } while (board[row][column] == 'X' || board[row][column] == 'O');
    move(row,column,ai_turn);
    l++;
    m=l-1;
    if(iswon() && (m%2 != 0))
        QMessageBox::about(this," ","Ai Won");
    else if(!iswon() && l==10)
        QMessageBox::about(this," ","Draw");
}

// Function to check if any player has won
bool pvai::isMovesLeft()
{
    for (int i = 0; i<3; i++)
        for (int j = 0; j<3; j++)
            if (board[i][j] != "X" && board[i][j] != "O")
                return true;
    return false;
}

// Function to evaluate the state of the board
int pvai::evaluate()
{
    // Checking for Rows for X or O victory.
    for (int ro = 0; ro<3; ro++)
    {
        if (board[ro][0]==board[ro][1] &&
            board[ro][1]==board[ro][2])
        {
            if (board[ro][0]==ai_turn)
                return +10;
            else if (board[ro][0]==player_turn)
                return -10;
        }
    }

    // Checking for Columns for X or O victory.
    for (int col = 0; col<3; col++)
    {
        if (board[0][col]==board[1][col] &&
            board[1][col]==board[2][col])
        {
            if (board[0][col]==ai_turn)
                return +10;

            else if (board[0][col]==player_turn)
                return -10;
        }
    }

    // Checking for Diagonals for X or O victory.
    if (board[0][0]==board[1][1] && board[1][1]==board[2][2])
    {
        if (board[0][0]==ai_turn)
            return +10;
        else if (board[0][0]==player_turn)
            return -10;
    }

    if (board[0][2]==board[1][1] && board[1][1]==board[2][0])
    {
        if (board[0][2]==ai_turn)
            return +10;
        else if (board[0][2]==player_turn)
            return -10;
    }

    // Else if none of them have won then return 0
    return 0;
}


// Function to perform the minimax algorithm
int pvai::minimax(int depth, bool isMax, int alpha, int beta)
{
    int score = evaluate();

    // If Maximizer has won the game return his/her evaluated score
    if (score == 10)
        return score;

    // If Minimizer has won the game return his/her evaluated score
    if (score == -10)
        return score;

    // If there are no more moves and no winner then it is a tie
    if (isMovesLeft()==false)
        return 0;

    // If this maximizer's move
    if (isMax)
    {
        int best = -1000;

        // Traverse all cells
        for (int i = 0; i<3; i++)
        {
            for (int j = 0; j<3; j++)
            {
                // Check if cell is empty
                if (board[i][j] != "X" && board[i][j] != "O")
                {
                    QString temp = board[i][j];
                    // Make the move
                    move(i,j,ai_turn);

                    // Call minimax recursively and choose the maximum value
                    best = max( best, minimax(depth+1, !isMax, alpha, beta) );

                    // Undo the move
                    move(i,j,temp);

                    alpha = max(alpha, best);

                    // Alpha Beta Pruning
                    if(beta <= alpha)
                        return best;
                }
            }
        }
        return best;
    }

    // If this minimizer's move
    else
    {
        int best = 1000;

        // Traverse all cells
        for (int i = 0; i<3; i++)
        {
            for (int j = 0; j<3; j++)
            {
                // Check if cell is empty
                if (board[i][j] != "X" && board[i][j] != "O")
                {
                    QString temp=board[i][j];
                    // Make the move
                    move(i,j,player_turn);

                    // Call minimax recursively and choose the minimum value
                    best = min(best, minimax(depth+1, !isMax, alpha, beta));

                    // Undo the move
                    move(i,j,temp);

                    beta = min(beta, best);

                    // Alpha Beta Pruning
                    if(beta <= alpha)
                        return best;
                }
            }
        }
        return best;
    }
}

// Function to find the best move for the AI
pair<int, int> pvai::findBestMove()
{
    int bestVal = -1000;
    pair<int, int> bestMove;
    bestMove.first = -1;
    bestMove.second = -1;

    // Traverse all cells, evaluate minimax function for all empty cells. And return the cell with optimal value.
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            // Check if cell is empty
            if (board[i][j] != "X" && board[i][j] != "O")
            {
                QString temp=board[i][j];
                // Make the move
                move(i,j,ai_turn);

                // compute evaluation function for this move.
                int moveVal = minimax(0, false, -1000, 1000);

                // Undo the move
                move(i,j,temp);

                // If the value of the current move is more than the best value, then update best
                if (moveVal > bestVal)
                {
                    bestMove.first = i;
                    bestMove.second = j;
                    bestVal = moveVal;
                }
            }
        }
    }

    return bestMove;
}

pair<int, int> bestMove;

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
    if(iswon())
        QMessageBox::about(this," ","Player Won");
    else if(!iswon() && l!=10 && mode==1)
        computer_turn_easy();
    else if(!iswon() && l!=10 && mode==2)
        computer_turn_medium();
    else if(!iswon() && l!=10 && mode==3)
    {
        bestMove = findBestMove();
        move(bestMove.first,bestMove.second,ai_turn);
        l++;
        if(iswon())
            QMessageBox::about(this," ","Ai Won");
        else if(!iswon() && l==10)
            QMessageBox::about(this," ","Draw");
    }
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
    if(iswon())
        QMessageBox::about(this," ","Player Won");
    else if(!iswon() && l!=10 && mode==1)
        computer_turn_easy();
    else if(!iswon() && l!=10 && mode==2)
        computer_turn_medium();
    else if(!iswon() && l!=10 && mode==3)
    {
        bestMove = findBestMove();
        move(bestMove.first,bestMove.second,ai_turn);
        l++;
        if(iswon())
            QMessageBox::about(this," ","Ai Won");
        else if(!iswon() && l==10)
            QMessageBox::about(this," ","Draw");
    }
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
    if(iswon())
        QMessageBox::about(this," ","Player Won");
    else if(!iswon() && l!=10 && mode==1)
        computer_turn_easy();
    else if(!iswon() && l!=10 && mode==2)
        computer_turn_medium();
    else if(!iswon() && l!=10 && mode==3)
    {
        bestMove = findBestMove();
        move(bestMove.first,bestMove.second,ai_turn);
        l++;
        if(iswon())
            QMessageBox::about(this," ","Ai Won");
        else if(!iswon() && l==10)
            QMessageBox::about(this," ","Draw");
    }
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
    if(iswon())
        QMessageBox::about(this," ","Player Won");
    else if(!iswon() && l!=10 && mode==1)
        computer_turn_easy();
    else if(!iswon() && l!=10 && mode==2)
        computer_turn_medium();
    else if(!iswon() && l!=10 && mode==3)
    {
        bestMove = findBestMove();
        move(bestMove.first,bestMove.second,ai_turn);
        l++;
        if(iswon())
            QMessageBox::about(this," ","Ai Won");
        else if(!iswon() && l==10)
            QMessageBox::about(this," ","Draw");
    }
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
    if(iswon())
        QMessageBox::about(this," ","Player Won");
    else if(!iswon() && l!=10 && mode==1)
        computer_turn_easy();
    else if(!iswon() && l!=10 && mode==2)
        computer_turn_medium();
    else if(!iswon() && l!=10 && mode==3)
    {
        bestMove = findBestMove();
        move(bestMove.first,bestMove.second,ai_turn);
        l++;
        if(iswon())
            QMessageBox::about(this," ","Ai Won");
        else if(!iswon() && l==10)
            QMessageBox::about(this," ","Draw");
    }
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
    if(iswon())
        QMessageBox::about(this," ","Player Won");
    else if(!iswon() && l!=10 && mode==1)
        computer_turn_easy();
    else if(!iswon() && l!=10 && mode==2)
        computer_turn_medium();
    else if(!iswon() && l!=10 && mode==3)
    {
        bestMove = findBestMove();
        move(bestMove.first,bestMove.second,ai_turn);
        l++;
        if(iswon())
            QMessageBox::about(this," ","Ai Won");
        else if(!iswon() && l==10)
            QMessageBox::about(this," ","Draw");
    }
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
    if(iswon())
        QMessageBox::about(this," ","Player Won");
    else if(!iswon() && l!=10 && mode==1)
        computer_turn_easy();
    else if(!iswon() && l!=10 && mode==2)
        computer_turn_medium();
    else if(!iswon() && l!=10 && mode==3)
    {
        bestMove = findBestMove();
        move(bestMove.first,bestMove.second,ai_turn);
        l++;
        if(iswon())
            QMessageBox::about(this," ","Ai Won");
        else if(!iswon() && l==10)
            QMessageBox::about(this," ","Draw");
    }
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
    if(iswon())
        QMessageBox::about(this," ","Player Won");
    else if(!iswon() && l!=10 && mode==1)
        computer_turn_easy();
    else if(!iswon() && l!=10 && mode==2)
        computer_turn_medium();
    else if(!iswon() && l!=10 && mode==3)
    {
        bestMove = findBestMove();
        move(bestMove.first,bestMove.second,ai_turn);
        l++;
        if(iswon())
            QMessageBox::about(this," ","Ai Won");
        else if(!iswon() && l==10)
            QMessageBox::about(this," ","Draw");
    }
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
    if(iswon())
        QMessageBox::about(this," ","Player Won");
    else if(!iswon() && l!=10 && mode==1)
        computer_turn_easy();
    else if(!iswon() && l!=10 && mode==2)
        computer_turn_medium();
    else if(!iswon() && l!=10 && mode==3)
    {
        bestMove = findBestMove();
        move(bestMove.first,bestMove.second,ai_turn);
        l++;
        if(iswon())
            QMessageBox::about(this," ","Ai Won");
        else if(!iswon() && l==10)
            QMessageBox::about(this," ","Draw");
    }
    else if(!iswon() && l==10)
        QMessageBox::about(this," ","Draw");
}


void pvai::on_easy_clicked()
{
    mode=1;
    ui->diff->setText("Ai (Easy)");
    init();
    update();
    //computer_turn_easy(); //first turn is ai
}


void pvai::on_medium_clicked()
{
    mode=2;
    ui->diff->setText("Ai (Medium)");
    init();
    update();
    //computer_turn_medium();   //first turn is ai
}


void pvai::on_hard_clicked()
{
    mode=3;
    ui->diff->setText("Ai (Hard)");
    init();
    update();
    //l++;
    //bestMove = findBestMove();
    //move(bestMove.first,bestMove.second,ai_turn); //first turn is ai
}


void pvai::on_main_menu_clicked()
{
    this->hide();
    mode_selector mode;
    mode.setModal(true);
    mode.exec();
}

