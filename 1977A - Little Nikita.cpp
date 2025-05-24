#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        if (m > n || (n - m) % 2 != 0) {
            printf("No\n");
        } else {
            printf("Yes\n");
        }
    }
    return 0;
}
