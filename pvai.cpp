#include "pvai.h"
#include "ui_pvai.h"
#include "mainwindow.h"
#include "mode_selector.h"
#include <random>
#include <Qmessagebox>

using namespace std;

extern QString currentUsername;
QString Level;
QString state;

pvai::pvai(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::pvai)
{
    ui->setupUi(this);
    ui->username->setText(userlabel);
    ui->one->hide();    ui->two->hide();    ui->three->hide();
    ui->four->hide();   ui->five->hide();   ui->six->hide();
    ui->seven->hide();  ui->eight->hide();  ui->nine->hide();
    setupConnections();
}

pvai::~pvai()
{
    delete ui;
}

int l,mode,m;
int winCount = 0;
int loseCount =0;
int drawCount = 0;

void pvai::save_state()
{
    if(!connOpen()){
        qDebug() << "Failed to open the database";
        return;
    }

    QSqlQuery qry;
    qry.prepare("UPDATE data SET win =win+:winCount, draw =draw+:drawCount, lose = lose + :loseCount WHERE Username = :currentUsername");

    qry.bindValue(":winCount", winCount);
    qry.bindValue(":drawCount", drawCount);
    qry.bindValue(":loseCount", loseCount);
    qry.bindValue(":currentUsername", currentUsername);

    if(qry.exec()){
        qDebug() << "Data updated successfully for username:" << currentUsername;
    } else {
        qDebug() << "Error updating data:" << qry.lastError().text();
    }

    connClose(); // Close the database connection when done
}


void pvai::saveIntoMemory()
{
    if(!connOpen()){
        qDebug() << "Failed to open the database";
        return;
    }

    QSqlQuery qry;
    QDate gamePlayedDate = QDate::currentDate();
    QString Current_date = gamePlayedDate.toString("dd-MM-yyyy");
    qry.prepare("insert into player_" + currentUsername + " (game_level,result,game_played_date,move00,move01,move02,move10,move11,move12,move20,move21,move22) values ('"+Level+"','"+state+"','"+Current_date+"','"+board[0][0]+"','"+board[0][1]+"','"+board[0][2]+"','"+board[1][0]+"','"+board[1][1]+"','"+board[1][2]+"','"+board[2][0]+"','"+board[2][1]+"','"+board[2][2]+"')");

    if(qry.exec()){
        qDebug() << "Data updated successfully for username:" << currentUsername;
    } else {
        qDebug() << "Error updating data:" << qry.lastError().text();
    }

    connClose(); // Close the database connection when done
}

string random_X_O() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 1);
    return (dis(gen) == 0) ? "O" : "X";
}
QString player_turn = QString::fromStdString(random_X_O());

string ai__turn() {
    string turn_2;
    if(player_turn == "O")
        turn_2 = "X";
    else
        turn_2 = "O";
    return turn_2;
}
QString ai_turn = QString::fromStdString(ai__turn());

void pvai::init()
{
    player_turn = QString::fromStdString(random_X_O());
    ai_turn = QString::fromStdString(ai__turn());
    ui->one->setText(" ");              ui->two->setText("  ");              ui->three->setText("   ");
    ui->four->setText("    ");          ui->five->setText("     ");          ui->six->setText("      ");
    ui->seven->setText("       ");      ui->eight->setText("        ");      ui->nine->setText("         ");
    l=1; m=1;
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

bool pvai::isdraw()
{
    if(!iswon() && l==10)
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
    if(iswon())
    {
        QMessageBox::about(this," ","Ai Won");
        loseCount=1; winCount = 0; drawCount = 0;
        state="lose";
        save_state();
        saveIntoMemory();
    }
    else if(isdraw())
    {
        QMessageBox::about(this," ","Draw");
        loseCount=0; winCount = 0; drawCount = 1;
         state="draw";
        save_state();
        saveIntoMemory();
    }
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
                    if(iswon())
                    {
                        QMessageBox::about(this," ","Ai Won");
                        loseCount=1; winCount = 0; drawCount = 0;
                         state="lose";
                        save_state();
                        saveIntoMemory();
                    }
                    else if(isdraw())
                    {
                        QMessageBox::about(this," ","Draw");
                        loseCount=0;  winCount = 0; drawCount = 1;
                         state="draw";
                        save_state();
                        saveIntoMemory();
                    }
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
                    if(iswon())
                    {
                        QMessageBox::about(this," ","Ai Won");
                        loseCount=1; winCount = 0; drawCount = 0;
                         state="lose";
                        save_state();
                        saveIntoMemory();
                    }
                    else if(isdraw())
                    {
                        QMessageBox::about(this," ","Draw");
                        loseCount=0;winCount = 0; drawCount = 1;
                         state="draw";
                        save_state();
                        saveIntoMemory();
                    }
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
    if(iswon())
    {
        QMessageBox::about(this," ","Ai Won");
        loseCount=1; winCount = 0; drawCount = 0;
         state="lose";
        save_state();
        saveIntoMemory();
    }
    else if(isdraw())
    {
        QMessageBox::about(this," ","Draw");
        loseCount=0; winCount = 0; drawCount = 1;
         state="draw";
        save_state();
        saveIntoMemory();
    }
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

void pvai::handleButtonClick(QPushButton* button)
{
    if(button->text()=="X" || button->text()=="O")
        QMessageBox::warning(this," ","Already occupied. Please choose another box.");
    else if(iswon() || isdraw())
        QMessageBox::warning(this," ","Game finished.");
    else
    {
        button->setText(player_turn);
        l++; m++;
        update();
        if(iswon())
        {
            QMessageBox::about(this," ","You Won");
            loseCount=0; winCount = 1; drawCount = 0;
            state="win";
            save_state();
            saveIntoMemory();
        }
        else if(!iswon() && l!=10 && mode==1 && m%2==0){
            computer_turn_easy();   m++;}
        else if(!iswon() && l!=10 && mode==2 && m%2==0){
            computer_turn_medium(); m++;}
        else if(!iswon() && l!=10 && mode==3 && m%2==0)
        {
            bestMove = findBestMove();
            move(bestMove.first,bestMove.second,ai_turn);
            l++;    m++;
            if(iswon())
            {
                QMessageBox::about(this," ","Ai Won");
                loseCount=1; winCount = 0; drawCount = 0;
                state="lose";
                save_state();
                saveIntoMemory();
            }
            else if(isdraw())
            {
                QMessageBox::about(this," ","Draw");
                loseCount=0; winCount = 0; drawCount = 1;
                state="draw";
                save_state();
                saveIntoMemory();
            }
        }
        else if(isdraw())
        {
            QMessageBox::about(this," ","Draw");
            loseCount=0; winCount = 0; drawCount = 1;
            state="draw";
            save_state();
            saveIntoMemory();
        }
    }
}

// Connect button clicks to the consolidated function
void pvai::setupConnections()
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

void pvai::on_easy_clicked()
{
    Level = "AI_Easy";
    mode=1;
    ui->diff->setText("Ai (Easy)");
    ui->one->show();    ui->two->show();    ui->three->show();
    ui->four->show();   ui->five->show();   ui->six->show();
    ui->seven->show();  ui->eight->show();  ui->nine->show();
    init();
    update();
    //computer_turn_easy(); //first turn is ai
}


void pvai::on_medium_clicked()
{
    Level = "AI_Medium";
    mode=2;
    ui->diff->setText("Ai (Medium)");
    ui->one->show();    ui->two->show();    ui->three->show();
    ui->four->show();   ui->five->show();   ui->six->show();
    ui->seven->show();  ui->eight->show();  ui->nine->show();
    init();
    update();
    //computer_turn_medium();   //first turn is ai
}


void pvai::on_hard_clicked()
{
    Level = "AI_Hard";
    mode=3;
    ui->diff->setText("Ai (Hard)");
    ui->one->show();    ui->two->show();    ui->three->show();
    ui->four->show();   ui->five->show();   ui->six->show();
    ui->seven->show();  ui->eight->show();  ui->nine->show();
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

