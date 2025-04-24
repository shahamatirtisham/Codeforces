#include <stdio.h>

int main(){
    int n;
    long long l;
    char a;
    float f;
    double d;
    scanf("%d %lld %c %f %lf", &n, &l, &a, &f, &d);
    printf("%d\n%lld\n%c\n%.2f\n%.1lf", n, l, a, f, d);
    return 0;
}