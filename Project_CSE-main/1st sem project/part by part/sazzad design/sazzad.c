#include<stdio.h>
#include<windows.h>
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
///colour code
#define RESET   "\x1B[0m"
#define RED     "\x1B[31m"
#define GREEN   "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE    "\x1B[34m"
#define MAGENTA "\x1B[35m"
#define CYAN    "\x1B[36m"
int main()
void pname()
{
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


    }


    getchar();
    return 0;
}
