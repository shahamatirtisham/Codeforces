#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int year = n/365;
    int months = (n%365) / 30;
    int days = (n%365) % 30;

    printf("%d years\n%d months\n%d days", year, months, days);

    return 0;
}