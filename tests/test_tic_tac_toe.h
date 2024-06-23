#ifndef TEST_TIC_TAC_TOE_H
#define TEST_TIC_TAC_TOE_H
#include <iostream>

class TicTacToe {
public:
    TicTacToe();
    std::string makeMove(int row, int col, char player);
    char getBoardValue(int row, int col) const;
    bool checkWin() const;
    bool checkDraw() const;
    int move = 1;
    int m = 1;
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

#endif // TEST_TIC_TAC_TOE_H
