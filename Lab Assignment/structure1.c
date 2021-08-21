#include <stdio.h>
#include <string.h>
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