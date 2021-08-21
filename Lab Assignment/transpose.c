#include <stdio.h>
int n;
void transpose(int [n][n]);
int main(){
    printf("Enter row/column of matrix: ");
    scanf("%d",&n);
    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter [%d][%d]th element: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    transpose(mat);
    return 0;
}
void transpose(int mat[n][n]){
    int mat1[n][n];
    printf("\n\nThe Transpose of given matrix is :\n");
    for(int i=0;i<n;i++){
        printf("|");
        for(int j=0;j<n;j++){
            mat1[i][j] = mat[j][i];
            printf("%d\t",mat1[i][j]);
        }
        printf("|");
        printf("\n");
    }
}