#include<stdio.h>
#include<stdlib.h>
typedef struct{
    char name[20];
    int age;
    int id;
    int batch;
}details;
int main(){
    int n;
    printf("Enter the number of students:");
    scanf("%d",n);
    details *student;
    student = (details *) malloc(n*sizeof(details));
    for(int i=0;i<n;i++){
        printf("Enter the name of %dth student:",i+1);
        scanf("%s",student[i].name);
        printf("Enter the age of %dth student:",i+1);
        scanf("%d",student[i].age);
        printf("Enter the 4 digit student id of %dth student:",i+1);
        scanf("%d",student[i].id);
        printf("Enter the batch-year of %dth student:",i+1);
        scanf("%d",student[i].batch);
    }
    printf("Name:%s\n",*student[0].name);


    return 0;
}