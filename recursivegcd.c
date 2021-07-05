#include <stdio.h>
int gcd(int, int);
int main() {
    int n1,n2,div;
    printf("Enter two numbers to find gcd:");
    scanf("%d%d", &n1, &n2);
    div=gcd(n1,n2);
    printf("The gcd of %d and %d is %d", n1, n2, div);
    return 0;
}

int gcd(int a, int b){
   if(b==0)
   return a;
   else 
   return gcd(b, a%b);
}