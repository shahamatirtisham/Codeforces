#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[21] = {0};
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int freq[21] = {0};
        for (int i = 0; i < n; i++) {
            freq[a[i]]++;
        }
        int score = 0;
        for (int i = 1; i <= n; i++) {
            score += freq[i] / 2;
        }
        printf("%d\n", score);
    }
    return 0;
}2037A - Twice
