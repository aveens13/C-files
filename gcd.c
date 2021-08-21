
#include <stdio.h>
int gcdiv(int, int);
int main()
{
    int x,y,d;
    printf("Enter two numbers to find gcd: ");
scanf("%d%d", &x,&y);
d= gcdiv(x,y);
printf("The gcd of %d and %d is %d", x,y,d);
    

    return 0;
}
int gcdiv(int a, int b){
    int i,gcd;
    i=1;
    while(i<=a && i<=b){
        if(a%i==0 && b%i==0)
            gcd=i;
        i++;
    }
    return gcd;
}