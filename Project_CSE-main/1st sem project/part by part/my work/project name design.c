#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
///colour code
#define RESET   "\x1B[0m"
#define RED     "\x1B[31m"
#define GREEN   "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE    "\x1B[34m"
#define MAGENTA "\x1B[35m"
#define CYAN    "\x1B[36m"
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
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

       // Sleep(700);

       // system("cls");
}


int main() {
    animateProjectname();


   getch();
}

