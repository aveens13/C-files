#include <stdio.h>
int fact(int);
int main(){
    int num,ret;
    printf("Enter a number to calculate the factorial: ");
    scanf("%d",&num);
    ret = fact(num);
    printf("\nThe factorial of given number is %d.",ret);
}
int fact(int num){
    int factorial,sum=0;
    factorial = num;
    for(int i=0;i<num;i++){
        if(num-i-1 != 0){
            printf("\n%d X %d = %d",num-i,num-i-1,(num-i)*(num-i-1));
            factorial *=num-i-1;
        }
    }

    return factorial;
}