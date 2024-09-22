#include<iostream>
#include<climits>

using namespace std ;

int main ()
{
    int x ;

    cout << "Enter a number : " ;

    cin >> x ;

    if ( x % 15 == 0)
    {
        cout<<"Divisible" ;
    }
    else 
    {
        cout<<"Not fulfilled condition" ;
    }
}