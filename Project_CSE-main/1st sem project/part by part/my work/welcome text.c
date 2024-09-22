void welcome(const char* sentence, int start_X, int start_Y) {
    int sentenceLength = strlen(sentence);
    int x = start_X;
    int y = start_Y;
    gotoxy(x, y);
    for (int i = 0; i < sentenceLength; i++) {
        printf("%c", sentence[i]);
        fflush(stdout);
        usleep(100000);
        x++;
        gotoxy(x, y);
    }
}

