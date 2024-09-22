/// About Us

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

    int a,b,t = 20 ;

    gotoxy(36,14);
    Sleep(t);

    // A start

    for(a=40,b=17; b>=12; b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }



    for(a=40,b=12; a<=45; a++)
    {
        gotoxy(a,b);
        printf("%c",219);

    }


    for(a=45,b=12; b<=17; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }


    for(a=40,b=14; a<=44; a++)
    {
        gotoxy(a,b);
        printf("%c",219);

    }


    /// A end

    /// B start

    for ( a = 48 , b =  12  ; b<= 17; b++)
    {
        gotoxy(a,b) ;
        printf("%c%c",221,221 );
        Sleep(t);
    }


    for ( a = 50 , b =  12  ; a<= 53 ; a++)
    {
        gotoxy(a,b) ;
        printf("%c",219);
        Sleep(t);
    }



    for ( a = 54 , b =  13  ;  b<= 14 ; b++)
    {
        gotoxy(a,b) ;
        printf("%c",254);
        Sleep(t);
    }


    for ( a = 50 , b =  15  ; a<= 53 ; a++)
    {
        gotoxy(a,b) ;
        printf("%c",219);
        Sleep(t);
    }

    for ( a = 54 , b =  16  ; b<= 17 ; b++)
    {
        gotoxy(a,b) ;
        printf("%c",254);
        Sleep(t);
    }

    for ( a = 53 , b =  17  ; a>= 50 ; a--)
    {
        gotoxy(a,b) ;
        printf("%c",219);
        Sleep(t);
    }


    /// B end

    /// O start

    for ( a = 58 , b =  12  ; a <= 62; a++)
    {
        gotoxy(a,b) ;
        printf("%c",219);
        Sleep(t);
    }


    for ( a = 63 , b =  13  ; b <= 16 ; b++)
    {
        gotoxy(a,b) ;
        printf("%c",219);
        Sleep(t);
    }



    for (a = 62 ,b =  17  ;  a >= 58 ; a--)
    {
        gotoxy(a,b) ;
        printf("%c",219);
        Sleep(t);
    }


    for ( a = 57 , b =  16  ; b>= 13 ; b--)
    {
        gotoxy(a,b) ;
        printf("%c",219);
        Sleep(t);
    }

    /// O end

    /// U start

    for ( a = 66, b =  12  ; b<= 17 ; b++)
    {
        gotoxy(a,b) ;
        printf("%c",219);
        Sleep(t);
    }

    for ( a = 67 , b =  17  ; a<= 70 ; a++)
    {
        gotoxy(a,b) ;
        printf("%c",219);
        Sleep(t);
    }

    for ( a = 71, b =  17  ; b >= 12 ; b--)
    {
        gotoxy(a,b) ;
        printf("%c",219);
        Sleep(t);
    }

    /// U end

    /// T start

    for ( a = 74, b =  12  ; a<= 80 ; a++)
    {
        gotoxy(a,b) ;
        printf("%c",219);
        Sleep(t);
    }

    for ( a = 77 , b =  13  ; b<= 17 ; b++)
    {
        gotoxy(a,b) ;
        printf("%c",219);
        Sleep(t);
    }


    /// T end

    /// U start

    for ( a = 86, b =  12  ; b<= 17 ; b++)
    {
        gotoxy(a,b) ;
        printf("%c",219);
        Sleep(t);
    }

    for ( a = 87 , b =  17  ; a<= 91 ; a++)
    {
        gotoxy(a,b) ;
        printf("%c",219);
        Sleep(t);
    }

    for ( a = 91, b =  17  ; b >= 12 ; b--)
    {
        gotoxy(a,b) ;
        printf("%c",219);
        Sleep(t);
    }

    /// U end

    /// S start

    for ( a = 98, b =  12  ; a >= 94 ; a--)
    {
        gotoxy(a,b) ;
        printf("%c",219);
    }

    for ( a = 94, b = 13  ; b<= 15 ; b++)
    {
        gotoxy(a,b) ;
        printf("%c",219);
        Sleep(t);
    }

    for ( a = 95, b =  15  ; a <= 98 ; a++)
    {
        gotoxy(a,b) ;
        printf("%c",219);
        Sleep(t);
    }


    for ( a = 98, b =  15  ; b <= 16 ; b++)
    {
        gotoxy(a,b) ;
        printf("%c",219);
        Sleep(t);
    }


    for ( a = 98, b =  17  ; a >= 94 ; a--)
    {
        gotoxy(a,b) ;
        printf("%c",219);
        Sleep(t);
    }


    /// S end

    getchar() ;

}
