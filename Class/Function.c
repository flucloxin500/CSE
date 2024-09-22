#include<stdio.h>

int Min(int x , int y)
{
    int a ;
    if ( x < y)
    return x ;
    /// return x < y ? x : Y ;
    /// return x < 0 ? -x : x ;

    else 
    return y ;
}

double inchtocenti (int i )
{
    double a ;
    a = i * 2.54 ; // return i * 2.54 ;

    return a ;
}

int main ()
{

    int j = 3 , k = 5 , l = 7 ;
    int c = Min(j , Min(k ,l));
    printf("%d", c); 

    return 0 ;
}
