#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int maxi, mini;
    if(a>b && a>c){
        if(b>c){
            mini=c;
        }
        else{
            mini = b;
        }
        maxi = a;
    }
    else if(b>a && b>c){
        if(a>c){
            mini = c;
        }
        else{
            mini = a;
        }
        maxi = b;
    }
    else if(c>a && c>b){
        if(a>b){
            mini = b;
        }
        else{
            mini = a;
        }
        maxi = c;
    }
    
    printf("%d %d", mini, maxi);
    
    
    return 0;
}
