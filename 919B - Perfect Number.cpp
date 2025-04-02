#include <stdio.h>

int main()
{
    int k, c = 0, n = 1;
    scanf("%d", &k);
    while (1)
    {
        int s = 0, t = n;
        while (t > 0)
        {
            s += t % 10;
            t /= 10;
        }
        if (s == 10)
        {
            c++;
            if (c == k)
            {
                printf("%d\n", n);
                return 0;
            }
        }
        n++;
    }
}
