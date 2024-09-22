#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main ()
{
    char name[30] ;
    gets(name);
    int l ;
    l = strlen(name);

    int i ;

    for ( i = l ; l != '\0' ; i--)
    {
        printf("%c", name[i]);
    }

    return 0 ;
}
