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
void EXITdesign()
{
    char a,b;
    int t=50;
    Sleep(300);

   gotoxy(36,14);
   printf(CYAN"3.");
    Sleep(t);
///E start
    for(a=40,b=19; a<=45; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
    Sleep(t);
    }
     for(a=40,b=21; a<=43; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }
    for(a=40,b=23; a<=45; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }
    for(a=40,b=19; b<=23; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }
    ///E end
    ///X start
    for(a=52,b=19; a>=47,b<=23; a--,b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }
    for(a=48,b=19; a<=53,b<=23; a++,b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }
    ///X end
    ///I start
    for(a=55,b=19; a<=59; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }
     for(a=57,b=19; b<=23; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }
    for(a=55,b=23; a<=59; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }
    ///I END
    ///T start
    for(a=61,b=19; a<=67; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }
     for(a=64,b=19; b<=23; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
printf("\n");
    }
    ///T end

    int input;
    gotoxy(40,27);
    printf(GREEN"ENTER YOUR CHOICE : ");
    scanf("%d",&input);
    Sleep(t);

}
int main()
{

   EXITdesign();


    getch();
}


