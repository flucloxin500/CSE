#include <bits/stdc++.h>

using namespace std;

void insertionSOrt(int A[], int N)
{
    A[0] = INT_MIN;

    for (int k = 2; k <= N; ++k)                //?  2  8  5  3  9
    {
        int Temp = A[k];                       //?  3
        int ptr = k - 1;                       //? 8
        while (Temp < A[ptr])                  //? 5 < 2
        {
            A[ptr + 1] = A[ptr];               //? 
            ptr--;
        }
        A[ptr + 1] = Temp;
    }
}

int main()
{
    int t;
    cin >> t;
    int A[t + 5];
    for (int i = 1; i <= t; i++)
        cin >> A[i];
    insertionSOrt(A, t);
    for (int i = 1; i <= t; ++i)
        cout << A[i] << " ";
    cout << endl;
    return 0;
}