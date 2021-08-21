#include<stdio.h>
int perfectNumber(int);
int main(){
    int num,num1;
    printf("Enter a number:");
    scanf("%d",&num);
    num1 = perfectNumber(num);
    if(num1 == num){
        printf("%d is a perfect number.",num);
    }
    else{
        printf("%d is not a perfect number.",num);
    }
    return 0;
}
int perfectNumber(int num){
    int sum=0;
    for(int i=1;i<num;i++){
        if(num % i == 0){
            sum=sum+i;
        }
    }
    return sum;
}