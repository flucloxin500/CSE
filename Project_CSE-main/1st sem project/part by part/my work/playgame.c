#include <stdio.h>
#include <conio.h>
#include <windows.h>

void playGame() {
    int player = 1;
    int currentRow = 0;
    int currentCol = 0;
    int gameStatus = 0;
    char board[3][3] =
    {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };
    while (gameStatus == 0) {
        board_structure(board, currentRow, currentCol);
        gotoxy(23,26);
        printf("Player %d's turn (Use W/A/S/D or arrow keys to move, and press Enter to select): ", player);
        char move = getch();
        if (move == 'w' || move == 'W' || move == 72) {
            currentRow = (currentRow - 1 + 3) % 3;
        } else if (move == 'a' || move == 'A' || move == 75) {
            currentCol = (currentCol - 1 + 3) % 3;
        } else if (move == 's' || move == 'S' || move == 80) {
            currentRow = (currentRow + 1) % 3;
        } else if (move == 'd' || move == 'D' || move == 77) {
            currentCol = (currentCol + 1) % 3;
        } else if (move == '\r') {
            if (board[currentRow][currentCol] == ' ') {
                if (player == 1) {
                    board[currentRow][currentCol] = 'X';
                    player = 2;
                } else {
                    board[currentRow][currentCol] = 'O';
                    player = 1;
                }
                gameStatus = check_game_status(board);
            }
        }
    }

    board_structure(board, currentRow, currentCol);

    if (gameStatus == -1) {
        printf("It's a draw!\n");
    } else {
        printf("Player %d wins!\n", gameStatus);
        PlaySound(TEXT("testhap.wav"),NULL,SND_ASYNC);
        system("pause");

    }
}
int main() {

    playGame();
    return 0;
}
