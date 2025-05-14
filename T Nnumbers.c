#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        char s[2001];
        scanf("%d %s", &n, s);
        int l = 0, r = n - 1, c = 0;
        while (l < r) {
            if (s[l] == '0' && s[r] == '1') {
                l++;
                r--;
                c += 2;
            } else {
                break;
            }
        }
        printf("%d\n", n - c);
    }
    return 0;
}
