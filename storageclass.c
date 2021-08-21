#include <stdio.h>
int increment();
int main(){
    // static int i=0;
    increment();
    increment();
    increment();
}
int increment(){
    static int i=0;
    i=i+1;
    printf("\ni = %d",i);

}