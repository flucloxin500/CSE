  // Highlight the current selected box
    int x = currentCol * 15 + 29;
    int y = currentRow * 6 + 8;
    gotoxy(x, y);
    printf(YELLOW"     @\n"RESET);
    gotoxy(x, y + 1);
    printf(YELLOW" %c \n"RESET, board[currentRow][currentCol]);
    gotoxy(x, y + 3);
    printf(YELLOW"\n"RESET);
}
