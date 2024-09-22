#include<stdio.h>
#include<windows.h>

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
void mainmenu()
{
     system("cls"); ///clear the console
    printf("\n");
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

     int a,b,t=20;


    Sleep(300);
//pstart


   gotoxy(36,7);
   printf(CYAN"1.");
    Sleep(t);
    for(a=40,b=5; a<=45; a++)
    {
        gotoxy(a,b);

        printf(CYAN"%c",219);

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

    //pend

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


    //lend



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

//Aend



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

//yend


  for(a=79,b=5; a>=74; a--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }



    for(a=74,b=5; b<=10; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }







    for(a=74,b=10; a<=77; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }



    for(a=77,b=10; b>=8; b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }




    for(a=77,b=8; a<=79; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }




    for(a=79,b=8; b<=10; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

//gend





    for(a=82,b=10; b>=5; b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }



    for(a=82,b=5; a<=87; a++)
    {
        gotoxy(a,b);

   printf("%c",219);

    }


       for(a=87,b=5; b<=10; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }


    for(a=82,b=7; a<=87; a++)
    {
        gotoxy(a,b);

   printf("%c",219);

    }

//Aend

//M strt
 for(a=91,b=10; b>=5; b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }


    for(a=91,b=5; a>=94,b<=8; a++,b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

for(a=94,b=8; a<=97,b>=5; a++,b--)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);
    }

    for(a=97,b=5; b<=10; b++)
    {
        gotoxy(a,b);

   printf("%c",219);
   Sleep(t);

    }

    ///M end
    ///E start
    for(a=100,b=5; a<=105; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }
     for(a=100,b=8; a<=104; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }
    for(a=100,b=10; a<=105; a++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }
    for(a=100,b=5; b<=10; b++)
    {
        gotoxy(a,b);
        printf("%c",219);
        Sleep(t);

    }
    ///E end
    ///Astrt

 gotoxy(36,14);
   printf(CYAN"2.");
    Sleep(t);
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





























    gotoxy(36,21);
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





getchar();
}

int main()
{
    mainmenu();

  return 0;
}

