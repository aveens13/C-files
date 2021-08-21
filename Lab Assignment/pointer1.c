#include<stdio.h>
void swap(int *x,int *y){
    int temp= *x;
    *x=*y;
    *y=temp;
    printf("\nInside FUnction\n");
    printf("x= %d, y= %d",*x,*y);
    
}
int main(){
    int x,y;
    x=9;
    y=10;
    printf("Before Swapping\n");
    printf("x= %d, y= %d",x,y);
    swap(&x,&y);
    printf("\nAfter swapping\n");
    printf("x= %d, y= %d",x,y);
}
