#include<bits/stdc++.h>

using namespace std;

int FactorialNonRecursive(int Fact , int N)
{
    if ( N == 0)
    {
        Fact = 1 ;
        return Fact ;
    }
    Fact = 1;
    for ( int k = 1 ; k <= N ; k++)
    {
        Fact = k*Fact;
    }
    return Fact;
}
int FactorialRecursive(int Fact , int N)
{
    if ( N == 0)
    {
        Fact = 1 ;
        return Fact ;
    }
    Fact = FactorialNonRecursive(Fact, N-1);
    Fact = N * Fact ;
    return Fact;
}


int main()
{
   int n ,f = 0 ;
   cin>>n;
   cout<<FactorialNonRecursive(f,n);
   cout<<endl; 
   cout<<FactorialRecursive(f,n);
}