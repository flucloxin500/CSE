#include <bits/stdc++.h>

using namespace std;

void min_location(int arr[], int k, int n, int &LOC)
{
    int MIN = arr[k];
    LOC = k;
    for (int j = k + 1; j <= n; j++)
    {
        if (MIN > arr[j])
        {
            MIN = arr[j];
            LOC = j;
        }
    }
}

void Suwap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void selection_sort(int arr[], int n)
{
    for (int k = 1; k <= n - 1; k++)
    {
        int LOC;
        min_location(arr, k, n, LOC);
        Suwap(arr[k], arr[LOC]);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n + 5];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    selection_sort(arr, n);
    cout << "Sorted array is:";
    for (int i = 1; i <= n; i++)
        cout << " " << arr[i];
    cout << endl;
    return 0;
}
