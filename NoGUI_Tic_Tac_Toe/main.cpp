#include <iostream>
#include <cstdlib>
#include <ctime>
#include "create_board.h"
#include "display_board.h"
#include "gameover.h"
#include "computer_turn_easy.h"
#include "computer_turn_medium.h"
#include "computer_turn_hard.h"
#include "player_mod_2_turn.h"
#include "players_mod_turn.h"
#include <chrono>
using namespace std;

void playLocalGame() {
    create_board(board);
    while(!gameover()) {
        display_board();
        players_mod_turn();
        if(gameover())
            break;
    }
}

void playComputerGame() {   //NOLINT(misc-no-recursion)
    cout << "select level: 1.easy -- 2.medium -- 3.hard\n";
    cin >> level;

    switch (level) {
        case 1:
            create_board(board);
            while(!gameover()) {
                display_board();
                player_mod_2_turn();
                if(gameover())
                    break;
                auto start = chrono::high_resolution_clock::now();
                computer_turn_easy();
                auto end = chrono::high_resolution_clock::now();
                chrono::duration<double> elapsed = end - start;
                cout << "Easy Computer move response time: " << elapsed.count()*1000 << " ms" << endl;
            }
            break;

        case 2:
            create_board(board);
            while(!gameover()) {
                display_board();
                player_mod_2_turn();
                if(gameover())
                    break;
                auto start = chrono::high_resolution_clock::now();
                computer_turn_medium();
                auto end = chrono::high_resolution_clock::now();
                chrono::duration<double> elapsed = end - start;
                cout << "Medium Computer move response time: " << elapsed.count()*1000 << " ms" << endl;
            }
            break;

        case 3:
            create_board(board);
            display_board();
            while (!gameover()) {
                player_mod_2_turn();
                if(gameover())
                    break;
                auto start = chrono::high_resolution_clock::now();
                pair<int, int> bestMove = findBestMove();
                board[bestMove.first][bestMove.second] = 'O';
                auto end = chrono::high_resolution_clock::now();
                chrono::duration<double> elapsed = end - start;
                cout << "Hard Computer move response time: " << elapsed.count()*1000 << " ms" << endl;
                cout << "The board after AI's move:\n";
                display_board();
            }
            break;

        default:
            cout << "Invalid level\n";
            playComputerGame(); // Ask for level again
            break;
    }
}

void displayResult() {
    if(turn == 'X' && !draw) {
        display_board();
        cout << "Congratulations! Player with 'O' has won the game\n";
    } else if(turn == 'O' && !draw) {
        display_board();
        cout << "Congratulations! Player with 'X' has won the game\n";
    } else {
        display_board();
        cout << "GAME DRAW!!!\n";
    }
}

int main() {
    int playing = 1;
    while(playing) {
        srand(time(nullptr));   // NOLINT(cert-msc51-cpp)
        cout << "TIC TAC TOE\n\n";
        cout << "Select Mode\n";
        cout << "input 1 for Local player game\n";
        cout << "input 2 for computer game\n";

        bool out = false;
        while(!out) {
            cin >> mod;
            if(mod == 1) {
                playLocalGame();
                out = true;
            } else if(mod == 2) {
                playComputerGame();
                out = true;
            } else {
                cout << "Invalid mode....please select mode from 1--2\n";
            }
        }

        displayResult();

        cout << "Play again: 1\n";
        cout << "Close game: 0\n";
        cin >> playing;
    }
    return 0;
}