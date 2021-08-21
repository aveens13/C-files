#include<stdio.h>
int reverse(int);
int main(){
    int num,rev;
    printf("Enter a number: ");
    scanf("%d",&num);
    rev = reverse(num);
    printf("The reverse of a given number is %d",rev);
}
int reverse(int num){
    int remainder,rev=0;
    while(num != 0){
        remainder = num % 10;
        rev = rev*10 +remainder;
        num/=10;
    }
    return rev;
}