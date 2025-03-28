#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n, k;
        scanf("%lld %lld", &n, &k);
        long long operations = 0;
        if (n % 2 == 0)
        {
            operations = n / (k - 1);
            if (n % (k - 1) != 0)
            {
                operations++;
            }
        }
        else
        {
            if (n >= k)
            {
                operations = 1 + (n - k) / (k - 1);
                if ((n - k) % (k - 1) != 0)
                {
                    operations++;
                }
            }
            else
            {
                operations = 1;
            }
        }
        printf("%lld\n", operations);
    }
    return 0;
}
