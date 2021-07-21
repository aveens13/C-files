#include<stdio.h>
union strandunion
{
   int a;
   float b;
   char c[20];
};

int main(){
    union strandunion st;
    printf("The memory of union is %d",sizeof(st));
    return 0;
}