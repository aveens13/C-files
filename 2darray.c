#include <stdio.h>
int main(){
    int i,j;
    int c[3][4];
    int a[3][4];
    int b[3][4];
    printf("Enter the elemnts of 1st matrix\n");
     for (i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d,%d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

printf("Enter the elemnts of 2nd matrix\n");
 for (i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d,%d:",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

printf("The addition of two matrices of 3x4 is C=\n");
    for (i=0;i<3;i++){
        for(j=0;j<4;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d",c[i][j]);
            printf("  ");
        }
        printf("\n");
    }
}