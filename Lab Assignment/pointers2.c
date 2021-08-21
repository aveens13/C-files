#include <stdio.h>
int main(){
        int i,j,k=0;
    int c[3][3];
    int a[3][3];
    int b[3][3];
    printf("Enter the elemnts of 1st matrix\n");
     for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d,%d:",i+1,j+1);
            scanf("%d",(*(a+i)+j));
        }
        printf("\n");
    }

printf("Enter the elemnts of 2nd matrix\n");
 for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d,%d:",i+1,j+1);
            scanf("%d",(*(b+i)+j));
        }   
        printf("\n");
    }
for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            *(*(c+i)+j) = 0;
           for(k=0;k<3;k++){
               *(*(c+i)+j)+=(*(*(a+i)+k))*(*(*(b+k)+j));
           }
           
        }
    printf("\n");
}
printf("The multiplication of 3x3 marix is\n");
for (i=0;i<3;i++){
        for(j=0;j<3;j++){
           printf("%d  ",*(*(c+i)+j));
        }
    printf("\n");
}
}
