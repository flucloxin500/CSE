#include<stdio.h>
#include<windows.h>
void MaximizeOutputWindow(void)
{
    HWND consoleWindow = GetConsoleWindow();
    ShowWindow(consoleWindow, SW_MAXIMIZE);
}
int main()
{
    MaximizeOutputWindow();
    int t=100000, aa,bb,xx,yy,ii,jj;
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
    int a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,k1,l1,m1,n1,o1,p1;
    int a2,b2,c2,d2,e2,f2,g2,h2,i2,j2,k2,l2,m2,n2,o2,p2;
    int a3,b3,c3,d3,e3,f3,g3,h3,i3,j3,k3,l3,m3,n3,o3,p3;
    int a4,b4,c4,d4,e4,f4,g4,h4,i4,j4,k4,l4,m4,n4,o4,p4;
    int a5,b5,c5,d5,e5,f5,g5,h5,i5,j5,k5,l5,m5,n5,o5,p5;
    int a6,b6,c6,d6,e6,f6,g6,h6,i6,j6,k6,l6,m6,n6,o6,p6;
    int a7,b7,c7,d7,e7,f7,g7,h7,i7,j7,k7,l7,m7,n7,o7,p7;
    char ch;




    void gotoxy(int x, int y)
    {
        static HANDLE h = NULL;
        if(!h)
        h = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD c = { x, y };
        SetConsoleCursorPosition(h,c);
    }



    scanf("%c", &ch);;
    for(aa=1,bb=10;aa<=bb;aa++)
    {
        a=44;b=35;c=44;d=35;e=44;f=35;g=44;h=35;i=44;j=35;k=44;l=35;m=44;n=35;o=44;p=35;
        a1=44;b1=35;c1=44;d1=35;e1=44;f1=35;g1=44;h1=35;i1=44;j1=35;k1=44;l1=35;m1=44;n1=35;o1=44;p1=35;


        a2=84,b2=10,c2=84,d2=10,e2=84,f2=10,g2=84,h2=10,i2=84,j2=10,k2=84,l2=10,m2=84,n2=10,o2=84,p2=10;
        a3=84,b3=10,c3=84,d3=10,e3=84,f3=10,g3=84,h3=10,i3=84,j3=10,k3=84,l3=10,m3=84,n3=10,o3=84,p3=10;


        a4=162,b4=13,c4=162,d4=13,e4=162,f4=13,g4=162,h4=13,i4=162,j4=13,k4=162,l4=13,m4=162,n4=13,o4=162,p4=13;
        a5=162,b5=13,c5=162,d5=13,e5=162,f5=13,g5=162,h5=13,i5=162,j5=13,k5=162,l5=13,m5=162,n5=13,o5=162,p5=13;

        a6=174,b6=30,c6=174,d6=30,e6=174,f6=30,g6=174,h6=30,i6=174,j6=30,k6=174,l6=30,m6=174,n6=30,o6=174,p6=30;
        a7=174,b7=30,c7=174,d7=30,e7=174,f7=30,g7=174,h7=30,i7=174,j7=30,k7=174,l7=30,m7=174,n7=30,o7=174,p7=30;

        for(ii=1,jj=4;ii<=jj;ii++)
            {

                usleep(t);  //////////1

                ///FIRE WORK-1
                gotoxy(a,b);///////////////////////////////////////A1
                a-=2;
                printf("*");///a

                gotoxy(c,d);
                d--;
                printf("*");///b

                gotoxy(e,f);
                e+=2;
                printf("*");///c

                gotoxy(g,h);
                h++;
                printf("*");///d

                gotoxy(i,j);
                i-=2;
                j--;
                printf("*");///e

                gotoxy(k,l);
                k+=2;
                l--;
                printf("*");///f

                gotoxy(m,n);
                m+=2;
                n++;
                printf("*");///g

                gotoxy(o,p);
                o-=2;
                p++;
                printf("*");///h

                ///FIRE WORK-2
                gotoxy(a2,b2);///////////////////////////////////////A2
                a2-=2;
                printf("*");///a

                gotoxy(c2,d2);
                d2--;
                printf("*");///b

                gotoxy(e2,f2);
                e2+=2;
                printf("*");///c

                gotoxy(g2,h2);
                h2++;
                printf("*");///d

                gotoxy(i2,j2);
                i2-=2;
                j2--;
                printf("*");///e

                gotoxy(k2,l2);
                k2+=2;
                l2--;
                printf("*");///f

                gotoxy(m2,n2);
                m2+=2;
                n2++;
                printf("*");///g

                gotoxy(o2,p2);
                o2-=2;
                p2++;
                printf("*");///h

                ///FIRE WORK-3
                gotoxy(a4,b4);///////////////////////////////////////A4
                a4-=2;
                printf("*");///a

                gotoxy(c4,d4);
                d4--;
                printf("*");///b

                gotoxy(e4,f4);
                e4+=2;
                printf("*");///c

                gotoxy(g4,h4);
                h4++;
                printf("*");///d

                gotoxy(i4,j4);
                i4-=2;
                j4--;
                printf("*");///e

                gotoxy(k4,l4);
                k4+=2;
                l4--;
                printf("*");///f

                gotoxy(m4,n4);
                m4+=2;
                n4++;
                printf("*");///g

                gotoxy(o4,p4);
                o4-=2;
                p4++;
                printf("*");///h

                ///FIRE WORK-4
                gotoxy(a6,b6);///////////////////////////////////////A6
                a6-=2;
                printf("*");///a

                gotoxy(c6,d6);
                d6--;
                printf("*");///b

                gotoxy(e6,f6);
                e6+=2;
                printf("*");///c

                gotoxy(g6,h6);
                h6++;
                printf("*");///d

                gotoxy(i6,j6);
                i6-=2;
                j6--;
                printf("*");///e

                gotoxy(k6,l6);
                k6+=2;
                l6--;
                printf("*");///f

                gotoxy(m6,n6);
                m6+=2;
                n6++;
                printf("*");///g

                gotoxy(o6,p6);
                o6-=2;
                p6++;
                printf("*");///h
            }



           for(xx=1,yy=8;xx<=yy;xx++)
            {
                usleep(t);  //////////1

                ///CLOSE FIRE WORK-1
                gotoxy(a1,b1);///////////////////////////////////////A1
                a1-=2;
                printf(" ");///a

                gotoxy(c1,d1);
                d1--;
                printf(" ");///b

                gotoxy(e1,f1);
                e1+=2;
                printf(" ");///c

                gotoxy(g1,h1);
                h1++;
                printf(" ");///d

                gotoxy(i1,j1);
                i1-=2;
                j1--;
                printf(" ");///e

                gotoxy(k1,l1);
                k1+=2;
                l1--;
                printf(" ");///f

                gotoxy(m1,n1);
                m1+=2;
                n1++;
                printf(" ");///g

                gotoxy(o1,p1);
                o1-=2;
                p1++;
                printf(" ");///h

                ///CLOSE FIRE WORK-2
                gotoxy(a3,b3);///////////////////////////////////////A2
                a3-=2;
                printf(" ");///a

                gotoxy(c3,d3);
                d3--;
                printf(" ");///b

                gotoxy(e3,f3);
                e3+=2;
                printf(" ");///c

                gotoxy(g3,h3);
                h3++;
                printf(" ");///d

                gotoxy(i3,j3);
                i3-=2;
                j3--;
                printf(" ");///e

                gotoxy(k3,l3);
                k3+=2;
                l3--;
                printf(" ");///f

                gotoxy(m3,n3);
                m3+=2;
                n3++;
                printf(" ");///g

                gotoxy(o3,p3);
                o3-=2;
                p3++;
                printf(" ");///h

                ///CLOSE FIRE WORK-3
                gotoxy(a5,b5);///////////////////////////////////////A3
                a5-=2;
                printf(" ");///a

                gotoxy(c5,d5);
                d5--;
                printf(" ");///b

                gotoxy(e5,f5);
                e5+=2;
                printf(" ");///c

                gotoxy(g5,h5);
                h5++;
                printf(" ");///d

                gotoxy(i5,j5);
                i5-=2;
                j5--;
                printf(" ");///e

                gotoxy(k5,l5);
                k5+=2;
                l5--;
                printf(" ");///f

                gotoxy(m5,n5);
                m5+=2;
                n5++;
                printf(" ");///g

                gotoxy(o5,p5);
                o5-=2;
                p5++;
                printf(" ");///h

                ///CLOSE FIRE WORK-4
                gotoxy(a7,b7);///////////////////////////////////////A4
                a7-=2;
                printf(" ");///a

                gotoxy(c7,d7);
                d7--;
                printf(" ");///b

                gotoxy(e7,f7);
                e7+=2;
                printf(" ");///c

                gotoxy(g7,h7);
                h7++;
                printf(" ");///d

                gotoxy(i7,j7);
                i7-=2;
                j7--;
                printf(" ");///e

                gotoxy(k7,l7);
                k7+=2;
                l7--;
                printf(" ");///f

                gotoxy(m7,n7);
                m7+=2;
                n7++;
                printf(" ");///g

                gotoxy(o7,p7);
                o7-=2;
                p7++;
                printf(" ");///h
            }
    }
    return 0;
}



