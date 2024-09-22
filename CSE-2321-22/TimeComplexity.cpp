int main()
{

    int fun2(int n)
    {
        int i, j, sum = 0;
        for (i = 0; i * i < n; i++)
        {
            for (j = 1; j * j <= n; j++)
            {
                sum += i * j;
            }
        }
        return sum;
    }
}