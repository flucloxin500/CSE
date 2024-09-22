#include<stdio.h>
#include<windows.h>
#include<conio.h>

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
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void aboutus()
    {

          system("cls"); ///clear the console
    printf("\n");
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

    }
    for(a=1,b=29; a<118; a+=2)
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
         int x,y,t = 2 ;




    //top left star
    Sleep(t) ;
    gotoxy( 8 , 3 ) ;
    printf(CYAN"**");fflush(stdout);
    // bam theke daane(upore)
    for ( x = 8 , y = 2 ; x <= 107 ; x++ )
    {
        Sleep(t);
        gotoxy( x , y);
        printf("''");fflush(stdout);

    }
    // upor theke niche ( bame )
    for ( x = 8 , y = 4 ; y <= 24 ; y++ )

    {
        Sleep(t);
        gotoxy( x , y);
        printf("''");fflush(stdout);

    }
    // bottom left star
    Sleep(t) ;
    gotoxy( 8 , 25 ) ;
    printf("**");fflush(stdout);

    // bottom right star

    Sleep(t) ;
    gotoxy(107 , 25 ) ;
    printf("**");fflush(stdout);

    // bam theke daane(niche)

    for ( x = 107 , y = 26 ; x >= 8 ; x-- )
    {
        Sleep(t);
        gotoxy( x , y);
        printf("''");fflush(stdout);

    }

    // upor theke niche ( Daane )
    for ( x = 107 , y = 24 ; y >= 4 ; y-- )
    {
        Sleep(t);
        gotoxy( x , y);
        printf("''");fflush(stdout);

    }

    // top right star
    Sleep(t) ;
    gotoxy( 107 , 3 ) ;
    printf("**"RESET);fflush(stdout);








    /// A

    for ( x = 20 , y = 8  ; x <= 23 , y>= 4 ; x++ , y--)
    {
        Sleep(t);
        gotoxy( x , y);
        printf(MAGENTA"||");fflush(stdout);

    }

    for ( x = 25 , y = 4 ; x <= 28 , y<= 8 ; x++ , y++)
    {
        Sleep(t);
        gotoxy( x , y);
        printf("||");fflush(stdout);

    }


    for ( x = 23 , y = 6  ; x <= 26  ; x++ )
    {
        Sleep(t);
        gotoxy( x , y);
        printf("||");fflush(stdout);

    }

    /// B

    for ( x = 32, y = 8  ; y >= 4  ; y-- )
    {
        Sleep(t);
        gotoxy( x , y);
        printf("||");fflush(stdout);

    }
    for ( x = 33, y = 4  ; x <= 34  ; x++ )
    {
        Sleep(t);
        gotoxy( x , y);
        printf("||");fflush(stdout);

    }
    Sleep(t) ;
    gotoxy( 35 , 5 ) ;
    printf("||");fflush(stdout);

    for ( x = 34, y = 6  ; x >= 33  ; x-- )
    {
        Sleep(t);
        gotoxy( x , y);
        printf("||");fflush(stdout);

    }
    Sleep(t) ;
    gotoxy( 35 , 7 ) ;
    printf("||");fflush(stdout);

    for ( x = 34, y = 8 ; x >= 33  ; x-- )
    {
        Sleep(t);
        gotoxy( x , y);
        printf("||");fflush(stdout);

    }





    // O




    for ( x = 39 , y = 5  ;  y <= 7 ; y++)
    {

        gotoxy( x , y);
        printf("||");fflush(stdout);
        Sleep(t);

    }

    gotoxy( 40 , 8);
    printf("\\\\");fflush(stdout);
    Sleep(t);

    for ( x = 42 , y = 8  ;  x <= 43 ; x++)
    {

        gotoxy( x , y);
        printf("_");fflush(stdout);
        Sleep(t);

    }

    gotoxy( 45 , 8);
    printf("//");fflush(stdout);
    Sleep(t);
    for ( x = 46 , y = 7  ;  y >= 5 ; y--)
    {

        gotoxy( x , y);
        printf("||");fflush(stdout);
        Sleep(t);

    }
    gotoxy( 45 , 4);
    printf("\\\\");fflush(stdout);
    Sleep(t);
    for ( x = 43 , y = 3  ;  x >= 42 ; x--)
    {

        gotoxy( x , y);
        printf("_");fflush(stdout);
        Sleep(t);

    }

    gotoxy( 40 , 4);
    printf("//");fflush(stdout);
    Sleep(t);



    /// U

    for ( x = 49 , y = 4  ;  y <= 6 ; y++)
    {

        gotoxy( x , y);
        printf("||");fflush(stdout);
        Sleep(t);

    }

    gotoxy( 50 , 7);
    printf("\\\\");fflush(stdout);
    Sleep(t);

    gotoxy( 51 , 8);
    printf("\\\\");fflush(stdout);
    Sleep(t);

    for ( x = 52 , y = 8  ;  x <= 54 ; x++)
    {

        gotoxy( x , y);
        printf("||");fflush(stdout);
        Sleep(t);

    }
    gotoxy( 56 , 8);
    printf("/");fflush(stdout);
    Sleep(t);

    gotoxy( 56 , 7);
    printf("//");fflush(stdout);
    Sleep(t);

    for ( x = 57 , y = 6  ;  y >= 4 ; y--)
    {

        gotoxy( x , y);
        printf("||");fflush(stdout);
        Sleep(t);

    }

    /// T

    for ( x = 60 , y = 4  ;  x <= 66 ; x++)
    {

        gotoxy( x , y);
        printf("||");fflush(stdout);
        Sleep(t);

    }

    for ( x = 63 , y = 5  ;  y <= 8 ; y++)
    {

        gotoxy( x , y);
        printf("||");fflush(stdout);
        Sleep(t);

    }

    /// U

    for ( x = 76 , y = 4  ;  y <= 6 ; y++)
    {

        gotoxy( x , y);
        printf("||");fflush(stdout);
        Sleep(t);

    }

    gotoxy( 77 , 7);
    printf("\\\\");fflush(stdout);
    Sleep(t);

    gotoxy( 78 , 8);
    printf("\\\\");fflush(stdout);
    Sleep(t);

    for ( x = 79 , y = 8  ;  x <= 81 ; x++)
    {

        gotoxy( x , y);
        printf("||");fflush(stdout);
        Sleep(t);

    }
    gotoxy( 83 , 8);
    printf("/");fflush(stdout);
    Sleep(t);

    gotoxy( 83 , 7);
    printf("//");fflush(stdout);
    Sleep(t);

    for ( x = 84 , y = 6  ;  y >= 4 ; y--)
    {

        gotoxy( x , y);
        printf("||");fflush(stdout);
        Sleep(t);

    }

    /// S

    gotoxy( 95 , 4);
    printf("\\\\");fflush(stdout);
    Sleep(t);

    for ( x = 93 , y = 3  ;  x >= 92 ; x--)
    {

        gotoxy( x , y);
        printf("__");fflush(stdout);
        Sleep(t);

    }

    gotoxy( 90 , 4);
    printf("//");fflush(stdout);
    Sleep(t);

    gotoxy( 90 , 5);
    printf("\\\\");fflush(stdout);
    Sleep(t);

    for ( x = 92 , y = 6  ;  x <= 93 ; x++)
    {

        gotoxy( x , y);
        printf("-");fflush(stdout);
        Sleep(t);

    }

    gotoxy( 94 , 7);
    printf("\\\\");fflush(stdout);
    Sleep(t);

    gotoxy( 94 , 8);
    printf("//");fflush(stdout);
    Sleep(t);

    gotoxy( 92 , 8);
    printf("__");fflush(stdout);
    Sleep(t);

    gotoxy( 90 , 8);
    printf("\\\\"RESET);fflush(stdout);
    Sleep(t);



    // Index

    gotoxy( 42 , 12);
    printf(RED"This project is assemble by"RESET);fflush(stdout);
    Sleep(t);

    gotoxy( 22 , 15);
    printf(BLUE"SL No.");fflush(stdout);
    Sleep(t);

    gotoxy( 34 , 15);
    printf("ID No.");fflush(stdout);
    Sleep(t);

    gotoxy( 50 , 15);
    printf("      Name");fflush(stdout);
    Sleep(t);

    gotoxy( 80 , 15);
    printf("Section"RESET);fflush(stdout);
    Sleep(t);

    // serial

    // saad

    gotoxy( 22 , 18);
    printf(CYAN"  i.");fflush(stdout);
    Sleep(t);

    gotoxy( 34 , 18);
    printf("C231112");fflush(stdout);
    Sleep(t);

    gotoxy( 50 , 18);
    printf("Sayeed Saadman Saad");fflush(stdout);
    Sleep(t);

    gotoxy( 80 , 18);
    printf(" 1CM");fflush(stdout);
    Sleep(t);

    // sazzad


    gotoxy( 22 , 20);
    printf("  ii.");fflush(stdout);
    Sleep(t);

    gotoxy( 34 , 20);
    printf("C231113");fflush(stdout);
    Sleep(t);

    gotoxy( 50 , 20);
    printf("Sazzad Hossen Chowdhury");fflush(stdout);
    Sleep(t);

    gotoxy( 80 , 20);
    printf(" 1CM");fflush(stdout);
    Sleep(t);

    // walid

    gotoxy( 22 , 22);
    printf("  iii.");fflush(stdout);
    Sleep(t);

    gotoxy( 34 , 22);
    printf("C231111");fflush(stdout);
    Sleep(t);

    gotoxy( 50 , 22);
    printf("Walid");fflush(stdout);
    Sleep(t);

    gotoxy( 80 , 22);
    printf(" 1CM");fflush(stdout);
    Sleep(t);

    // mohsen

    gotoxy( 22 , 24);
    printf("  iv.");fflush(stdout);
    Sleep(t);

    gotoxy( 34 , 24);
    printf("C231101");fflush(stdout);
    Sleep(t);

    gotoxy( 50 , 24);
    printf("Md. Mohsen");fflush(stdout);
    Sleep(t);

    gotoxy( 80 , 24);
    printf(" 1CM"RESET);fflush(stdout);
    Sleep(t);




    getchar();

    }
int main()
{

   aboutus();
    return 0;
}
