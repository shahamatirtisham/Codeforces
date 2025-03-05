#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (k % i == 0)
        {
            int j = k / i;
            if (j >= 1 && j <= n)
            {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
