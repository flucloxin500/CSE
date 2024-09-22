#include<bits/stdc++.h>

using namespace std;

int Ackermann(int m , int n)
{
   if ( m == 0)
   {
      return n+1 ;
   }
   else if ( m > 0 && n == 0)
   {
      return Ackermann(m-1,1);
   }
   else if ( m > 0 && n > 0)
   {
      return Ackermann(m-1,Ackermann(m,n-1));
   }
}

int main()
{
   int m,n;
   cin>>m>>n;
   cout<<"Ackermann value is: "<<Ackermann(m,n)<<endl;
}