//
// Created by Moamen on 4/20/2024.
//

#ifndef ADVANCED_TIC_TAC_TOE_GAMEOVER_H
#define ADVANCED_TIC_TAC_TOE_GAMEOVER_H
#include "computer_turn_hard.h"

bool gameover() {
    //checking the win for Simple Rows and Simple Column
    for(int i=0; i<3; i++) {
        if (((board[i][0] == board[i][1]) && (board[i][0] == board[i][2])) ||
            ((board[0][i] == board[1][i]) && (board[0][i] == board[2][i])))
        {
            draw = false;
            return true;
        }
    }

    //checking the win for both diagonal
    if(((board[0][0] == board[2][2]) && (board[1][1] == board[2][2] ))||
       ((board[0][2] == board[1][1]) && (board[0][2] == board[2][0]))){
        draw = false;
        return true;
    }

    if(!isMovesLeft())
        {draw = true; return true;}
    return false;
}

#endif //ADVANCED_TIC_TAC_TOE_GAMEOVER_H
