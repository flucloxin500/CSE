#include <stdio.h>

int stringlength(char x[20]) 
{
    int sum = 0, i;
    for (i = 0 ; x[i] != '\0' ; i++)
    {
        sum++;
    }
    return sum;
}

int main() 
{
    char str[20];
    gets(str) ;
    int x;
    x  = stringlength(str);
    printf("%d",x);
    return 0;
}
