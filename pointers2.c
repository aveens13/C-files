#include<stdio.h>
void poin(int *p,int x[5]){
    p=x;
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=*(p+i);
    }
    float av;
    av=sum/5;
    printf("The average is %.2f",av);
}
int main(){
    int x[5];
    int *p;
    p = x;
    for(int i=0;i<5;i++){
        printf("Enter the value of %dth element:\n",i+1);
        scanf("%d",p+i);
    }
    poin(p,x);
    
    return 0;
}