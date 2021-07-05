#include <stdio.h>
int fib(int count){
    static int f1=1,f2=1;
    int f;
    f=(count<3)?1:f1+f2;
    f2=f1;
    f1=f;
 return f;
}
int main(){
    int i,n;
    printf("Enter how many numbers: ");
    scanf("%d",&n);
     printf("This program prints the fibonacci series on respective count.\n");
    for(i=1;i<=n;i++){
        printf("Count:%d and f=%d\n",i,fib(i));
    }

    return 0;
}