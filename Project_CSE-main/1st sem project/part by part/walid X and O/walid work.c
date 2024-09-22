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

int main ()

{
    int x,y,t = 50 ;

/*

    /// X
    for ( x = 25 , y = 5  ; x <= 27 , y <= 7 ; x++ , y++)
    {

        gotoxy( x , y);
        printf("\\");fflush(stdout);
        Sleep(t);

    }
    for ( x = 27 , y = 5  ; x <= 25 , y <= 7 ; x-- , y++)
    {

        gotoxy( x , y);
        printf("/");fflush(stdout);
        Sleep(t);

    }

*/



    /// Big O

    for ( x = 25 , y = 5  ;  y <= 6 ; y++)
    {

        gotoxy( x , y);
        printf("|");fflush(stdout);
        Sleep(t);

    }

    gotoxy( 26 , 7);
    printf("\\");fflush(stdout);
    Sleep(t);

    for ( x = 28 , y = 7  ;  x <= 29 ; x++)
    {

        gotoxy( x , y);
        printf("_");fflush(stdout);
        Sleep(t);

    }

    gotoxy( 31 , 7);
    printf("/");fflush(stdout);
    Sleep(t);
    for ( x = 32 , y = 6  ;  y >= 5 ; y--)
    {

        gotoxy( x , y);
        printf("|");fflush(stdout);
        Sleep(t);

    }
    gotoxy( 31 , 4);
    printf("\\");fflush(stdout);
    Sleep(t);
    for ( x = 29 , y = 3  ;  x >= 28 ; x--)
    {

        gotoxy( x , y);
        printf("_");fflush(stdout);
        Sleep(t);

    }

    gotoxy( 26 , 4);
    printf("/");fflush(stdout);
    Sleep(t);


/*
    /// Little O
    for ( x = 25 , y = 5  ;  y <= 5 ; y++)
    {

        gotoxy( x , y);
        printf("|");fflush(stdout);
        Sleep(t);

    }

    gotoxy( 26 , 6);
    printf("\\");fflush(stdout);
    Sleep(t);

    for ( x = 27 , y = 6  ;  x <= 27 ; x++)
    {

        gotoxy( x , y);
        printf("_");fflush(stdout);
        Sleep(t);

    }

    gotoxy( 28 , 6);
    printf("/");fflush(stdout);
    Sleep(t);
    for ( x = 29 , y = 5  ;  y >= 5 ; y--)
    {

        gotoxy( x , y);
        printf("|");fflush(stdout);
        Sleep(t);

    }
    gotoxy( 28 , 4);
    printf("\\");fflush(stdout);
    Sleep(t);
    for ( x = 27 , y = 3  ;  x >= 27 ; x--)
    {

        gotoxy( x , y);
        printf("_");fflush(stdout);
        Sleep(t);

    }

    gotoxy( 26 , 4);
    printf("/");fflush(stdout);
    Sleep(t);



    getchar();
*/
getchar();
    return 0 ;
}
