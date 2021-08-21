#include <stdio.h>
int factorial(int);
int main(){
    int num,fac;
    printf("Enter a number for factorial: ");
    scanf("%d",&num);
    fac = factorial(5);
    printf("The factorial is %d",fac);
}
int factorial(int num){
    if(num == 1){
        return 1;
    }
    return num * factorial(num-1);
}