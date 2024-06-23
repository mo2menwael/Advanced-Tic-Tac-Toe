#include <gtest/gtest.h>
#include "test_tic_tac_toe.h"

// Test case for checking the initialization of the board
TEST(TicTacToeTest, InitializeBoard) {
    TicTacToe game;
    int m = 1;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            EXPECT_EQ(game.getBoardValue(i, j), '0' + (m++));
        }
    }
}

// Test case for checking a valid move
TEST(TicTacToeTest, MakeValidMove) {
    TicTacToe game;
    EXPECT_EQ(game.makeMove(2, 1, 'O'), "Valid move");
    EXPECT_EQ(game.getBoardValue(2, 1), 'O');
}

// Test case for checking a invalid move
TEST(TicTacToeTest, MakeInvalidMove) {
    TicTacToe game;
    game.makeMove(1, 2, 'X');
    EXPECT_EQ(game.makeMove(1, 2, 'X'), "Invalid move");
}

// Test case to check if the game does not allow moves after a win
TEST(TicTacToeTest, NoMoveAfterWin) {
    TicTacToe game;
    game.makeMove(0, 0, 'X');
    game.makeMove(0, 1, 'X');
    game.makeMove(0, 2, 'X');

    EXPECT_EQ(game.makeMove(1, 1, 'O'),"Invalid move");
}

// Test case for checking a horizontal win
TEST(TicTacToeTest, CheckHorizontalWin) {
    TicTacToe game;
    game.makeMove(0, 0, 'X');
    game.makeMove(0, 1, 'X');
    game.makeMove(0, 2, 'X');
    EXPECT_TRUE(game.checkWin());
}

// Test case for checking a vertical win
TEST(TicTacToeTest, CheckVerticalWin) {
    TicTacToe game;
    game.makeMove(0, 1, 'X');
    game.makeMove(1, 1, 'X');
    game.makeMove(2, 1, 'X');
    EXPECT_TRUE(game.checkWin());
}

// Test case for checking a diagonal win
TEST(TicTacToeTest, CheckDiagonalWin) {
    TicTacToe game;
    game.makeMove(0, 0, 'O');
    game.makeMove(1, 1, 'O');
    game.makeMove(2, 2, 'O');
    EXPECT_TRUE(game.checkWin());
}

// Test case for checking a lose
TEST(TicTacToeTest, CheckLose) {
    TicTacToe game;
    game.makeMove(0, 0, 'O');
    game.makeMove(0, 1, 'O');
    game.makeMove(2, 2, 'O');
    EXPECT_FALSE(game.checkWin());
}

// Test case for checking a draw
TEST(TicTacToeTest, CheckDraw) {
    TicTacToe game;
    game.makeMove(0, 0, 'X');   game.makeMove(0, 1, 'X');   game.makeMove(0, 2, 'O');
    game.makeMove(1, 0, 'O');   game.makeMove(1, 1, 'O');   game.makeMove(1, 2, 'X');
    game.makeMove(2, 0, 'X');   game.makeMove(2, 1, 'O');   game.makeMove(2, 2, 'O');
    EXPECT_FALSE(game.checkDraw());
}

// Add main function to run all tests
int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
