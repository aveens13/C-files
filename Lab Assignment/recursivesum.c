#include <stdio.h>
int sum(int);
int main(){
    int num,ret;
    printf("Enter a number: ");
    scanf("%d",&num);
    ret = sum(num);
    printf("The sum up to %d is %d.",num,ret);
}
int sum(int num){
    if(num == 1) return 1;
    else return num + sum(num-1);
}