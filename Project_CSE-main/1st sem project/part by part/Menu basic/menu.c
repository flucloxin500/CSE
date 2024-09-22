#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
#include<ctype.h>
///colour code
#define RESET   "\x1B[0m"
#define RED     "\x1B[31m"
#define GREEN   "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE    "\x1B[34m"
#define MAGENTA "\x1B[35m"
#define CYAN    "\x1B[36m"

/// initializing gotoxy function
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
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



void Menu (){
    system("cls");
    int position =1;
    int keypress = 0;

    while(keypress != 13)
    {
        system("cls");
    arrowHere(1,position);printf("START GAME\n");
    arrowHere(2,position);printf("OPTION\n");
    arrowHere(3,position);printf("ABOUT US\n");
    arrowHere(4,position);printf("EXIT\n");

    keypress = getch();

    if(keypress == 80 && position!=4)
    {
        position++;
    }
    else if(keypress == 72 && position!=1)
    {
        position--;
    }
    else
    {
        position = position;
    }

}
}

void arrowHere(int realposition , int arrowposition)
{
    if(realposition == arrowposition)
       {
           printf("==>");
       }
        else
            {
                printf("   ");
            }



}

int main()
{
    //bigbox_shape();
    Menu();





getch();

}
