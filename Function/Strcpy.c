#include <stdio.h>

void str(char a[50], char b[50]) 
{
    int i ;
    for (i = 0 ; b[i] != '\0' ; i++) 
    {
        a[i] = b[i];
    }
}

int main() {
    char x[50];
    char y[50];
    str(x, y);
    printf("%s", x);
    return 0;
}
