#include <stdio.h>

int main(){

    long long a,b,c,d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    long long mul = a*b*c*d;
    printf("%lld", mul%100);


    return 0;
}