
int check_game_status(char board[3][3]) {
    ///Check rows if thats same or not
    for (int i = 0; i < 3; i++) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][0] == board[i][2])
            {
            if (board[i][0] == 'X') {
                return 1; ///player 1 win
            } else {
                return 2; ///player 2 win
            }
        }
    }
    ///Check coloums if thats same or not
    for (int i = 0; i < 3; i++) {
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[0][i] == board[2][i]) {
            if (board[0][i] == 'X') {
                return 1; ///player 1 win
            } else {
                return 2; ///player 2 win
            }
        }
    }

    ///Check left diagonals if thats same or not
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[0][0] == board[2][2]) {
        if (board[0][0] == 'X') {
            return 1; ///player 1 win
        } else {
            return 2; ///player 2 win
        }
    }///Check right diagonals if thats same or not
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[0][2] == board[2][0]) {
        if (board[0][2] == 'X') {
            return 1; ///player 1 win
        } else {
            return 2; ///player 2 win
        }
    }

    /// Check for a draw
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return 0; ///continue playing
            }
        }
    }

    return -1; /// game over ( DRAW )
}


