#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int flag = 0;

        for (int i = 0; i < n - 2; i++)
        {
            for (int p = i + 2; p < n; p++)
            {
                if (arr[i] == arr[p])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag)
                break;
        }
        if (flag == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
