#include <iostream>
using namespace std;

#define SIZE 75

void insert_sort(int a[], int len)
{
    for (int i = 1; i < len; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}


int main()
{
    int n;
    cin >> n;
    int arr[SIZE];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insert_sort(arr, n);
    cout << "SORTED ARRAY'S ARE" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
