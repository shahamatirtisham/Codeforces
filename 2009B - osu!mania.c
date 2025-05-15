#include <stdio.h>
char a[501][5];
int main() {
    int t,n,i,j;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%s",a[i]);
        for(i=n-1;i>=0;i--)
            for(j=0;j<4;j++)
                if(a[i][j]=='#')
                    printf("%d ",j+1);
        printf("\n");
    }
    return 0;
}
