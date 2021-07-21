#include<stdio.h>
// defining a structure
typedef struct
{
    float real;
    float imag;
}complex;
int returned(complex x,complex y){
    if(x.real== y.real && x.imag==y.imag){
        printf("The two complex numbers are same so returning value ");
        return 0;
    }
    else if(x.real > y.real && x.imag>y.imag){
        printf("The initial complex numbers is greater so returning value ");
        return 1;
    }
    else{
        printf("The two complex numbers are not same so returning value ");
        return -1;
    }
    return 0;

}
int main(){
    complex x={1,2}, y={3,4};
    int z;
    z=returned(x,y);  
    printf("%d",z);
    return 0;
}