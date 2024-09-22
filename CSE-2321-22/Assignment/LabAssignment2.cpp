/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dbl;
#define nl cout << endl

int LengthMeasure(string C)
{
    int measure = 0;
    while (C[measure] != '\0')
    {
        measure++;
    }
    return measure;
}

int main()
{
    string S1;
    getline(cin,S1) ;
    int init[26] = {0} ;
    char C1 , C2;

    for ( int x = 0 ;x < LengthMeasure(S1) ; x++)
    {
        char C1 = S1[x] ;
        init[C1-'a']++;
    }
    cout<<"Occurance for individuals....";
    nl;
    for ( int y = 0 ; y < 26 ; y++)
    {
        C2 = 'a' + y ;
        cout<<C2<<" is presentred "<<init[y];
        nl;
    }

    return 0;
}