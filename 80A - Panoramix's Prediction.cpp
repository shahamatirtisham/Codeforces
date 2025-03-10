#include <stdio.h>


int is_p(int x) {
    if (x < 2) return 0;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return 0;
    }
    return 1;
}


int next_p(int x) {
    int nxt = x + 1;
    while (!is_p(nxt)) {
        nxt++;
    }
    return nxt;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    if (next_p(n) == m)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}