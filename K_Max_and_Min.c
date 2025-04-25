#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int maxi, mini;

    if (a >= b && a >= c)
    {
        maxi = a;
    }
    else if (b >= a && b >= c)
    {
        maxi = b;
    }
    else
    {
        maxi = c;
    }

    if (a <= b && a <= c)
    {
        mini = a;
    }
    else if (b <= a && b <= c)
    {
        mini = b;
    }
    else
    {
        mini = c;
    }

    printf("%d %d", mini, maxi);

    return 0;
}