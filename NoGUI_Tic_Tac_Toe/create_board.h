//
// Created by Moamen on 4/20/2024.
//

#ifndef ADVANCED_TIC_TAC_TOE_CREATE_BOARD_H
#define ADVANCED_TIC_TAC_TOE_CREATE_BOARD_H

void create_board(char aboard[][3]) {
    char num = '1';
    //Checking the game is in continue mode or not
    for (int k = 0; k < 3; k++)
        for (int j = 0; j < 3; j++) {
            aboard[k][j] = num;
            num = (num - '0' + 1) % 10 + '0';   //NOLINT(cppcoreguidelines-narrowing-conversions)
        }
}

#endif //ADVANCED_TIC_TAC_TOE_CREATE_BOARD_H
