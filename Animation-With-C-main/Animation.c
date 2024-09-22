#include<stdio.h>
#include<windows.h>
#include<conio.h>

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{

    int x,y,t = 100 ;


    for (  y = 2  ; x <= 2 ; x++)
    {
        Sleep(t);
        gotoxy( x , y);
        printf("||");fflush(stdout);

    }
    for ( x = 3 , y = 3  ; x <= 11 , y<= 11 ; x++ , y++)
    {
        Sleep(t);
        gotoxy( x , y);
        printf("|");fflush(stdout);

    }
    for ( x = 11 , y = 11  ; x <= 15 , y>= 7; x++ , y--)
    {
        Sleep(t);
        gotoxy( x , y);
        printf("|");fflush(stdout);

    }
    for ( x = 15 , y = 7  ; x <= 19 , y<= 11; x++ , y++)
    {
        Sleep(t);
        gotoxy( x , y);
        printf("|");fflush(stdout);

    }
    for ( x = 19 , y = 11  ; x <= 11 , y>= 3 ; x++ , y--)
    {
        Sleep(t);
        gotoxy( x , y);
        printf("|");fflush(stdout);

    }

    for ( x = 25 , y = 11  ; x <= 31 , y>= 3 ; x++ , y--)
    {
        Sleep(t);
        gotoxy( x , y);
        printf("|");fflush(stdout);

    }

    for ( x = 33 , y = 3  ; x <= 38 , y<= 11 ; x++ , y++)
    {
        Sleep(t);
        gotoxy( x , y);
        printf("|");fflush(stdout);

    }

    for ( x = 29 , y = 8  ; x <= 37  ; x++ )
    {
        Sleep(t);
        gotoxy( x , y);
        printf("|");fflush(stdout);

    }

    for ( x = 45 , y = 3  ; y <= 11  ; y++ )
    {
        Sleep(t);
        gotoxy( x , y);
        printf("|");fflush(stdout);

    }
    for ( x = 46 , y = 11  ; x <= 55 ; x++ )
    {
        Sleep(t);
        gotoxy( x , y);
        printf("|");fflush(stdout);

    }
    for ( x = 58 , y = 3 ; x <= 68 ; x++ )
    {
        Sleep(t);
        gotoxy( x , y);
        printf("|");fflush(stdout);

    }
    for ( x = 63 , y = 4 ;  y <=11 ; y++ )
    {
        Sleep(t);
        gotoxy( x , y);
        printf("|");fflush(stdout);

    }
    for ( x = 58 , y = 11 ; x <= 68 ; x++ )
    {
        Sleep(t);
        gotoxy( x , y);
        printf("|");fflush(stdout);

    }
    for ( x = 72 , y = 3 ; y <= 11 ; y++ )
    {
        Sleep(t);
        gotoxy( x , y);
        printf("|");fflush(stdout);

    }

    for ( x = 73 , y = 3 ; x <= 77 ; x++ )
    {
        Sleep(t);
        gotoxy( x , y);
        printf("|");fflush(stdout);

    }
    for ( x = 73 , y = 11 ; x <= 77 ; x++ )
    {
        Sleep(t);
        gotoxy( x , y);
        printf("|");fflush(stdout);

    }

    for ( x = 79 , y = 5 ; y <= 9 ; y++ )
    {
        Sleep(t);
        gotoxy( x , y);
        printf("|");fflush(stdout);

    }


        Sleep(t);
        gotoxy( 78 , 4);
        printf("|");fflush(stdout);

        Sleep(t);
        gotoxy( 78 , 10);
        printf("|");fflush(stdout);
    getchar();
    return 0;
}
