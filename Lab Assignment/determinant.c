#include <stdio.h>
void determinant(int [2][2]);
int main(){
    int mat[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Enter [%d][%d]th element of matrix: ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    determinant(mat);
}
void determinant(int mat[2][2]){
    int det;
    det = (mat[0][0]* mat[1][1]) - (mat[0][1] * mat[1][0]);
    printf("The determinant of 2x2 matrix is %d",det);
}