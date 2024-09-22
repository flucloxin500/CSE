#include<stdio.h>
#include<windows.h>
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()

{
    char a,b;

    int t=30;
 gotoxy(26,7);
   printf("5.");
    Sleep(t);
        ///E start
    for(a=30,b=5; a<=35; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }
     for(a=30,b=8; a<=34; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }
    for(a=30,b=10; a<=35; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }
    for(a=30,b=5; b<=10; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }
    ///E end





    for(a=38,b=10; b>=5; b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }



    for(a=38,b=5; a<=43; a++)
    {
        gotoxy(a,b);

   printf("%c",219);

    }


       for(a=43,b=5; b<=10; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }


    for(a=38,b=7; a<=43; a++)
    {
        gotoxy(a,b);

   printf("%c",219);

    }
   /// A end


    for(a=46,b=5; a<=51; a++)
    {
        gotoxy(a,b);

   printf("%c",219);
    }
        for(a=46,b=5; b<=7; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }

     for(a=46,b=8; a<=51; a++)
    {
        gotoxy(a,b);

   printf("%c",219);
    }


         for(a=51,b=8; b<=9; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }

       for(a=46,b=10; a<=51; a++)
    {
        gotoxy(a,b);

   printf("%c",219);
    }
    ///S end







    for(a=54,b=5; a>=56,b<=8; a++,b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }
 for(a=56,b=10; a<=60,b>=5; a++,b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

//yend

gotoxy(26,15);
   printf("6.");
    Sleep(t);
///HARD
//H



         for(a=30,b=12; b<=17; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }


for(a=30,b=15; a<=34; a++)
    {
        gotoxy(a,b);

   printf("%c",219);
    }


         for(a=35,b=12; b<=17; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }


//H end


    for(a=38,b=17; b>=12; b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }



    for(a=38,b=12; a<=43; a++)
    {
        gotoxy(a,b);

   printf("%c",219);

    }


       for(a=43,b=12; b<=17; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }


    for(a=38,b=15; a<=43; a++)
    {
        gotoxy(a,b);

   printf("%c",219);

    }
   /// A end

///R start



    for(a=46,b=17; b>=12; b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }



    for(a=46,b=12; a<=51; a++)
    {
        gotoxy(a,b);

   printf("%c",219);

    }


       for(a=51,b=12; b<=14; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }


    for(a=46,b=14; a<=51; a++)
    {
        gotoxy(a,b);

   printf("%c",219);

    }

      for(a=46,b=13; a<=54,b<=17; a++,b++)
    {
        gotoxy(a,b);

   printf("%c",219);

    }

//O start



 for ( a = 54 , b =  12  ; a <= 59; a++)
    {
        gotoxy(a,b) ;
        printf("%c",219);
        Sleep(t);
    }


    for ( a = 60 , b =  13  ; b <= 16 ; b++)
    {
        gotoxy(a,b) ;
        printf("%c",219);
        Sleep(t);
    }



    for (a = 59 ,b =  17  ;  a >= 54 ; a--)
    {
        gotoxy(a,b) ;
        printf("%c",219);
        Sleep(t);
    }


    for ( a = 54 , b =  16  ; b>= 13 ; b--)
    {
        gotoxy(a,b) ;
        printf("%c",219);
        Sleep(t);
    }




     getchar();
    return 0;
}
