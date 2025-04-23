
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], brr[n];
    
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        brr[i]=arr[n-1-i];
    }
    int flag = 1;
    for(int i=0; i<n; i++){
        if(arr[i]!=brr[i]){
            flag = 0;
            break;
        }
    }
    if(flag == 1) printf("YES");
    else printf("NO");
    return 0;
}
