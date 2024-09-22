#include<stdio.h>
#include<math.h>

int main (){

    int i,n,x,f1 =0,f2 = 0, f3 = 0, f4 = 0;
    i = 1;

    scanf("%d", &n);

    while (i <= n)
    {
        scanf("%d", &x);
        if ( x == 2 )
        {
            f1 = 1;
        }

        if (x == 3)
        {
            f2 = 1;
        }

        if ( x == 5 )
        {
            f3 = 1;
        }

        if (x == 7)
        {
            f4 = 1;
        }


        i++;

    }
        if ( f1 == 1 && f2 == 1 && f3 == 1 && f4 == 1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }

 return 0;
}
