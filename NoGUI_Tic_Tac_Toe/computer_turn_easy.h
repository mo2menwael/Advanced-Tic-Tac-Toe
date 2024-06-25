//
// Created by Moamen on 4/20/2024.
//

#ifndef ADVANCED_TIC_TAC_TOE_COMPUTER_TURN_EASY_H
#define ADVANCED_TIC_TAC_TOE_COMPUTER_TURN_EASY_H

void computer_turn_easy(){
    srand(time(nullptr));     // NOLINT(cert-msc51-cpp)
    do {
        row = rand() % 3;   // NOLINT(cert-msc30-c, cert-msc50-cpp)
        column = rand() % 3;    // NOLINT(cert-msc30-c, cert-msc50-cpp)
    } while (board[row][column] == 'X' || board[row][column] == 'O');
    board[row][column] = 'O';
    turn = 'X';
}

#endif //ADVANCED_TIC_TAC_TOE_COMPUTER_TURN_EASY_H
