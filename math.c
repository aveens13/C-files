#include<stdio.h>
int main(){
    int i;
    int n;
    n=10;
    float sum=0;
    for(i=1;i<=n;i++){
        
        sum+=1/i;
    }
    printf("%f",sum);
    return 0;
}