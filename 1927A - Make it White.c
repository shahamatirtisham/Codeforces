#include <stdio.h>
#include <string.h>

int fi(char arr[], char c, int n){
    int f;
    for(int i=0; i<n; i++){
        if(arr[i] == 'B'){
            f = i;
            break;
        }
    }
    return f;
}
int la(char arr[], char c, int n){
    int l;
    for(int i=0; i<n; i++){
        if(arr[i] == 'B'){
            l = i;
        }
    }
    return l;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        char arr[n];
        scanf("%s", arr);
        int first, last;
        first = fi(arr, 'B', n);
        last = la(arr, 'B', n);
        printf("%d\n", last - first + 1);
    }

    return 0;
}
