#include <stdio.h>
int m,n;
void addmat(int [m][n],int [m][n]);
int main(){
    printf("Enter the rows of the matrix: ");
    scanf("%d",&m);
    printf("Enter the columns of the matrix: ");
    scanf("%d",&n);
    int mat[m][n],mat1[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter [%d][%d]th element of 1st matrix: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\n\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter [%d][%d]th element of 2nd matrix: ",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    addmat(mat,mat1);
}
void addmat(int mat[m][n],int mat1[m][n]){
    int mat3[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            mat3[i][j] = mat1[i][j] + mat[i][j];
            printf("\t%d",mat3[i][j]);
        }
        printf("\n");
    }
}