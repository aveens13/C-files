#include <stdio.h>
int main(){
    int a[100];
    printf("Enter how many numbers you want to sort: ");
    scanf("%d",&a[99]);
    for(int i=0;i<a[99];i++){
        printf("Enter %dth element: ",i+1);
        scanf("%d",&a[i]);
    }
    
    for(int j=0;j<a[99]-1;j++){
        for(int i=0;i<a[99]-1-j;i++){
            if(a[i]>a[i+1]){
                a[98] = a[i];
                a[i] = a[i+1];
                a[i+1]= a[98];
            }
        }
    }
    printf("\n\nSorted Row:\n");
    for(int i=0;i<a[99];i++){
        printf("%d\t",a[i]);
    }
}