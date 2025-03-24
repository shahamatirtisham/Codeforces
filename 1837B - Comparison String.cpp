#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char s[101];
        scanf("%s", s);
        int m = 1;
        int c = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                c++;
                if (c > m)
                    m = c;
            }
            else
            {
                c = 1;
            }
        }
        printf("%d\n", m + 1);
    }
    return 0;
}
