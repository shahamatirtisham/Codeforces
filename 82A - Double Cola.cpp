#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    const char *names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

    int cycle = 1;
    while (n > 5 * cycle)
    {
        n -= 5 * cycle;
        cycle *= 2;
    }

    int i = (n - 1) / cycle;
    printf("%s\n", names[i]);

    return 0;
}
