#ifndef TEST_TIC_TAC_TOE_H
#define TEST_TIC_TAC_TOE_H

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

class TicTacToe {
public:
    TicTacToe();
    std::string makeMove(int row, int col, char player);
    char getBoardValue(int row, int col) const;
    bool checkWin() const;
    bool checkDraw() const;
    bool gameover() const;
    void computer_turn_easy();
    void computer_turn_medium();
    void computer_turn_hard();
    int isMovesLeft();
    int evaluate();
    int minimax(int depth, bool isMax, int alpha, int beta);
    pair<int, int> findBestMove();
    int move = 1;
    int m = 1;
    char turn = 'X';
private:
    char board[3][3];
};

TicTacToe::TicTacToe() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            board[i][j] = '0' + (m++);
        }
    }
}

std::string TicTacToe::makeMove(int row, int col, char XO) {
    if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] != 'X' && board[row][col] != 'O' && !checkWin() && !checkDraw()) {
        board[row][col] = XO;
        move++;
        return "Valid move";
    }
    return "Invalid move";
}

char TicTacToe::getBoardValue(int row, int col) const {
    if (row >= 0 && row < 3 && col >= 0 && col < 3) {
        return board[row][col];
    }
    return ' ';
}

bool TicTacToe::checkWin() const {
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

bool TicTacToe::checkDraw() const {
    if(!checkWin() && move == 10)
        return true;

    return false;
}

bool TicTacToe::gameover() const {
    if(checkWin() || checkDraw())
        return true;

    return false;
}

void TicTacToe::computer_turn_easy(){
    srand(time(0));
    int r,c;
    do {
        r = rand() % 3;
        c = rand() % 3;
    } while (board[r][c] == 'X' || board[r][c] == 'O');
    board[r][c] = 'O';
    move++;
    turn = 'X';
}

void TicTacToe::computer_turn_medium() {
    //Check for winning move
    for (auto & i : board) {
        for (char & j : i) {
            if (j != 'X' && j != 'O') {
                char temp = j;
                j = 'O';
                if (gameover()) {
                    turn = 'X'; // Switch to the player's turn
                    move++;
                    return;
                }
                j = temp; // Undo the move
            }
        }
    }
    // Block opponent's winning move
    for (auto & i : board) {
        for (char & j : i) {
            if (j != 'X' && j != 'O') {
                char temp = j;
                j = 'X';
                if (gameover()) {
                    j = 'O'; // Block the opponent's winning move
                    turn = 'X'; // Switch to the player's turn
                    move++;
                    return;
                }
                j = temp; // Undo the move
            }
        }
    }
    // If no winning move or blocking move, make a random move
    srand(time(0));
    int r,c;
    do {
        r = rand() % 3;
        c = rand() % 3;
    } while (board[r][c] == 'X' || board[r][c] == 'O');
    board[r][c] = 'O';
    move++;
    turn = 'X';
}

// Function to check if any player has won
int TicTacToe::isMovesLeft()
{
    for (int i = 0; i<3; i++)
        for (int j = 0; j<3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return true;
    return false;
}

// Function to evaluate the state of the board
int TicTacToe::evaluate()
{
    // Checking for Rows for X or O victory.
    for (int row = 0; row<3; row++)
    {
        if (board[row][0]==board[row][1] &&
            board[row][1]==board[row][2])
        {
            if (board[row][0]=='O')
                return +10;
            else if (board[row][0]=='X')
                return -10;
        }
    }

    // Checking for Columns for X or O victory.
    for (int col = 0; col<3; col++)
    {
        if (board[0][col]==board[1][col] &&
            board[1][col]==board[2][col])
        {
            if (board[0][col]=='O')
                return +10;

            else if (board[0][col]=='X')
                return -10;
        }
    }

    // Checking for Diagonals for X or O victory.
    if (board[0][0]==board[1][1] && board[1][1]==board[2][2])
    {
        if (board[0][0]=='O')
            return +10;
        else if (board[0][0]=='X')
            return -10;
    }

    if (board[0][2]==board[1][1] && board[1][1]==board[2][0])
    {
        if (board[0][2]=='O')
            return +10;
        else if (board[0][2]=='X')
            return -10;
    }

    // Else if none of them have won then return 0
    return 0;
}

// Function to perform the minimax algorithm
int TicTacToe::minimax(int depth, bool isMax, int alpha, int beta)
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
                if (board[i][j] != 'X' && board[i][j] != 'O')
                {
                    char temp =board[i][j];
                    // Make the move
                    board[i][j] = 'O';

                    // Call minimax recursively and choose the maximum value
                    best = max( best, minimax(depth+1, !isMax, alpha, beta) );

                    // Undo the move
                    board[i][j] = temp;

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
                if (board[i][j] != 'X' && board[i][j] != 'O')
                {
                    char temp=board[i][j];
                    // Make the move
                    board[i][j] = 'X';

                    // Call minimax recursively and choose the minimum value
                    best = min(best, minimax(depth+1, !isMax, alpha, beta));

                    // Undo the move
                    board[i][j] =temp;

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
pair<int, int> TicTacToe::findBestMove()
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
            if (board[i][j] != 'X' && board[i][j] != 'O')
            {
                char temp=board[i][j] ;
                // Make the move
                board[i][j] = 'O';

                // compute evaluation function for this move.
                int moveVal = minimax(0, false, -1000, 1000);

                // Undo the move
                board[i][j] = temp;

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
    turn = 'X';
    return bestMove;
}

void TicTacToe::computer_turn_hard()
{
    pair<int, int> bestMove = findBestMove();
    board[bestMove.first][bestMove.second] = 'O';
    move++;
}

#endif // TEST_TIC_TAC_TOE_H
