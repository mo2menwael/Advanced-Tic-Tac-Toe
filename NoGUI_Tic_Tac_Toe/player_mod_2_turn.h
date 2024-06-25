//
// Created by Moamen on 4/20/2024.
//

#ifndef ADVANCED_TIC_TAC_TOE_PLAYER_MOD_2_TURN_H
#define ADVANCED_TIC_TAC_TOE_PLAYER_MOD_2_TURN_H
#include "display_board.h"

void  player_mod_2_turn() {     //NOLINT(misc-no-recursion)
    if(turn == 'X') {
        cout<<"Player_1 [X] turn : "<<"\n";
    }
    cin>> choice;

    if (choice >= 1 && choice <= 9) {
        row = (choice - 1) / 3;
        column = (choice - 1) % 3;
    } else {
        cout << "Invalid place\n";
        player_mod_2_turn();
    }

    if(turn == 'X' && board[row][column] != 'X' || board[row][column] != 'O') {
        //updating the position for 'X' symbol if it is not already occupied
        board[row][column] = 'X';
        turn = 'O';
    } else {
        //if input position already filled
        cout<<"Box already filled!"<< "Please choose another!!";
        player_mod_2_turn();
    }
    display_board();
}

#endif //ADVANCED_TIC_TAC_TOE_PLAYER_MOD_2_TURN_H
