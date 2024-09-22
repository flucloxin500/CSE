#include<iostream>
#include<climits>

using namespace std ;

int main ()
{
    int x ;

    cin >> x ;

    if ( x % 2 == 0)
    {
        cout << "Even" << endl ;
        cout << "Hurray!\n" ;
    }
    if ( x % 2 != 0)
    {
        cout << "Odd\n" ;
    }

}