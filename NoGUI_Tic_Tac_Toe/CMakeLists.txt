cmake_minimum_required(VERSION 3.28)
project(NoGUI_Tic_Tac_Toe)

set(CMAKE_CXX_STANDARD 17)

add_executable(Tic_Tac_Toe main.cpp
        create_board.h
        display_board.h
        gameover.h
        computer_turn_easy.h
        computer_turn_medium.h
        computer_turn_hard.h
        global_variables.h
        players_mod_turn.h
        player_mod_2_turn.h
)
