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

        int count = 0;
        int min_price = arr[n - 1]; 

        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] > min_price)
                count++;
            else
                min_price = arr[i];
        }

        printf("%d\n", count);
    }
    return 0;
}
