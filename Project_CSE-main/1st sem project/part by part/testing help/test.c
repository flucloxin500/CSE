#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
#include<ctype.h>
#include<MMsystem.h>

///colour code
#define RESET   "\x1B[0m"
#define RED     "\x1B[31m"
#define GREEN   "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE    "\x1B[34m"
#define MAGENTA "\x1B[35m"
#define CYAN    "\x1B[36m"

///max console
void MaximizeOutputWindow(void)
{
    HWND consoleWindow = GetConsoleWindow();
    ShowWindow(consoleWindow, SW_MAXIMIZE);
}
/// initializing gotoxy function
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
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

    // Highlight the current selected box
    int x = currentCol * 15 + 29;
    int y = currentRow * 6 + 8;
    gotoxy(x, y+1);
    printf(YELLOW"     @\n"RESET);
}

void projectnamesazzad()
    {


    char a,b;

    int t=1;

    for(a=12,b=5; a>=5; a--)
    {
        gotoxy(a,b);
        printf(CYAN"%c",219);
        Sleep(t);
    }
    for(a=5,b=6; b<=10; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

    for(a=5,b=10; a<=12; a++)
    {
        gotoxy(a,b);
        printf("%c",219);

        Sleep(t);
    }
    for(a=12,b=10; b<=14; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }
    for(a=12,b=14; a>=5; a--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }


    //s is end

    for(a=18,b=14; b>=5; b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }
    for(a=19,b=6; a<=21,b<=10; a++, b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }
    for(a=27,b=14; b<=6; b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }




    for(a=23,b=10; a<=26,b>=5; a++, b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }

    for(a=28,b=6; b<=14; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }


/// m is end



    for(a=42,b=5; a>=34,b<=14; a--,b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

    for(a=37,b=10; a<=47; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

    for(a=42,b=5; a<=50,b<=14; a++,b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

//a is end


    for(a=56,b=5; b<=14; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

    for(a=56,b=5; a<=63; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }


    for(a=63,b=5; b<=10; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }
    for(a=57,b=10; a<=63; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

    for(a=59,b=11; a<=63,b<=14; a++,b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

    //r is end


    for(a=67,b=5; a<=75; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

    for(a=71,b=5; b<=14; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }


// t is end

//tic


    for(a=18,b=18; a<=26; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

    for(a=22,b=19; b<=27; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }


    //t is end


    for(a=30,b=18; a<=36; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

    for(a=33,b=19; b<=27; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

    for(a=30,b=27; a<=36; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

    for(a=33,b=19; b<=27; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }




    for(a=49,b=27; a>=41; a--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

    for(a=41,b=27; b>=18; b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }


    for(a=41,b=18; a<=49; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

    for(a=58,b=18; a<=66; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

    for(a=62,b=18; b<=27; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

    for(a=75,b=18; a>=71,b<=27; a--,b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

    for(a=73,b=23; a<=78; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

    for(a=75,b=18; a<=78,b<=27; a++,b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }


    for(a=97,b=27; a>=88; a--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

    for(a=88,b=27; b>=18; b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }


    for(a=88,b=18; a<=97; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }
    gotoxy(10,1);
    printf("! ");
         PlaySound(TEXT("starting.wav"),NULL,SND_ASYNC);
    system("pause");

    getch();
    }

void bigbox_shape()
{


    /// uporer horizontal line
    int x = 22;
    int y = 5;
    gotoxy(x,y);
    int len = 71;
    for (int i = 0; i < len; i++) {
        printf(MAGENTA"%c"RESET ,0+2500);
    }
    ///bamer vertical line
    int x1 = 22;
    int st_y2= 6;
    int end_y2 = 25;
    for (int y22 = st_y2; y22 <= end_y2; y22++) {
        gotoxy(x1,y22);
        printf( MAGENTA "''" RESET);
    }
    ///daner vertical line
    int x2 = 91;
    int st_y3= 6;
    int end_y3= 25;
    for (int y33 = st_y3; y33<= end_y3; y33++) {
        gotoxy(x2,y33);
        printf( MAGENTA "''" RESET);
    }
    ///nicher horizontal line
    int x3= 22;
    int y3 = 25;
    gotoxy(x3,y3);
    int len2 = 71;
    for (int i2 = 0; i2 < len2; i2++) {
        printf(MAGENTA"%c"RESET, 0+2500);
    }
}




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


void animateProjectname() {
    int i, j;

///entire P
    for (i = 0; i < 9; i++) {
        gotoxy(5, 5 + i);
        printf(CYAN"%c",221);
        Sleep(10);  // Sleep for 10 milliseconds
    }

    for (i = 0; i < 4; i++) {
        gotoxy(15, 5 + i);
        printf("%c",219);
        Sleep(10);
    }



    for (i = 0; i < 11; i++) {
        gotoxy(5+i, 4);
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 11; i++) {
        gotoxy(5+i, 9 );
        printf("%c",219);
        Sleep(10);
    }///P ends

    ///R begin
    for (i = 0; i < 9; i++) {
        gotoxy(18, 5 + i);
        printf("%c",221);
        Sleep(10);  // Sleep for 10 milliseconds
    }

    for (i = 0; i < 4; i++) {
        gotoxy(28, 5 + i);
        printf("%c",219);
        Sleep(10);
    }

    for (i = 0; i < 11; i++) {
        gotoxy(18+i, 4);
        printf("%c",219);
        Sleep(10);
    }
   for (i = 0; i < 11; i++) {
        gotoxy(18+i, 9 );
        printf("%c",219);
        Sleep(10);
    }
    gotoxy(21,10);
    printf("%c",221);
    Sleep(10);
     gotoxy(23,11);
    printf("%c",221);
    Sleep(10);
     gotoxy(25,12);
    printf("%c",221);
    Sleep(10);
     gotoxy(27,13);
    printf("%c",221);
    Sleep(10);
///R ENDS

/// O begins
    for (i = 0; i < 8; i++) {
        gotoxy(31, 5 + i);
        printf("%c",221);
        Sleep(10);  // Sleep for 10 milliseconds
    }
    for (i = 0; i < 8; i++) {
        gotoxy(41, 5 + i);
        printf("%c",221);
        Sleep(10);
    }
     for (i = 1; i < 8; i++) {
        gotoxy(32+i, 4);
        printf("%c",219);
        Sleep(10);
    }
    for (i = 1; i < 8; i++) {
        gotoxy(32+i, 13 );
        printf("%c",219);
        Sleep(10);
    }
    ///O ends

    ///J start
    for (i = 0; i < 9; i++) {
        gotoxy(52, 4 + i);
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 8; i++) {
        gotoxy(44+i, 13 );
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 3; i++) {
        gotoxy(44, 11 + i);
        printf("%c",219);
        Sleep(10);  // Sleep for 10 milliseconds
    }///J ends

    ///E start
    for (i = 0; i < 10; i++) {
        gotoxy(55, 4 + i);
        printf("%c",221);
        Sleep(10);
    }
    for (i = 0; i < 8; i++) {
        gotoxy(55+i, 9 );
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 12; i++) {
        gotoxy(55+i, 4);
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 12; i++) {
        gotoxy(55+i, 13);
        printf("%c",219);
        Sleep(10);
    }///E ends
    ///C begin
    for (i = 0; i < 10; i++) {
        gotoxy(69, 4 + i);
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 11; i++) {
        gotoxy(69+i, 4);
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 2; i++) {
        gotoxy(79, 5 + i);
        printf("%c",219);
        Sleep(10);
    }
     for (i = 0; i < 12; i++) {
        gotoxy(69+i, 13);
        printf("%c",219);
        Sleep(10);
    }/// C ends

    ///T start
    for (i = 0; i < 12; i++) {
        gotoxy(82+i, 4);
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 10; i++) {
        gotoxy(87, 4 + i);
        printf("%c",219);
        Sleep(10);
    }/// T ends

    ///N begin
     for (i = 0; i < 10; i++) {
        gotoxy(40, 15 + i);
        printf("%c",219);
        Sleep(10);
    }
   gotoxy(43,16);
   printf("%c",219);

   gotoxy(44,17);
   printf("%c",219);

   gotoxy(45,18);
   printf("%c",219);

   gotoxy(46,19);
   printf("%c",219);

   gotoxy(47,20);
   printf("%c",219);

   gotoxy(48,21);
   printf("%c",219);

    gotoxy(49,22);
   printf("%c",219);

    gotoxy(50,23);
   printf("%c",219);
    for (i = 0; i < 10; i++) {
        gotoxy(53, 15 + i);
        printf("%c",219);
        Sleep(10);
    }
/// N ends

///A begin
    for (i = 0; i < 10; i++) {
        gotoxy(56, 15 + i);
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 11; i++) {
        gotoxy(56+i, 15);
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 10; i++) {
        gotoxy(66, 15 + i);
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 10; i++) {
        gotoxy(56+i, 20 );
        printf("%c",219);
        Sleep(10);
    } /// A end
    ///M begin
     for (i = 0; i < 10; i++) {
        gotoxy(69, 15 + i);
        printf("%c",219);
        Sleep(10);
    }
    gotoxy(72,16);
   printf("%c",219);

   gotoxy(73,17);
   printf("%c",219);

   gotoxy(74,18);
   printf("%c",219);

   gotoxy(75,18);
   printf("%c",219);

   gotoxy(76,18);
   printf("%c",219);


   gotoxy(78,17);
   printf("%c",219);

   gotoxy(79,16);
   printf("%c",219);

    for (i = 0; i < 10; i++) {
        gotoxy(82, 15 + i);
        printf("%c",219);
        Sleep(10);
    }///m end
    ///E start
    for (i = 0; i < 10; i++) {
        gotoxy(85, 15 + i);
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 8; i++) {
        gotoxy(85+i, 20 );
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 12; i++) {
        gotoxy(85+i, 15);
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 12; i++) {
        gotoxy(85+i, 24);
        printf("%c",219);
        Sleep(10);
        }

        Sleep(700);

        system("cls");
}


///



int check_game_status(char board[3][3]) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][0] == board[i][2])
            {
            if (board[i][0] == 'X') {
                return 1; // Player 1 wins
            } else {
                return 2; // Player 2 wins
            }
        }
    }

    // Check columns
    for (int i = 0; i < 3; i++) {
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[0][i] == board[2][i]) {
            if (board[0][i] == 'X') {
                return 1; // Player 1 wins
            } else {
                return 2; // Player 2 wins
            }
        }
    }

    // Check diagonals
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[0][0] == board[2][2]) {
        if (board[0][0] == 'X') {
            return 1; // Player 1 wins
        } else {
            return 2; // Player 2 wins
        }
    }
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[0][2] == board[2][0]) {
        if (board[0][2] == 'X') {
            return 1; // Player 1 wins
        } else {
            return 2; // Player 2 wins
        }
    }

    // Check for a draw
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return 0; // Game is not over, continue playing
            }
        }
    }

    return -1; // It's a draw
}

void playagain() {
    char choice;
    do {
        system("cls");
        printf("================ Tic Tac Toe ===============\n\n");
        playGame();
        printf("\nDo you want to play again? (Y/N) ");
        printf("\nIf Yes then press Y \n");
        printf("If No then press N \n ");
        choice = getch();
    } while (choice == 'Y' || choice == 'y');
}void playGame() {
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
                    printf("X");
                    player = 2;
                } else {
                    printf("O");
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
        PlaySound(TEXT("Victory Sound Effect.wav"), NULL, SND_ASYNC);
        system("pause");
    }
}

int main() {
    const char sentence[] = "\x1B[35mWELCOME TO OUR PROJECT....\x1B[0m";
    ///this sentence should be visible for 3 sec... Then upcoming process..
    int startX = 5;
    int startY = 5;
    welcome(sentence, startX, startY);
    usleep(1000000);
    system("cls");
    animateProjectname(); ///show (project name) words
    projectnamesazzad();  ///smart tic tac
    playagain();

}
