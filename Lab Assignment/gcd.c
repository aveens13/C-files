#include<stdio.h>
int gcd(int,int);
int main(){
    int num1,num2,ret;
    printf("Enter two numbers to find the gcd: ");
    scanf("%d%d",&num1,&num2);
    ret = gcd(num1,num2);
    printf("The gcd of %d and %d is %d",num1,num2,ret);
    return 0;
}
int gcd(int num1, int num2){
    int gcd;
    int i= 1;
    if(i < num2 && i < num1){
        for(i=1;i<num1;i++){
            if(num1 % i ==0 && num2 % i==0) gcd=i;
        }
    }
    return gcd;
}