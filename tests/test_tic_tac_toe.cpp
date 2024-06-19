/*#include <gtest/gtest.h>
#include <QApplication>

QString board[3][3]={{0}};

bool iswon()
{
    //checking the win for Simple Rows and Simple Column
    for(int j=0; j<3 ; j++)
        if(((board[j][0] == board[j][1]) && (board[j][0] == board[j][2] ))||
            ((board[0][j] == board[1][j]) && (board[0][j] == board[2][j])))
            return true;

    //checking the win for both diagonal
    if(((board[0][0] == board[2][2]) && (board[1][1] == board[2][2] ))||
        ((board[0][2] == board[1][1]) && (board[0][2] == board[2][0])))
        return true;

    return false;
}

// Test case to check Win condition
TEST(TicTacToeTest, WinCondition) {
    board[0][0]="X";
    board[0][1]="X";
    board[0][2]="X";
    EXPECT_TRUE(iswon());
}

// Add main function to run all tests
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}*/
