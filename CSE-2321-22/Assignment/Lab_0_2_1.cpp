/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10000], n , element , loc = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    cin>>element;
    int j = 1;
    while (loc == 0 && j <= n)
    {
        if ( arr[j] == element)
        {
            loc = j;
        }
        j++;
    }
    if ( loc == 0)
    {
        cout<<"Item is not in the array"<<endl;
    }
    else
    {
        cout<<loc<<" is the location of "<<element<<endl;
    }
    return 0;
}