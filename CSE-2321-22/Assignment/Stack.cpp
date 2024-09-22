/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C, D;
    A = 10;
    B = 15;
    C = 5;
    D = (B * B) - 4 * A * C;

    double X1, X2;

    if (D > 0)
    {
        X1 = (-B + sqrt(D)) / (2.0 * A);
        X2 = (-B - sqrt(D)) / (2.0 * A);
    }
    else if ( D == 0)
    {
        double M ;
        M = - B / (2.0*A) ;
        cout<<M<<endl;
    }
    else 
    {
        cout<<"NO Valid quadratic equation.!"<<endl;
    }
    return 0 ;
}