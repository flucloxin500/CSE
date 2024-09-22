
void board_structure(char board[3][3], int currentRow, int currentCol) { /// MAIN BOARD STRUCTURE!!!
    system("cls");
    printf("\n");

    gotoxy(29, 5);
    printf(CYAN"              |            |            \n"RESET);
    gotoxy(29, 6);
    printf(CYAN"              |            |            \n"RESET);
    gotoxy(29, 7);
    printf(CYAN"              |            |            \n"RESET);
    gotoxy(29, 8);
    printf(CYAN"       %c      |     %c      |      %c     \n"RESET, board[0][0], board[0][1], board[0][2]);
    gotoxy(29, 9);
    printf(CYAN"              |            |            \n"RESET);
    gotoxy(29, 10);
    printf(CYAN"--------------|------------|--------------\n"RESET);
    gotoxy(29, 11);
    printf(CYAN"              |            |            \n"RESET);
    gotoxy(29, 12);
    printf(CYAN"              |            |            \n"RESET);
    gotoxy(29, 13);
    printf(CYAN"       %c      |     %c      |       %c    \n"RESET, board[1][0], board[1][1], board[1][2]);
    gotoxy(29, 14);
    printf(CYAN"              |            |            \n"RESET);
    gotoxy(29, 15);
    printf(CYAN"              |            |            \n"RESET);
    gotoxy(29, 16);
    printf(CYAN"--------------|------------|--------------\n"RESET);
    gotoxy(29, 17);
    printf(CYAN"              |            |            \n"RESET);
    gotoxy(29, 18);
    printf(CYAN"         %c    |      %c     |       %c    \n"RESET, board[2][0], board[2][1], board[2][2]);
    gotoxy(29, 19);
    printf(CYAN"              |            |            \n"RESET);
    gotoxy(29, 20);
    printf(CYAN"              |            |            \n"RESET);
    gotoxy(29, 21);
    printf(CYAN"              |            |            \n"RESET);
    printf("\n");
}
