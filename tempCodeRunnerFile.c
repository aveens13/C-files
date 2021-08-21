for (i=0;i<3;i++){
        for(j=0;j<3;j++){
           c[i][j]=(a[i][k]*b[i][j])+(a[i][k+1]*b[i+1][j])+(a[i][k+2]*b[i+2][j]);
        }
    printf("\n");
}
printf("The multiplication of 3x3 marix is\n");
for (i=0;i<3;i++){
        for(j=0;j<3;j++){
           printf("%d  ",c[i][j]);
        }
    printf("\n");
}