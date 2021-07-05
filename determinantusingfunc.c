#include <stdio.h>
void detr(int [2][2]);
void add(int [3][4],int [3][4]);
void sub(int [3][4],int [3][4]);
void transpose();
int main(){
    int i,j;
    int matrix1[2][2];
    detr(matrix1);
    int b,c;
    b=matrix1[0][0]*matrix1[1][1];
    c=matrix1[0][1]*matrix1[1][0];
    printf("The determinant is %d \n",b-c);
    int add_matrix1[3][4], add_matrix2[3][4];
    printf("\t\tTo add two matix\n");
    printf("Enter the elemnts of 1st matrix\n");
     for (i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d,%d:",i+1,j+1);
            scanf("%d",&add_matrix1[i][j]);
        }
        printf("\n");
    }
    printf("Enter the elemnts of 2nd matrix\n");
     for (i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d,%d:",i+1,j+1);
            scanf("%d",&add_matrix2[i][j]);
        }
        printf("\n");
    }
    add(add_matrix1,add_matrix2);
    printf("The substraction of two matrix is:\n");
    sub(add_matrix1,add_matrix2);
    printf("The transpose of a matrix is.\n");
    transpose();
    return 0;
}
void detr(int x[2][2]){
    int i,j;
    printf("\t\tTo find the determinant of a square matrix.\n");
    printf("Enter the elements for 2x2 matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter {%d,%d} of the matrix:",i+1,j+1);
            scanf("%d",&x[i][j]);
        }
    }
    
}
void add(int z[3][4], int y[3][4]){
    int i,j;
    int added_matrix[3][4];
    for (i=0;i<3;i++){
        for(j=0;j<4;j++){
            added_matrix[i][j]=z[i][j]+y[i][j];
            printf("[%d]",added_matrix[i][j]);
            printf("  ");
        }
        printf("\n");
    }


}
void sub(int z[3][4], int y[3][4]){
    int i,j;
    int sub_matrix[3][4];
    for (i=0;i<3;i++){
        for(j=0;j<4;j++){
            sub_matrix[i][j]=z[i][j]-y[i][j];
            printf("[%d]",sub_matrix[i][j]);
            printf("  ");
        }
        printf("\n");
    }


}
void transpose(){
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
}
