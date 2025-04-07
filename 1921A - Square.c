#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int x[4], y[4];
        for (int i = 0; i < 4; i++)
        {
            scanf("%d %d", &x[i], &y[i]);
        }

        int side = 0;
        for (int i = 0; i < 4; i++)
        {
            for (int j = i + 1; j < 4; j++)
            {
                if (x[i] != x[j])
                {
                    side = abs(x[i] - x[j]);
                }
                if (y[i] != y[j])
                {
                    side = abs(y[i] - y[j]);
                }
            }
        }

        printf("%d\n", side * side);
    }

    return 0;
}
