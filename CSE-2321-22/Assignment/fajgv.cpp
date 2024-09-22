/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10000], n, i, x, pos;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    cin >> x;
    cin >> pos;
    for (i = n; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = x;
    for (i = 1; i <= n + 1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
