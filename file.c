#include <stdio.h>
int main(){
    char c[100];
    printf("Enter your name:");
    scanf("%[^\n]",c);
    printf("%s",c);
    return 0;
}