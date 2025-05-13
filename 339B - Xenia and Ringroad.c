#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }
    long long time = 0;
    int current = 1;
    for (int i = 0; i < m; i++) {
        int target = a[i];
        if (target >= current) {
            time += target - current;
        } else {
            time += n - current + target;
        }
        current = target;
    }
    printf("%lld\n", time);
    return 0;
}
