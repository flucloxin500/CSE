#include <bits/stdc++.h>

using namespace std;

int FibonacciRecursive(int N)
{
    if (N == 0 || N == 1)
    {
        return N;
    }
    int FIB;
    FIB = FibonacciRecursive(N - 1) + FibonacciRecursive(N - 2);
    return FIB;
}
int FibonacciNonRecursive(int N)
{
    if (N == 0 || N == 1)
    {
        return N;
    }
    
    int a = 0, b = 1, c;
    for (int i = 2; i <= N; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    int N;
    cin >> N;
    cout << "Fib num at position: " << N << " is: " << FibonacciRecursive(N) << endl;
    cout << "Fib num at position: " << N << " is: " << FibonacciNonRecursive(N) << endl;
}