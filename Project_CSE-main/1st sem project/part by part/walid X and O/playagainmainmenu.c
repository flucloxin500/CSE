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
void playgame2()
{
     char x,y;

///uporer
    for(x=2,y=0; x<=118; x+=2)
    {
        gotoxy(x,y);
        printf(CYAN"X");

    }
    for(x=1,y=0; x<118; x+=2)
    {
        gotoxy(x,y);
        printf("O");

    }
    ///nicher
    for(x=2,y=29; x<=118; x+=2)
    {
        gotoxy(x,y);
        printf("X");

    }
    for(x=1,y=29; x<118; x+=2)
    {
        gotoxy(x,y);
        printf("O");

    }
    ///yamer
    for(x=1,y=2; y<30; y+=2)
    {
        gotoxy(x,y);
        printf("X");

    }
    for(x=1,y=1; y<30; y+=2)
    {
        gotoxy(x,y);
        printf("O");

    }
    ///daner
    for(x=118,y=2; y<30; y+=2)
    {
        gotoxy(x,y);
        printf("X");

    }
    for(x=118,y=1; y<30; y+=2)
    {
        gotoxy(x,y);
        printf("O");

    }

    int a,b,t = 20 ;

    gotoxy(36,14);
    Sleep(t);

   gotoxy(36,7);
   printf("1.");
    //p start


    gotoxy(36,7);
    Sleep(t);
    for(a=40,b=5; a<=45; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }

    for(a=40,b=10; b>=5; b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }

    for(a=45,b=7; b>=5; b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }


    for(a=40,b=7; a<=45; a++)
    {
        gotoxy(a,b);

   printf("%c",219);

    }

    ///p end

 for(a=47,b=5; b<=10; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }


    for(a=47,b=10; a<=52; a++)
    {
        gotoxy(a,b);

   printf("%c",219);

    }


    /// l end



    for(a=54,b=10; b>=5; b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }



    for(a=54,b=5; a<=59; a++)
    {
        gotoxy(a,b);

   printf("%c",219);

    }


       for(a=59,b=5; b<=10; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }


    for(a=55,b=7; a<=58; a++)
    {
        gotoxy(a,b);

   printf("%c",219);

    }

///A end



    for(a=61,b=5; a>=63,b<=8; a++,b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }
 for(a=63,b=10; a<=67,b>=5; a++,b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

///y end

/// A start

    for(a=74,b=10;b>=5;b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

    for(a=75,b=5; a<=79; a++)
    {
        gotoxy(a,b);

   printf("%c",219);

    }


       for(a=79,b=6; b<=10; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }


    for(a=75,b=7; a<=78; a++)
    {
        gotoxy(a,b);
        printf("%c",219);

    }

    /// A end

    /// G start

    for(a=86,b=5; a>=81; a--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }



    for(a=81,b=6; b<=10; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

    for(a=81,b=10; a<=84; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }



    for(a=84,b=9; b>=8; b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }




    for(a=85,b=8; a<=86; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

    for(a=86,b=9; b<=10; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

    ///g end


    /// A start

    for(a=88,b=10;b>=5;b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

    for(a=89,b=5; a<=93; a++)
    {
        gotoxy(a,b);

   printf("%c",219);

    }


       for(a=93,b=6; b<=10; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }


    for(a=89,b=7; a<=93; a++)
    {
        gotoxy(a,b);
        printf("%c",219);

    }

    // A end

    /// I start

    for(a=95,b=5; a<=99 ;a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

    for(a=97,b=6; b<=9; b++)
    {
        gotoxy(a,b);
        printf("%c",219);

    }


    for(a=95,b=10; a<=99; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }

    /// I end


    /// N start

    for(a=101,b=10; b>=5; b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }
    for(a=102,b=6; b<=9; a++,b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }
    for(a=106,b=10; b>=5; b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }

///M start

gotoxy(36,14);
printf("2.");

     for(a=40,b=17; b>=12; b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);


    }


    for(a=40,b=12; a<=44,b<=15; a++,b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }
    for(a=44,b=15; a<=48,b>=12; a++,b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }

    for(a=47,b=13; b<=17; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

    /// M end

    /// A start

    for(a=50,b=17;b>=12;b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

    for(a=51,b=12; a<=54; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }


       for(a=55,b=12; b<=17; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }


    for(a=51,b=14; a<=54; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }

    /// A end

    /// I start

    for(a=57,b=12; a<=61 ;a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

    for(a=59,b=13; b<=16; b++)
    {
        gotoxy(a,b);
        printf("%c",219);

    }


    for(a=57,b=17; a<=61; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }

    /// I end

    /// N start

    for(a=63,b=17; b>=12; b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }
    for(a=64,b=13; a <=67 ,b<=16; a++,b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }
    for(a=68,b=17; b>=12; b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }

    /// N end



    ///M start


     for(a=74,b=17; b>=12; b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);


    }


    for(a=74,b=12; a<=78,b<=15; a++,b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }
    for(a=78,b=15; a<=82,b>=12; a++,b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }

    for(a=81,b=13; b<=17; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

    /// M end

    ///E start


     for(a=88,b=12; a>=83; a--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }
    for(a=83,b=13; b<=16; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }
    for(a=83,b=17; a<=88; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }

    for(a=84,b=14; a<=86;a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }


    /// E end

    /// N start

    for(a=90,b=17; b>=12; b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }
    for(a=91,b=13; a <=94 ,b<=16; a++,b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }
    for(a=95,b=17; b>=12; b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }

    /// N end

     /// U start

    for ( a = 97, b =  12  ; b<= 17 ; b++)
    {
        gotoxy(a,b) ;
        printf("%c",219);
        Sleep(t);
    }

    for ( a = 98 , b =  17  ; a<= 101 ; a++)
    {
        gotoxy(a,b) ;
        printf("%c",219);
        Sleep(t);
    }

    for ( a = 102, b =  17  ; b >= 12 ; b--)
    {
        gotoxy(a,b) ;
        printf("%c",219);
        Sleep(t);
    }

    /// U end








        gotoxy(36,21);
   printf("3.");

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





    getchar() ;
}




int main()
{
    playgame2();

}
