#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char p[4];  
        scanf("%s", p);  
        int a = p[0] - '0';
        int b = p[2] - '0';

        printf("%d\n", a + b);
    }

    return 0;
}
