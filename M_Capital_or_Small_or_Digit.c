#include <stdio.h>

int main(){

    char a;
    scanf("%c", &a);

    if(a>='A' && a<='Z') printf("ALPHA\nIS CAPITAL");
    else if(a>='a' && a<='z') printf("ALPHA\nIS SMALL");
    else printf("IS DIGIT");
    
    return 0;
}