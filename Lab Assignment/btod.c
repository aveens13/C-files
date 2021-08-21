#include <stdio.h>
#include <math.h>
#include <string.h>
int bintodec(char [],int);
int main(){
    char bits[20];
    int ret;
    printf("Enter a binary number:");
    scanf("%s",bits);
    ret = bintodec(bits,strlen(bits));
    printf("The converted decimal number is %d",ret);
}
int bintodec(char num[],int length){
    int decimal = 0;
    for(int i=0;i<length;i++){
        if(num[i] == '1')
            decimal+=pow(2,i);
    }
    return decimal;
}