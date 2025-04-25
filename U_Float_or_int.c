#include <stdio.h>

int main() {
    double N;
    int integer_part;
    double decimal_part;

    scanf("%lf", &N);

    integer_part = (int)N;
    decimal_part = N - integer_part;

    if (decimal_part == 0) {
        printf("int %d\n", integer_part);
    } else {
        printf("float %d %.3lf\n", integer_part, decimal_part);
    }

    return 0;
}