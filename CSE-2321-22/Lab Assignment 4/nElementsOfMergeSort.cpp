#include <iostream>

using namespace std;

void merge(int arr[], int left, int mid, int right)
{
    int nLeft = mid - left + 1;
    int nRight = right - mid;

    int leftArr[nLeft], rightArr[nRight];

    for (int i = 0; i < nLeft; i++)
        leftArr[i] = arr[left + i];
    for (int j = 0; j < nRight; j++)
        rightArr[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < nLeft && j < nRight)
    {
        if (leftArr[i] <= rightArr[j])
        {
            arr[k] = leftArr[i];
            i++;
        }
        else
        {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < nLeft)
    {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < nRight)
    {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Array before Sorting: ";
    display(arr, n);

    mergeSort(arr, 0, n - 1);

    cout << "Array after Sorting: ";
    display(arr, n);

    return 0;
}