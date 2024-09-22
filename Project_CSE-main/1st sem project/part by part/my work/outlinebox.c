#include <stdio.h>
#include <windows.h>
#include <unistd.h>


///colour code
#define RESET   "\x1B[0m"
#define RED     "\x1B[31m"
#define GREEN   "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE    "\x1B[34m"
#define MAGENTA "\x1B[35m"
#define CYAN    "\x1B[36m"
void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void outlinebox()
{
    char a,b;

///uporer
    for(a=2,b=0; a<=118; a+=2)
    {
        gotoxy(a,b);
        printf(CYAN"X");

    }
    for(a=1,b=0; a<118; a+=2)
    {
        gotoxy(a,b);
        printf("O");

    }
    ///nicher
    for(a=2,b=29; a<=118; a+=2)
    {
        gotoxy(a,b);
        printf("X");

    } for(a=1,b=29; a<118; a+=2)
    {
        gotoxy(a,b);
        printf("O");

    }
    ///bamer
    for(a=1,b=2; b<30; b+=2)
    {
        gotoxy(a,b);
        printf("X");

    }
    for(a=1,b=1; b<30; b+=2)
    {
        gotoxy(a,b);
        printf("O");

    }
     ///daner
    for(a=118,b=2; b<30; b+=2)
    {
        gotoxy(a,b);
        printf("X");

    }
    for(a=118,b=1; b<30; b+=2)
    {
        gotoxy(a,b);
        printf("O");

    }


}
int main()
{

   outlinebox();


    getch();
}


