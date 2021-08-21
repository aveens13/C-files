#include<stdio.h>
int gcd(int ,int);
int main(){
    int num1,num2,ret;
    printf("Enter any two numbers to find gcd: ");
    scanf("%d%d",&num1,&num2);
    ret = gcd(num1,num2);
    printf("The gcd of two numbers is %d.",ret);
}
int gcd(int num1,int num2){
    if(num2==0) return num1;
    else return gcd(num2,num1%num2);
}