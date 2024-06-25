//
// Created by Moamen on 4/22/2024.
//

#ifndef ADVANCED_TIC_TAC_TOE_COMPUTER_TURN_HARD_H
#define ADVANCED_TIC_TAC_TOE_COMPUTER_TURN_HARD_H

// Function to check if any player has won
int isMovesLeft()
{
    for (int i = 0; i<3; i++)
        for (int j = 0; j<3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return true;
    return false;
}

// Function to evaluate the state of the board
int evaluate()
{
    // Checking for Rows for X or O victory.
    for (int row = 0; row<3; row++)
    {
        if (board[row][0]==board[row][1] &&
            board[row][1]==board[row][2])
        {
            if (board[row][0]=='O')
                return +10;
            else if (board[row][0]=='X')
                return -10;
        }
    }

    // Checking for Columns for X or O victory.
    for (int col = 0; col<3; col++)
    {
        if (board[0][col]==board[1][col] &&
            board[1][col]==board[2][col])
        {
            if (board[0][col]=='O')
                return +10;

            else if (board[0][col]=='X')
                return -10;
        }
    }

    // Checking for Diagonals for X or O victory.
    if (board[0][0]==board[1][1] && board[1][1]==board[2][2])
    {
        if (board[0][0]=='O')
            return +10;
        else if (board[0][0]=='X')
            return -10;
    }

    if (board[0][2]==board[1][1] && board[1][1]==board[2][0])
    {
        if (board[0][2]=='O')
            return +10;
        else if (board[0][2]=='X')
            return -10;
    }

    // Else if none of them have won then return 0
    return 0;
}

// Function to perform the minimax algorithm
int minimax(int depth, bool isMax, int alpha, int beta)
{
    int score = evaluate();

    // If Maximizer has won the game return his/her evaluated score
    if (score == 10)
        return score;

    // If Minimizer has won the game return his/her evaluated score
    if (score == -10)
        return score;

    // If there are no more moves and no winner then it is a tie
    if (isMovesLeft()==false)
        return 0;

    // If this maximizer's move
    if (isMax)
    {
        int best = -1000;

        // Traverse all cells
        for (int i = 0; i<3; i++)
        {
            for (int j = 0; j<3; j++)
            {
                // Check if cell is empty
                if (board[i][j] != 'X' && board[i][j] != 'O')
                {
                    char temp =board[i][j];
                    // Make the move
                    board[i][j] = 'O';

                    // Call minimax recursively and choose the maximum value
                    best = max( best, minimax(depth+1, !isMax, alpha, beta) );

                    // Undo the move
                    board[i][j] = temp;

                    alpha = max(alpha, best);

                    // Alpha Beta Pruning
                    if(beta <= alpha)
                        return best;
                }
            }
        }
        return best;
    }

        // If this minimizer's move
    else
    {
        int best = 1000;

        // Traverse all cells
        for (int i = 0; i<3; i++)
        {
            for (int j = 0; j<3; j++)
            {
                // Check if cell is empty
                if (board[i][j] != 'X' && board[i][j] != 'O')
                {
                    char temp=board[i][j];
                    // Make the move
                    board[i][j] = 'X';

                    // Call minimax recursively and choose the minimum value
                    best = min(best, minimax(depth+1, !isMax, alpha, beta));

                    // Undo the move
                    board[i][j] =temp;

                    beta = min(beta, best);

                    // Alpha Beta Pruning
                    if(beta <= alpha)
                        return best;
                }
            }
        }
        return best;
    }
}

// Function to find the best move for the AI
pair<int, int> findBestMove()
{
    int bestVal = -1000;
    pair<int, int> bestMove;
    bestMove.first = -1;
    bestMove.second = -1;

    // Traverse all cells, evaluate minimax function for all empty cells. And return the cell with optimal value.
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            // Check if cell is empty
            if (board[i][j] != 'X' && board[i][j] != 'O')
            {
                char temp=board[i][j] ;
                // Make the move
                board[i][j] = 'O';

                // compute evaluation function for this move.
                int moveVal = minimax(0, false, -1000, 1000);

                // Undo the move
                board[i][j] = temp;

                // If the value of the current move is more than the best value, then update best
                if (moveVal > bestVal)
                {
                    bestMove.first = i;
                    bestMove.second = j;
                    bestVal = moveVal;
                }
            }
        }
    }
    turn = 'X';
    return bestMove;
}



#endif //ADVANCED_TIC_TAC_TOE_COMPUTER_TURN_HARD_H
