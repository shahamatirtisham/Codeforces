#include <stdio.h>

int main()
{
    int t, l, r, d, u;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d%d%d", &l, &r, &d, &u);
        int a = l + r;
        int b = d + u;
        if (a == b && l == d && r == u)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
