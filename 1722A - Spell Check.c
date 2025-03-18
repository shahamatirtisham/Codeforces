#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sortString(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (str[i] > str[j])
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        char str[11]; 
        scanf("%s", str);

        if (n != 5)
        {
            printf("NO\n");
            continue;
        }

        char correct[] = "Timur";
        sortString(correct);
        sortString(str);

        if (strcmp(correct, str) == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
