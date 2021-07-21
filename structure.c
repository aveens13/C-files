#include<stdio.h>
typedef struct{
    int roll_no;
    float marks;
}student;
int main(){
    int i,j;
student s[5];
for(i=0;i<5;i++){
    printf("Enter roll no and marks of student %d:\n",i+1);
    scanf("%d%f",&s[i].roll_no,&s[i].marks);
}
for(i=0;i<5;i++){               //runs 5+1 times
    for(j=0;j<5-i-1;j++){       
        if(s[j].marks>s[j+1].marks){
            student p;
            p=s[j];
            s[j]=s[j+1];
            s[j+1]=p;
        }
    }
}
printf("After Bubblesort\n");
    for(i=0;i<5;i++){
        printf("\nRoll No:%d\tMarks:%.2f",s[i].roll_no,s[i].marks);
    }
}