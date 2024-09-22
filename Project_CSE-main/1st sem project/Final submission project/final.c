///necessary header files
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
#include<ctype.h>
#include<MMsystem.h>

///colour code
#define RESET   "\x1B[0m"
#define RED     "\x1B[31m"
#define GREEN   "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE    "\x1B[34m"
#define MAGENTA "\x1B[35m"
#define CYAN    "\x1B[36m"
int flag = 0;
///max console
void MaximizeOutputWindow(void)
{
    HWND consoleWindow = GetConsoleWindow();
    ShowWindow(consoleWindow, SW_MAXIMIZE);
}

/// initializing gotoxy function
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
char s1[20],s2[20];
//here is function which will be scan the name of players
void input()
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

//upper line
 for(a=24,b=8;a<=80;a++)
 {
      gotoxy(a,b);
        printf("%c",205);
 }
//left upper corner
       gotoxy(23,8);
        printf("%c",201);


//left bar

for(a=23,b=9;b<=11;b++)
 {
      gotoxy(a,b);
        printf("%c",186);

 }
//left lower corner
  gotoxy(23,11);
        printf("%c",200);


//lower line
for(a=24,b=11;a<=79;a++)
 {
      gotoxy(a,b);
        printf("%c",205);
 }
//upper right corner
  gotoxy(80,8);
        printf("%c",187);


//lower right corner
  gotoxy(80,11);
        printf("%c",188);

//right bar
for(a=80,b=9;b<=10;b++)
 {
      gotoxy(a,b);
        printf("%c",186);
 }








   gotoxy(25,10) ;
    printf("Enter the name of player 1 : ");//1st player name
    scanf("%s",s1);






//upper line
 for(a=24,b=13;a<=80;a++)
 {
      gotoxy(a,b);
        printf("%c",205);
 }
//left upper corner
       gotoxy(23,13);
        printf("%c",201);


//left bar

for(a=23,b=14;b<=15;b++)
 {
      gotoxy(a,b);
        printf("%c",186);

 }
//left lower corner
  gotoxy(23,16);
        printf("%c",200);


//lower line
for(a=24,b=16;a<=79;a++)
 {
      gotoxy(a,b);
        printf("%c",205);
 }
//upper right corner
  gotoxy(80,13);
        printf("%c",187);


//lower right corner
  gotoxy(80,16);
        printf("%c",188);

//right bar
for(a=80,b=14;b<=15;b++)
 {
      gotoxy(a,b);
        printf("%c",186);
 }
    gotoxy(25,15) ;
    printf("Enter the name of player 2 : ");//2nd player name
    scanf("%s",s2);
    gotoxy(40,18) ;
    printf("PRESS ENTER TO CONTINUE ....");
    getch();
   system("CLS");

   playGame();

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

     int a,b,t=0;


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
    while(1){
        int choice;
        if(flag>0)
      {
          break;
      }
        gotoxy(40,27);
        printf(GREEN"ENTER YOUR CHOICE : ");
        scanf("%d",&choice);
      //  Sleep(t);


           if (choice == 1)
           {
               system("CLS");
           input();
           // playGame();///calling play game function
        }
        else if (choice == 2)
            {
            aboutus();///calling aboutus function


        }
        else if (choice == 3)
            {
                system("cls");
            gotoxy(35,15);
            printf("EXITING....\n");
            getch();
            return 0;

        }
        else
        {

             gotoxy(40, 27);
            printf("Invalid choice. Please try again.\n");
            getch();
            gotoxy(40, 27);
            printf("                                 \n");
        }
    }
  //  }while(1);

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

    gotoxy(35,27);
    printf(BLUE"PRESS ANY KEY TO RETURN BACK TO MAIN MENU ! \n"RESET);
      getch();
      system("cls");

  //  return 0;
mainmenu();
flag =1;



    }
    void hidecursor() ////HIDE CURSOR
{
HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_CURSOR_INFO info;
info.dwSize = 100;
info.bVisible = FALSE;
SetConsoleCursorInfo(consoleHandle, &info);
}
/// MAIN BOARD STRUCTURE!!!
void board_structure(char board[3][3], int currentRow, int currentCol) ///takes the board array,currentRow and currentCol as parameters to display to console.
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


    gotoxy(29, 5);
    printf(CYAN"              |            |            \n"RESET);
    gotoxy(29, 6);
    printf(CYAN"              |            |            \n"RESET);
    gotoxy(29, 7);
    printf(CYAN"              |            |            \n"RESET);
    gotoxy(29, 8);
    printf(CYAN"       %c      |     %c      |      %c     \n"RESET, board[0][0], board[0][1], board[0][2]);
    gotoxy(29, 9);
    printf(CYAN"              |            |            \n"RESET);
    gotoxy(29, 10);
    printf(CYAN"--------------|------------|--------------\n"RESET);
    gotoxy(29, 11);
    printf(CYAN"              |            |            \n"RESET);
    gotoxy(29, 12);
    printf(CYAN"              |            |            \n"RESET);
    gotoxy(29, 13);
    printf(CYAN"       %c      |     %c      |       %c    \n"RESET, board[1][0], board[1][1], board[1][2]);
    gotoxy(29, 14);
    printf(CYAN"              |            |            \n"RESET);
    gotoxy(29, 15);
    printf(CYAN"              |            |            \n"RESET);
    gotoxy(29, 16);
    printf(CYAN"--------------|------------|--------------\n"RESET);
    gotoxy(29, 17);
    printf(CYAN"              |            |            \n"RESET);
    gotoxy(29, 18);
    printf(CYAN"         %c    |      %c     |       %c    \n"RESET, board[2][0], board[2][1], board[2][2]);
    gotoxy(29, 19);
    printf(CYAN"              |            |            \n"RESET);
    gotoxy(29, 20);
    printf(CYAN"              |            |            \n"RESET);
    gotoxy(29, 21);
    printf(CYAN"              |            |            \n"RESET);
    printf("\n");
    /*
    The currentRow and currentCol variables represent the current position of the cursor on the game board.
    By multiplying currentCol by 15 and adding 29, and multiplying currentRow by 6 and adding 8,
    the code calculates the screen coordinates where the cursor should be highlighted.
    */
    // Highlight the current selected box
    /// by using '@' point.
    int x = currentCol * 15 + 29; ///multiplying (15) to set the coordinate formation correctly
    int y = currentRow * 6 + 8;///multiplying (6) to set the coordinate formation correctly
    gotoxy(x, y+1);
    printf(YELLOW"     @\n"RESET); ///  @ to create a position to move in the board
}

void outlinebox()
{
    char a,b;

///uporer
    for(a=2,b=0; a<=118; a+=2)
    {
        gotoxy(a,b);
        printf("X");

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


}

void projectnamesazzad() ///Printing Smart Tic Tac
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
    gotoxy(10,1);
    printf("! ");
    PlaySound(TEXT("starting.wav"),NULL,SND_ASYNC); ///Adding a sound effect in the beginning of the game
    system("pause");

}

void welcome(const char* sentence, int start_X, int start_Y) ///takes a sentence (string), start_X, and start_Y coordinates as parameters
{
    int sentencelength = strlen(sentence); ///length of the string
    int x = start_X;
    int y = start_Y;
    gotoxy(x, y);
    for (int i = 0; i < sentencelength; i++)
    {
        printf("%c", sentence[i]); ///printing the characters to left to right
        fflush(stdout);
        usleep(100000);
        x++; ///X coordinate increasing
        gotoxy(x, y);
    }
}


void animateProjectname()   ///printing project name
{
    int i, j;

///entire P
    for (i = 0; i < 9; i++)
    {
        gotoxy(5, 5 + i);
        printf(CYAN"%c",221);
        Sleep(10);  // Sleep for 10 milliseconds
    }

    for (i = 0; i < 4; i++)
    {
        gotoxy(15, 5 + i);
        printf("%c",219);
        Sleep(10);
    }



    for (i = 0; i < 11; i++)
    {
        gotoxy(5+i, 4);
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 11; i++)
    {
        gotoxy(5+i, 9 );
        printf("%c",219);
        Sleep(10);
    }///P ends

    ///R begin
    for (i = 0; i < 9; i++)
    {
        gotoxy(18, 5 + i);
        printf("%c",221);
        Sleep(10);  // Sleep for 10 milliseconds
    }

    for (i = 0; i < 4; i++)
    {
        gotoxy(28, 5 + i);
        printf("%c",219);
        Sleep(10);
    }

    for (i = 0; i < 11; i++)
    {
        gotoxy(18+i, 4);
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 11; i++)
    {
        gotoxy(18+i, 9 );
        printf("%c",219);
        Sleep(10);
    }
    gotoxy(21,10);
    printf("%c",221);
    Sleep(10);
    gotoxy(23,11);
    printf("%c",221);
    Sleep(10);
    gotoxy(25,12);
    printf("%c",221);
    Sleep(10);
    gotoxy(27,13);
    printf("%c",221);
    Sleep(10);
///R ENDS

/// O begins
    for (i = 0; i < 8; i++)
    {
        gotoxy(31, 5 + i);
        printf("%c",221);
        Sleep(10);  // Sleep for 10 milliseconds
    }
    for (i = 0; i < 8; i++)
    {
        gotoxy(41, 5 + i);
        printf("%c",221);
        Sleep(10);
    }
    for (i = 1; i < 8; i++)
    {
        gotoxy(32+i, 4);
        printf("%c",219);
        Sleep(10);
    }
    for (i = 1; i < 8; i++)
    {
        gotoxy(32+i, 13 );
        printf("%c",219);
        Sleep(10);
    }
    ///O ends

    ///J start
    for (i = 0; i < 9; i++)
    {
        gotoxy(52, 4 + i);
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 8; i++)
    {
        gotoxy(44+i, 13 );
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 3; i++)
    {
        gotoxy(44, 11 + i);
        printf("%c",219);
        Sleep(10);  // Sleep for 10 milliseconds
    }///J ends

    ///E start
    for (i = 0; i < 10; i++)
    {
        gotoxy(55, 4 + i);
        printf("%c",221);
        Sleep(10);
    }
    for (i = 0; i < 8; i++)
    {
        gotoxy(55+i, 9 );
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 12; i++)
    {
        gotoxy(55+i, 4);
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 12; i++)
    {
        gotoxy(55+i, 13);
        printf("%c",219);
        Sleep(10);
    }///E ends
    ///C begin
    for (i = 0; i < 10; i++)
    {
        gotoxy(69, 4 + i);
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 11; i++)
    {
        gotoxy(69+i, 4);
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 2; i++)
    {
        gotoxy(79, 5 + i);
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 12; i++)
    {
        gotoxy(69+i, 13);
        printf("%c",219);
        Sleep(10);
    }/// C ends

    ///T start
    for (i = 0; i < 12; i++)
    {
        gotoxy(82+i, 4);
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 10; i++)
    {
        gotoxy(87, 4 + i);
        printf("%c",219);
        Sleep(10);
    }/// T ends

    ///N begin
    for (i = 0; i < 10; i++)
    {
        gotoxy(40, 15 + i);
        printf("%c",219);
        Sleep(10);
    }
    gotoxy(43,16);
    printf("%c",219);

    gotoxy(44,17);
    printf("%c",219);

    gotoxy(45,18);
    printf("%c",219);

    gotoxy(46,19);
    printf("%c",219);

    gotoxy(47,20);
    printf("%c",219);

    gotoxy(48,21);
    printf("%c",219);

    gotoxy(49,22);
    printf("%c",219);

    gotoxy(50,23);
    printf("%c",219);
    for (i = 0; i < 10; i++)
    {
        gotoxy(53, 15 + i);
        printf("%c",219);
        Sleep(10);
    }
/// N ends

///A begin
    for (i = 0; i < 10; i++)
    {
        gotoxy(56, 15 + i);
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 11; i++)
    {
        gotoxy(56+i, 15);
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 10; i++)
    {
        gotoxy(66, 15 + i);
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 10; i++)
    {
        gotoxy(56+i, 20 );
        printf("%c",219);
        Sleep(10);
    } /// A end
    ///M begin
    for (i = 0; i < 10; i++)
    {
        gotoxy(69, 15 + i);
        printf("%c",219);
        Sleep(10);
    }
    gotoxy(72,16);
    printf("%c",219);

    gotoxy(73,17);
    printf("%c",219);

    gotoxy(74,18);
    printf("%c",219);

    gotoxy(75,18);
    printf("%c",219);

    gotoxy(76,18);
    printf("%c",219);


    gotoxy(78,17);
    printf("%c",219);

    gotoxy(79,16);
    printf("%c",219);

    for (i = 0; i < 10; i++)
    {
        gotoxy(82, 15 + i);
        printf("%c",219);
        Sleep(10);
    }///m end
    ///E start
    for (i = 0; i < 10; i++)
    {
        gotoxy(85, 15 + i);
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 8; i++)
    {
        gotoxy(85+i, 20 );
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 12; i++)
    {
        gotoxy(85+i, 15);
        printf("%c",219);
        Sleep(10);
    }
    for (i = 0; i < 12; i++)
    {
        gotoxy(85+i, 24);
        printf("%c",219);
        Sleep(10);
    }

    Sleep(700);

    system("cls");
}

int check_game_status(char board[3][3])  ///checking the full board as parameter. to check win,loose draw
{
    ///Check rows if thats same or not
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][0] == board[i][2])
            /*
            its representing checkiing all rows
            */
        {
            if (board[i][0] == 'X')
            {
                return 1; ///player 1 win
            }
            else
            {
                return 2; ///player 2 win
            }
        }
    }
    ///Check coloums if thats same or not
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[0][i] == board[2][i])
            /*
            its representing checkiing all coloums
            */
        {
            if (board[0][i] == 'X')
            {
                return 1; ///player 1 win
            }
            else
            {
                return 2; ///player 2 win
            }
        }
    }

    ///Check left diagonals if thats same or not
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[0][0] == board[2][2])
    {
        if (board[0][0] == 'X')
        {
            return 1; ///player 1 win
        }
        else
        {
            return 2; ///player 2 win
        }
    }///Check right diagonals if thats same or not
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[0][2] == board[2][0])
    {
        if (board[0][2] == 'X')
        {
            return 1; ///player 1 win
        }
        else
        {
            return 2; ///player 2 win
        }
    }

    /// Check for a draw
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == ' ')
            {
                return 0; ///continue playing
            }
        }
    }

    return -1; /// game over ( DRAW )
}

void mainmenu2()

{
    system("cls");
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

    int a,b,t = 2 ;

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


    while(1)
    {
        int choice;
        gotoxy(40,27);
        printf(GREEN"ENTER YOUR CHOICE : ");
        scanf("%d",&choice);
          if (choice == 1)
           {
            playGame();///calling play game function
        }
        else if (choice == 2)
            {
            mainmenu();///calling aboutus function
            flag=1;
            break;


        }
       /* else if (choice == 3)
            {
                system("cls");
            gotoxy(35,15);
            printf("EXITING....\n");
           // Sleep(1);
            return 0;

        }*/
        else
        {

             gotoxy(40, 27);
            printf("Invalid choice. Please try again.\n");
            getch();
            gotoxy(40, 27);
            printf("                                 \n");
        }
    }



   // while(1);



    //getchar() ;
}

void playGame()
{

    int player = 1;
    int currentRow = 0;///it represent the current position row of the cursor on the game board.
    int currentCol = 0;;///it represent the current position coloum of the cursor on the game board.
    int gameStatus = 0;
    char board[3][3] = /// empty spaces (' ') to represent an empty board.
    {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };
    while (gameStatus == 0)///until gameStatus ==0. It means the loop will continue until the game is finished.
    {
        board_structure(board, currentRow, currentCol);
        gotoxy(23,26);
        if(player == 1)
        printf(GREEN"Player %s turn (Use W/A/S/D or arrow keys to move, and press Enter to select): ", s1);
        else
        printf(GREEN"Player %s turn (Use W/A/S/D or arrow keys to move, and press Enter to select): ", s2);
        char move = getch();
        if (move == 'w' || move == 'W' || move == 72)  ///72 is up arrow key
        {
            currentRow = (currentRow - 1 + 3) % 3; ///calculated as the x,y formation
///the formation is calculated as a way that it will be able to wrap the value in range of ( 0-2 ) as the board boxes
            /*
            as example.. we assume that at first the current row value is 1. so when it enter in this proccess it would be (1-1+3)%3 = 3%3 = 0
            So after this line,currentRow will be updated to 0 indicating that the cursor has moved to the top row of the game board[0][0]

            */

        }
        else if (move == 'a' || move == 'A' || move == 75)   ///75 is left arrow key
        {
            currentCol = (currentCol - 1 + 3) % 3;
            /*
            as example.. we assume that at first the current col value is 2. so when it enter in this proccess it would be (2-1+3)%3 = 4%3 = 1
            So after this line,currentcol will be updated to 1 indicating that the cursor has moved to the top row of the game board[0][1].

            */
        }
        else if (move == 's' || move == 'S' || move == 80)   ///80 is down arrow key
        {
            currentRow = (currentRow + 1) % 3;
            /*
            as example.. we assume that at first the current row value is 0. so when it enter in this proccess it would be (0+1)%3 = 1%3 = 1
            So after this line,currentrow will be updated to 1 indicating that the cursor has moved to the first col middle row of the game board[1][0].

            */
        }
        else if (move == 'd' || move == 'D' || move == 77)   ///77 is right arrow key
        {
            currentCol = (currentCol + 1) % 3;
            /*
            as example.. we assume that at first the current col value is 1. so when it enter in this proccess it would be (1+1)%3 = 2%3 = 2
            So after this line,currentcol will be updated to 2 indicating that the cursor has moved to the last col last row of the game board[0][2].

            */
        }
        else if (move == '\r') /// '\r' means enter key or return key
        {
            if (board[currentRow][currentCol] == ' ') /// check any box is ' ' empty or not.
            {
                if (player == 1)
                {
                    board[currentRow][currentCol] = 'X';
                    player = 2;
                }
                else
                {
                    board[currentRow][currentCol] = 'O';
                    player = 1;
                }
                gameStatus = check_game_status(board); /// call the function to checking win or lose
            }
        }
    }

    board_structure(board, currentRow, currentCol);

    if (gameStatus == -1)
    {
        printf("It's a draw!\n");
    }
     else if(gameStatus == 1)
    {

char a,b;

//upper line
 for(a=37,b=22;a<=60;a++)
 {
      gotoxy(a,b);
        printf(GREEN"%c",205);
 }
//left upper corner
       gotoxy(36,22);
        printf("%c",201);


//left bar

for(a=36,b=23;b<=25;b++)
 {
      gotoxy(a,b);
        printf("%c",186);

 }
//left lower corner
  gotoxy(36,26);
        printf("%c",200);


//lower line
for(a=37,b=26;a<=60;a++)
 {
      gotoxy(a,b);
        printf("%c",205);
 }
//upper right corner
  gotoxy(61,22);
        printf("%c",187);


//lower right corner
  gotoxy(61,26);
        printf("%c",188);

//right bar
for(a=61,b=23;b<=25;b++)
 {
      gotoxy(a,b);
       printf("%c",186);
 }



          gotoxy(39,24);

        printf(CYAN"Player %s wins!\n"RESET, s1);
        PlaySound(TEXT("Victory Sound Effect.wav"),NULL,SND_ASYNC);
        //system("pause");
        getch();

    }
    else
        {
        gotoxy(38,24);
        printf(CYAN"Player %s wins!\n"RESET, s2);
        PlaySound(TEXT("Victory Sound Effect.wav"),NULL,SND_ASYNC);
        //system("pause");
        getch();

    }

mainmenu2();

}

int main()
{
    hidecursor();
    const char sentence[] = "\x1B[35mWELCOME TO OUR PROJECT....\x1B[0m";
    ///this sentence should be visible for 3 sec... Then upcoming process..
    int startX = 5;
    int startY = 5;
    welcome(sentence, startX, startY);///calling welcome function
    usleep(1000000);
    system("cls");
    animateProjectname(); ///calling show (project name) words  function
    projectnamesazzad();  ///calling smart tic tac function
    int choice;
    mainmenu();///calling main menu function


    return 0;

    }





