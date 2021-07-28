#include<stdio.h>
int main(){
   int *ptr,x,y;
   x=10;
   ptr=&x;
   y=*ptr;
    printf("%d is stored in location %u\n",x,&x);
    printf("%d is stored in location %u\n",*&x,&x);
    printf("%d is stored in location %u\n",*ptr,ptr);
    printf("%d is stored in location %u\n",y,&*ptr);
    printf("%u is stored in location %u\n",ptr,&ptr);
    printf("%d is stored in location %u\n",y,&y);

    *ptr=25;
    printf("Now x=%d",x);


return 0;
}