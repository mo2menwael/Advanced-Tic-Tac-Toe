#include "pvai.h"
#include "ui_pvai.h"
#include "mainwindow.h"
#include "mode_selector.h"
#include <random>
#include <iostream>
#include <QTimer>
#include "messageBox.h"
#include "performance.h"
using namespace std;

extern QString currentUsername;
QString Level;
QString state;
QString J00,J01,J02,J10,J11,J12,J20,J21,J22;
int counter_1=0;

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
    connect(timer, &QTimer::timeout, this, &pvai::updatePerformanceMetrics);
    timer->start(1000);
}

pvai::~pvai()
{
    delete ui;
}

int moves,mode,take_turns;
int winCount = 0;
int loseCount = 0;
int drawCount = 0;

void pvai::updatePerformanceMetrics()
{
    // Fetch memory and CPU usage metrics
    size_t memoryUsage = getMemoryUsage();
    double cpuUsage = getCpuUsage();

    // Output to qDebug for debugging purposes
    qDebug() << "Memory Usage: " << memoryUsage / (1024*1024) << " MB";
    qDebug() << "CPU Usage: " <<cpuUsage<<"%";

}


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
    QDateTime gamePlayedDateTime = QDateTime::currentDateTime();
    QString currentDateTime = gamePlayedDateTime.toString("dd-MM-yyyy HH:mm:ss");
    qry.prepare("insert into player_" + currentUsername + " (game_level,result,game_played_date,ip00,move00,ip01,move01,ip02,move02,ip10,move10,ip11,move11,ip12,move12,ip20,move20,ip21,move21,ip22,move22) values ('"+Level+"','"+state+"','"+currentDateTime+"',"+J00+",'"+board[0][0]+"',"+J01+",'"+board[0][1]+"',"+J02+",'"+board[0][2]+"',"+J10+",'"+board[1][0]+"',"+J11+",'"+board[1][1]+"',"+J12+",'"+board[1][2]+"',"+J20+",'"+board[2][0]+"',"+J21+",'"+board[2][1]+"',"+J22+",'"+board[2][2]+"')");

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
    moves=1; take_turns=1; J00='0'; J01='0'; J02='0'; J10='0'; J11='0'; J12='0'; J20='0'; J21='0'; J22='0'; counter_1=0;
}

void pvai::update()
{
    board[0][0] = ui->one->text();   board[0][1] = ui->two->text();   board[0][2] = ui->three->text();
    board[1][0] = ui->four->text();  board[1][1] = ui->five->text();  board[1][2] = ui->six->text();
    board[2][0] = ui->seven->text(); board[2][1] = ui->eight->text(); board[2][2] = ui->nine->text();
}

void pvai::move(int r, int c, const QString& turn) {
    QString color = "#FF4350";

    if(r==0 && c==0)
    {ui->one->setText(turn); ui->one->setStyleSheet("color: " + color); J00 = QString::number(++counter_1);}
    else if(r==0 && c==1)
    {ui->two->setText(turn); ui->two->setStyleSheet("color: " + color); J01 = QString::number(++counter_1);}
    else if(r==0 && c==2)
    {ui->three->setText(turn); ui->three->setStyleSheet("color: " + color); J02 = QString::number(++counter_1);}
    else if(r==1 && c==0)
    {ui->four->setText(turn); ui->four->setStyleSheet("color: " + color); J10 = QString::number(++counter_1);}
    else if(r==1 && c==1)
    {ui->five->setText(turn); ui->five->setStyleSheet("color: " + color); J11 = QString::number(++counter_1);}
    else if(r==1 && c==2)
    {ui->six->setText(turn); ui->six->setStyleSheet("color: " + color); J12 = QString::number(++counter_1);}
    else if(r==2 && c==0)
    {ui->seven->setText(turn); ui->seven->setStyleSheet("color: " + color); J20 = QString::number(++counter_1);}
    else if(r==2 && c==1)
    {ui->eight->setText(turn); ui->eight->setStyleSheet("color: " + color); J21 = QString::number(++counter_1);}
    else if(r==2 && c==2)
    {ui->nine->setText(turn); ui->nine->setStyleSheet("color: " + color); J22 = QString::number(++counter_1);}

    update();
}

void pvai::update_board()
{
    if(ui->one->text()   == " ")
        J00='0';
    if(ui->two->text()   == "  ")
        J01='0';
    if(ui->three->text() == "   ")
        J02='0';
    if(ui->four->text()  == "    ")
        J10='0';
    if(ui->five->text()  == "     ")
        J11='0';
    if(ui->six->text()   == "      ")
        J12='0';
    if(ui->seven->text() == "       ")
        J20='0';
    if(ui->eight->text() == "        ")
        J21='0';
    if(ui->nine->text()  == "         ")
        J22='0';
}

bool pvai::iswon()
{
    //checking the win for Simple Rows and Simple Column
    for(int j=0; j<3 ; j++)
        if(((board[j][0] == board[j][1]) && (board[j][0] == board[j][2] ))||
            ((board[0][j] == board[1][j]) && (board[0][j] == board[2][j]))){
            update_board();
            return true;}

    //checking the win for both diagonal
    if(((board[0][0] == board[2][2]) && (board[1][1] == board[2][2] ))||
        ((board[0][2] == board[1][1]) && (board[0][2] == board[2][0]))){
        update_board();
        return true;}

    return false;
}

bool pvai::isdraw()
{
    if(!iswon() && moves==10){
        update_board();
        return true;}

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
    moves++;
    if(iswon())
    {
        showGameOverMessage("Game Over", "Ai Won!");
        loseCount=1; winCount = 0; drawCount = 0; state="lose";
        save_state(); saveIntoMemory();
    }
    else if(isdraw())
    {
        showGameOverMessage("Game Over", "Draw!");
        loseCount=0; winCount = 0; drawCount = 1; state="draw";
        save_state(); saveIntoMemory();
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
                    moves++;
                    if(iswon())
                    {
                        showGameOverMessage("Game Over", "Ai Won!");
                        loseCount=1; winCount = 0; drawCount = 0; state="lose";
                        save_state();
                        saveIntoMemory();
                    }
                    else if(isdraw())
                    {
                        showGameOverMessage("Game Over", "Draw!");
                        loseCount=0;  winCount = 0; drawCount = 1; state="draw";
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
                    moves++;
                    if(iswon())
                    {
                        showGameOverMessage("Game Over", "Ai Won!");
                        loseCount=1; winCount = 0; drawCount = 0; state="lose";
                        save_state();
                        saveIntoMemory();
                    }
                    else if(isdraw())
                    {
                        showGameOverMessage("Game Over", "Draw!");
                        loseCount=0;winCount = 0; drawCount = 1; state="draw";
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
    moves++;
    if(iswon())
    {
        showGameOverMessage("Game Over", "Ai Won!");
        loseCount=1; winCount = 0; drawCount = 0; state="lose";
        save_state();
        saveIntoMemory();
    }
    else if(isdraw())
    {
        showGameOverMessage("Game Over", "Draw!");
        loseCount=0; winCount = 0; drawCount = 1; state="draw";
        save_state();
        saveIntoMemory();
    }
}

#include <vector>
#include <algorithm>
#include <utility>
// Function to check if any player has won
bool pvai::isMovesLeft()
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != "X" && board[i][j] != "O")
                return true;
    return false;
}

// Function to evaluate the state of the board
int pvai::evaluate()
{
    // Checking for Rows for X or O victory.
    for (int ro = 0; ro < 3; ro++)
    {
        if (board[ro][0] == board[ro][1] &&
            board[ro][1] == board[ro][2])
        {
            if (board[ro][0] == ai_turn)
                return +10;
            else if (board[ro][0] == player_turn)
                return -10;
        }
    }

    // Checking for Columns for X or O victory.
    for (int col = 0; col < 3; col++)
    {
        if (board[0][col] == board[1][col] &&
            board[1][col] == board[2][col])
        {
            if (board[0][col] == ai_turn)
                return +10;

            else if (board[0][col] == player_turn)
                return -10;
        }
    }

    // Checking for Diagonals for X or O victory.
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
    {
        if (board[0][0] == ai_turn)
            return +10;
        else if (board[0][0] == player_turn)
            return -10;
    }

    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
    {
        if (board[0][2] == ai_turn)
            return +10;
        else if (board[0][2] == player_turn)
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
    if (isMovesLeft() == false)
        return 0;

    // If this maximizer's move
    if (isMax)
    {
        int best = -1000;

        // Prioritize center, corners, and edges
        vector<pair<int, int>> moves = { {1, 1}, {0, 0}, {0, 2}, {2, 0}, {2, 2}, {0, 1}, {1, 0}, {1, 2}, {2, 1} };
        for (auto move : moves)
        {
            int i = move.first;
            int j = move.second;

            // Check if cell is empty
            if (board[i][j] != "X" && board[i][j] != "O")
            {
                QString temp = board[i][j];
                // Make the move
                this->move(i, j, ai_turn);

                // Call minimax recursively and choose the maximum value
                best = max(best, minimax(depth + 1, !isMax, alpha, beta));

                // Undo the move
                this->move(i, j, temp);

                alpha = max(alpha, best);

                // Alpha Beta Pruning
                if (beta <= alpha)
                    return best;
            }
        }
        return best;
    }
    // If this minimizer's move
    else
    {
        int best = 1000;

        // Prioritize center, corners, and edges
        vector<pair<int, int>> moves = { {1, 1}, {0, 0}, {0, 2}, {2, 0}, {2, 2}, {0, 1}, {1, 0}, {1, 2}, {2, 1} };
        for (auto move : moves)
        {
            int i = move.first;
            int j = move.second;

            // Check if cell is empty
            if (board[i][j] != "X" && board[i][j] != "O")
            {
                QString temp = board[i][j];
                // Make the move
                this->move(i, j, player_turn);

                // Call minimax recursively and choose the minimum value
                best = min(best, minimax(depth + 1, !isMax, alpha, beta));

                // Undo the move
                this->move(i, j, temp);

                beta = min(beta, best);

                // Alpha Beta Pruning
                if (beta <= alpha)
                    return best;
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

    // Prioritize center, corners, and edges
    vector<pair<int, int>> moves = { {1, 1}, {0, 0}, {0, 2}, {2, 0}, {2, 2}, {0, 1}, {1, 0}, {1, 2}, {2, 1} };
    for (auto move : moves)
    {
        int i = move.first;
        int j = move.second;

        // Check if cell is empty
        if (board[i][j] != "X" && board[i][j] != "O")
        {
            QString temp = board[i][j];
            // Make the move
            this->move(i, j, ai_turn);

            // Compute evaluation function for this move.
            int moveVal = minimax(0, false, -1000, 1000);

            // Undo the move
            this->move(i, j, temp);

            // If the value of the current move is more than the best value, then update best
            if (moveVal > bestVal)
            {
                bestMove.first = i;
                bestMove.second = j;
                bestVal = moveVal;
            }
        }
    }
    return bestMove;
}

void pvai::handleButtonClick(QPushButton* button)
{
    if(iswon() || isdraw())
    {
        showGameOverMessage("Invalid Move", "Game is already finished.");
    }
    else if (button->text() == "X" || button->text() == "O")
    {
        showGameOverMessage("Invalid Move", "Already occupied. Please, choose another Box.");
    }
    else
    {
        auto start = chrono::high_resolution_clock::now();
        button->setText(player_turn);
        button->setStyleSheet("color: #FF4350");
        moves++; take_turns++;

        // Determine the row and column of the clicked button and update the board state
        if (button == ui->one) { board[0][0] = currentUsername; J00=QString::number(++counter_1);}
        else if (button == ui->two) { board[0][1] = currentUsername;J01=QString::number(++counter_1);}
        else if (button == ui->three) { board[0][2] = currentUsername; J02=QString::number(++counter_1); }
        else if (button == ui->four) { board[1][0] = currentUsername; J10=QString::number(++counter_1); }
        else if (button == ui->five) { board[1][1] = currentUsername; J11=QString::number(++counter_1);}
        else if (button == ui->six) { board[1][2] = currentUsername; J12=QString::number(++counter_1);}
        else if (button == ui->seven) { board[2][0] = currentUsername;J20=QString::number(++counter_1); }
        else if (button == ui->eight) { board[2][1] = currentUsername; J21=QString::number(++counter_1);}
        else if (button == ui->nine) { board[2][2] = currentUsername; J22=QString::number(++counter_1);}

        update();
        auto end = chrono::high_resolution_clock::now();
        chrono::duration<double> elapsed = end - start;
        cout << "Player move response time: " << elapsed.count()*1000 << " ms" << endl;
        if(iswon())
        {
            showGameOverMessage("Game Over", "You Won!");
            loseCount=0; winCount = 1; drawCount = 0; state="win";
            save_state();
            saveIntoMemory();
        }
        else if(isdraw())
        {
            showGameOverMessage("Game Over", "Draw");
            loseCount=0; winCount = 0; drawCount = 1; state="draw";
            save_state();
            saveIntoMemory();
        }
        else if(!iswon() && moves!=10 && mode==1 && take_turns%2==0){
            response_time([this](){ this->computer_turn_easy(); }, "Easy");
            take_turns++;
        }
        else if(!iswon() && moves!=10 && mode==2 && take_turns%2==0){
            response_time([this](){ this->computer_turn_medium(); }, "Medium");
            take_turns++;
        }
        else if(!iswon() && moves!=10 && mode==3 && take_turns%2==0)
        {
            if(moves==2 && (board[1][1] == player_turn || board[0][1] == player_turn ||
                           board[1][0] == player_turn))
            {
                response_time([this](){ this->move(0,0,ai_turn); }, "Hard");
                moves++; take_turns++;
            }
            else if (moves==2 && (board[0][0] == player_turn || board[0][2] == player_turn ||
                                  board[2][0] == player_turn || board[2][2] == player_turn))
            {
                response_time([this](){ this->move(1,1,ai_turn); }, "Hard");
                moves++; take_turns++;
            }
            else if (moves==2 && board[1][2] == player_turn)
            {
                response_time([this](){ this->move(0,2,ai_turn); }, "Hard");
                moves++; take_turns++;
            }
            else if (moves==2 && board[2][1] == player_turn)
            {
                response_time([this](){ this->move(0,1,ai_turn); }, "Hard");
                moves++; take_turns++;
            }
            else
            {
                auto start = chrono::high_resolution_clock::now();
                pair<int, int> bestMove = findBestMove();
                move(bestMove.first,bestMove.second,ai_turn);
                auto end = chrono::high_resolution_clock::now();
                chrono::duration<double> elapsed = end - start;
                cout << "Hard Computer move response time: " << elapsed.count()*1000 << " ms" << endl;
                moves++;    take_turns++;
                if(iswon())
                {
                    showGameOverMessage("Game Over", "Ai Won!");
                    loseCount=1; winCount = 0; drawCount = 0; state="lose";
                    save_state();
                    saveIntoMemory();
                }
                else if(isdraw())
                {
                    showGameOverMessage("Game Over", "Draw!");
                    loseCount=0; winCount = 0; drawCount = 1; state="draw";
                    save_state();
                    saveIntoMemory();
                }
            }
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
}


void pvai::on_main_menu_clicked()
{
    timer->stop();
    this->hide();
    mode_selector mode;
    mode.setModal(true);
    mode.exec();
}

