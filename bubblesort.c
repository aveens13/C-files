#include <stdio.h>
int main(){
    int i,j,a[100];
    printf("Enter how many numbers you want to compare:");
    scanf("%d",&a[99]);
    for(i=0;i<a[99];i++){
        printf("Enter %dth element:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<a[99]-1;i++){
        for(j=0;j<a[99]-1-i;j++){
            if(a[j]>a[j+1]){
                int var;
                var=a[j];
                a[j]=a[j+1];
                a[j+1]=var;
                
            }
        }
    }
    printf("After Bubblesort\n");
    for(i=0;i<a[99];i++){
        printf("\t %dth element: %d",i+1,a[i]);
    }
    
    
    return 0;
}