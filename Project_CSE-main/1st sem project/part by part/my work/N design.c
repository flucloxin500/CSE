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

void Ndesign()
{
    char a,b;
    for(a=48,b=19; a<=53,b<=23; a++,b++)
    {
        gotoxy(a,b);
        printf("%c",219);

    }
     for(a=47,b=19; b<=23; b++)
    {
        gotoxy(a,b);
        printf("%c",219);

    }
     for(a=53,b=19; b<=23; b++)
    {
        gotoxy(a,b);
        printf("%c",219);

    }

}
int main()
{

   Ndesign();


    getch();
}


