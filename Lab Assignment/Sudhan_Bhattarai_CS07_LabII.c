#include<stdio.h>
#include<math.h>
#include <string.h>
//Perfect Number
int perfectNumber(int);
int main(){
    int num,num1;
    printf("Enter a number:");
    scanf("%d",&num);
    num1 = perfectNumber(num);
    if(num1 == num){
        printf("%d is a perfect number.",num);
    }
    else{
        printf("%d is not a perfect number.",num);
    }
    return 0;
}
int perfectNumber(int num){
    int sum=0;
    for(int i=1;i<num;i++){
        if(num % i == 0){
            sum=sum+i;
        }
    }
    return sum;
}
//Average
int main(){
    int num;
    float sum=0;
    printf("Enter the numbers you want average of: ");
    scanf("%d",&num);
    int arrnum[num];
    for(int i=0;i<num;i++){
        printf("Enter a number: ");
        scanf("%d",&arrnum[i]);
        sum +=arrnum[i];
    }
    float avg = sum/num;
    printf("The average of %d numbers is %.2f",num,avg);
}
//Binary To decimal
int bintodec(char [],int);
int main(){
    char bits[20];
    int ret;
    printf("Enter a binary number:");
    scanf("%s",bits);
    ret = bintodec(bits,strlen(bits));
    printf("The converted decimal number is %d",ret);
}
int bintodec(char num[],int length){
    int decimal = 0;
    for(int i=0;i<length;i++){
        if(num[i] == '1')
            decimal+=pow(2,i);
    }
    return decimal;
}
//Determinant
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
//Factorial
int fact(int);
int main(){
    int num,ret;
    printf("Enter a number to calculate the factorial: ");
    scanf("%d",&num);
    ret = fact(num);
    printf("\nThe factorial of given number is %d.",ret);
}
int fact(int num){
    int factorial,sum=0;
    factorial = num;
    for(int i=0;i<num;i++){
        if(num-i-1 != 0){
            printf("\n%d X %d = %d",num-i,num-i-1,(num-i)*(num-i-1));
            factorial *=num-i-1;
        }
    }

    return factorial;
}
//GCD
int gcd(int,int);
int main(){
    int num1,num2,ret;
    printf("Enter two numbers to find the gcd: ");
    scanf("%d%d",&num1,&num2);
    ret = gcd(num1,num2);
    printf("The gcd of %d and %d is %d",num1,num2,ret);
    return 0;
}
int gcd(int num1, int num2){
    int gcd;
    int i= 1;
    if(i < num2 && i < num1){
        for(i=1;i<num1;i++){
            if(num1 % i ==0 && num2 % i==0) gcd=i;
        }
    }
    return gcd;
}
//Matrix addition
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
//Pointers Swapping
void swap(int *x,int *y){
    int temp= *x;
    *x=*y;
    *y=temp;
    printf("\nInside FUnction\n");
    printf("x= %d, y= %d",*x,*y);
    
}
int main(){
    int x,y;
    x=9;
    y=10;
    printf("Before Swapping\n");
    printf("x= %d, y= %d",x,y);
    swap(&x,&y);
    printf("\nAfter swapping\n");
    printf("x= %d, y= %d",x,y);
}
void swap(int *x,int *y){
    int temp= *x;
    *x=*y;
    *y=temp;
    printf("\nInside FUnction\n");
    printf("x= %d, y= %d",*x,*y);
    
}
int main(){
    int x,y;
    x=9;
    y=10;
    printf("Before Swapping\n");
    printf("x= %d, y= %d",x,y);
    swap(&x,&y);
    printf("\nAfter swapping\n");
    printf("x= %d, y= %d",x,y);
}
//Recursive Factorial
int factorial(int);
int main(){
    int num,fac;
    printf("Enter a number for factorial: ");
    scanf("%d",&num);
    fac = factorial(5);
    printf("The factorial is %d",fac);
}
int factorial(int num){
    if(num == 1){
        return 1;
    }
    return num * factorial(num-1);
}

//Recursive Gcd
int gcd(int ,int);
int main(){
    int num1,num2,ret;
    printf("Enter any two numbers to find gcd: ");
    scanf("%d%d",&num1,&num2);
    ret = gcd(num1,num2);
    printf("The gcd of two numbers is %d.",ret);
}
int gcd(int num1,int num2){
    if(num2==0) return num1;
    else return gcd(num2,num1%num2);
}
//Sum up to n
int sum(int);
int main(){
    int num,ret;
    printf("Enter a number: ");
    scanf("%d",&num);
    ret = sum(num);
    printf("The sum up to %d is %d.",num,ret);
}
int sum(int num){
    if(num == 1) return 1;
    else return num + sum(num-1);
}
//Reversing
int reverse(int);
int main(){
    int num,rev;
    printf("Enter a number: ");
    scanf("%d",&num);
    rev = reverse(num);
    printf("The reverse of a given number is %d",rev);
}
int reverse(int num){
    int remainder,rev=0;
    while(num != 0){
        remainder = num % 10;
        rev = rev*10 +remainder;
        num/=10;
    }
    return rev;
}
//Bubblesorting
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
//Structure 1
typedef struct
{
    char name[20];
    int age;
    int roll_no;
    int batch;
}STUDENT;
int main(){
    char temp;
    char temp1[20];
    STUDENT a[5];
    for(int i=0;i<5;i++){
        printf("Enter the name of %dth student:",i+1);
        scanf("%s",a[i].name);
        printf("Enter his/her age: ");
        scanf("%d",&a[i].age);
        printf("Enter his/her Roll Number: ");
        scanf("%d",&a[i].roll_no);
        printf("Enter his/her Batch Year: ");
        scanf("%d",&a[i].batch);
    }
    for(int i=0;i<5-1;i++){
        for(int j=0;j<5-1-i;j++){
            if(strcmp(a[j].name,a[j+1].name)>0){
                strcpy(temp1,a[j].name);
                strcpy(a[j].name,a[j+1].name);
                strcpy(a[j+1].name,temp1);
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\nName: %s",a[i].name);
        printf("\nAge: %d",a[i].age);
        printf("\nRoll No: %d",a[i].roll_no);
        printf("\nBatch: %d",a[i].batch);
        printf("\n\n");
    }
    
  
    return 0;
}
//Structure 2
typedef struct 
{
    float x;
    float y;
}distance;

int main(){
    distance graph[2];
    printf("Enter x1:");
    scanf("%f",&graph[0].x);
    printf("Enter y1:");
    scanf("%f",&graph[0].y);
    printf("Enter x2:");
    scanf("%f",&graph[1].x);
    printf("Enter y2:");
    scanf("%f",&graph[1].y);
    float result = sqrt((pow(graph[1].x-graph[0].x,2))+(pow(graph[1].y-graph[0].y,2)));
    printf("The distance between two points is %.2f",result);
}
//Structure 3
typedef struct 
{
    int month;
    char monthy[20];
    int day;
    int year;
}date;
int main(){
    date today;
    printf("Enter the day: ");
    scanf("%d",&today.day);
    printf("Enter the month: ");
    scanf("%d",&today.month);
    printf("Enter the year: ");
    scanf("%d",&today.year);
    printf("\n\n");
    switch (today.month)
    {
    case 1:
        strcpy(today.monthy,"January");
        break;
    case 2:
        strcpy(today.monthy,"February");
        break;
    case 3:
        strcpy(today.monthy,"March");
        break;
    case 4:
        strcpy(today.monthy,"April");
        break;
    case 5:
       strcpy(today.monthy,"May");
        break;
    case 6:
        strcpy(today.monthy,"June");
        break;
    case 7:
        strcpy(today.monthy,"July");
        break;
    case 8:
        strcpy(today.monthy,"August");
        break;
    case 9:
        strcpy(today.monthy,"September");
        break;
    case 10:
        strcpy(today.monthy,"October");
        break;
    case 11:
        strcpy(today.monthy,"November");
        break;
    case 12:
       strcpy(today.monthy,"December");
        break;
    
    default:
        break;
    }
    printf("%s %d,%d",today.monthy,today.day,today.year);
}
//Structure 4
typedef struct 
{
    int sec;
    int hour;
    int minute;
}date;
int main(){
    date tm;
    printf("Enter the hours: ");
    scanf("%d",&tm.hour);
    printf("Enter the minutes: ");
    scanf("%d",&tm.minute);
    printf("Enter the Seconds: ");
    scanf("%d",&tm.sec);
    printf("\n\n");
    printf("%d:%d:%d",tm.hour,tm.minute,tm.sec);
}
int n;
//Trasnpose
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