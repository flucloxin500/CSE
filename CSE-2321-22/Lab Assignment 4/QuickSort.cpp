#include <bits/stdc++.h>

using namespace std;

int QuickSort(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int main()
{
    int n;
    cin >> n;
    int arr[n + 5];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    qsort(arr, n, sizeof(int), QuickSort);
    for (int j = 0; j < n; j++)
        cout << arr[j] << " ";
    cout << endl;
    return 0;
}