#include<stdio.h>
#include<string.h>

                    // FILE HANDLING

int main ()
{
    int x , y ;
    FILE *test ;
    test = fopen("file.txt","r") ;

    fscanf(test,"%d %d" , &x , &y) ;
    fclose(test);

    printf(test, "%d" , x + y) ;

    
    
    return 0 ;
}
