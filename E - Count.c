
#include <stdio.h>

int main()
{
    char str[1000000];
    scanf("%s", str);
    
    int sum = 0;
    
    for(int i=0; str[i]!='\0'; i++){
        sum+=str[i] - '0';
    }
    
    printf("%d", sum);

    return 0;
}
