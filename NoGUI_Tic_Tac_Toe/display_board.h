//
// Created by Moamen on 4/20/2024.
//

#ifndef ADVANCED_TIC_TAC_TOE_DISPLAY_BOARD_H
#define ADVANCED_TIC_TAC_TOE_DISPLAY_BOARD_H

#include <iostream>
#include "global_variables.h"
using namespace std;

//Function to show the current status of the gaming board
void display_board() {

    //Render Game Board LAYOUT
    cout<<" \n"<<" \n";
    cout<<"  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<" \n";
    cout<<" ____ _____ _____"<<" \n";
    cout<<"  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<" \n";
    cout<<" ____ _____ _____"<<" \n";
    cout<<"  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<" \n";
    cout<<" \n"<<" \n";
}

#endif //ADVANCED_TIC_TAC_TOE_DISPLAY_BOARD_H
