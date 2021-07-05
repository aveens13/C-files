
#include <stdio.h>
int fact(int);
int prime(int);

int main()
{
    int value,z,s;
    printf("Enter a integer:");
    scanf("%d", &value);
    z=fact(value);
    s=prime(z);
    if(s==2)
    printf("%d is a prime number", s);
    else
    printf("%d is not a prime number", s);

    return 0;
}
int fact(int k){
    int i=1,fact=1;
    while(i<=k){
    fact=fact*i;
    i++;}
return fact;
}

int prime(int t){
    return t;
}