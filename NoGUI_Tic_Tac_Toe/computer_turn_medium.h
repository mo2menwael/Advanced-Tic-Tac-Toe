//
// Created by Moamen on 4/20/2024.
//

#ifndef ADVANCED_TIC_TAC_TOE_COMPUTER_TURN_MEDIUM_H
#define ADVANCED_TIC_TAC_TOE_COMPUTER_TURN_MEDIUM_H

void computer_turn_medium() {
    //Check for winning move
    for (auto & i : board) {
        for (char & j : i) {
            if (j != 'X' && j != 'O') {
                char temp = j;
                j = 'O';
                if (gameover()) {
                    turn = 'X'; // Switch to the player's turn
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
                    return;
                }
                j = temp; // Undo the move
            }
        }
    }
    // If no winning move or blocking move, make a random move
    srand(time(nullptr));   // NOLINT(cert-msc51-cpp)
    do {
        row = rand() % 3;   // NOLINT(cert-msc30-c, cert-msc50-cpp)
        column = rand() % 3;    // NOLINT(cert-msc30-c, cert-msc50-cpp)
    } while (board[row][column] == 'X' || board[row][column] == 'O');
    board[row][column] = 'O';
    turn = 'X';
}

#endif //ADVANCED_TIC_TAC_TOE_COMPUTER_TURN_MEDIUM_H
