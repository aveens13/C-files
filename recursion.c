#include <stdio.h>
int fact(int);
int main(){
    int num;
    printf("Enter the number for its factorial:");
    scanf("%d", &num);
    printf("The factorial is %d", fact(num));
    
return 1;
}

int fact(int a){
    if (a==0)
    return 1;
    else
    return a * fact(a-1);
}