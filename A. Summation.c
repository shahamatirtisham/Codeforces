#include <stdio.h>
#include <stdlib.h> 

int main()
{
    long long n;
    scanf("%lld", &n);
    long long arrayName[n];

    for (long long i = 0; i < n; i++) {
        scanf("%lld", &arrayName[i]);
    }
    long long sum = 0;
    for (long long i = 0; i < n; i++) {
        sum += arrayName[i];
    }
    printf("%lld", llabs(sum));
    return 0;
}
