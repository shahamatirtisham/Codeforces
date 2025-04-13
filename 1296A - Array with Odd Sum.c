#include <stdio.h>

int main()
{

    FILE *file = fopen("say.txt", "r");

    if( file== NULL)
    {
        perror("Error");
        return 1;
    }

    int a,b,c,d;

    while (fscanf(file, "%d-%d-%d-%d", &a, &b, &c, &d) == 4)
    {
        int sum = a + b + c + d;
        printf("%d\n", sum);
    }


    fclose(file);


    return 0;
}
