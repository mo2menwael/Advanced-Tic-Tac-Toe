//
// Created by Moamen on 4/20/2024.
//

#ifndef ADVANCED_TIC_TAC_TOE_PLAYERS_MOD_TURN_H
#define ADVANCED_TIC_TAC_TOE_PLAYERS_MOD_TURN_H

void players_mod_turn() {   //NOLINT(misc-no-recursion)
    if(turn == 'X') {
        cout<<"\n";
        cout<<"Player_1 [X] turn : ";
    }
    else if(turn == 'O') {
        cout<<"Player_2 [O] turn : ";
    }
    //Taking input from user
    cin>> choice;

    if (choice >= 1 && choice <= 9) {
        row = (choice - 1) / 3;
        column = (choice - 1) % 3;
    } else {
        cout << "Invalid place\n";
        players_mod_turn();
    }

    if(turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O') {
        //updating the position for 'X' symbol if it is not already occupied
        board[row][column] = 'X';
        turn = 'O';
    } else if(turn == 'O' && board[row][column] != 'X' || board[row][column] != 'O') {
        //updating the position for 'O' symbol if it is not already occupied
        board[row][column] = 'O';
        turn = 'X';
    } else {
        //if input position already filled
        cout<<"Box already filled!n Please choose another!!nn";
        players_mod_turn();
    }
}

#endif //ADVANCED_TIC_TAC_TOE_PLAYERS_MOD_TURN_H
