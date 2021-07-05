#include <stdio.h>
int main(){
    int i,j;
    int b[4][3];
    int a[3][4]={{1,2,3,10},
             {4,5,6,11},
             {7,8,9,12}};
    printf("The transpose of matrix a is \n");
    for (i=0;i<4;i++){
        for (j=0;j<3;j++){
            b[i][j]=a[j][i];
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}