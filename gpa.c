#include <stdio.h>
void read(int [],int[],int);
void calculate(int [],int[],int);
int i;
int main(){
    int a[100],b[100];
    printf("\nEnter the number of subjects you have:");
    scanf("%d",&a[50]);
    
    read(a,b,a[50]);
    calculate(a,b,a[50]);
    return 0;
}
void read(int x[],int z[],int p){
    for(i=0;i<p;i++){
        printf("Enter your marks in %dth subject:",i+1);
        scanf("%d",&x[i]);
        printf("\tEnter the credit hour on the subject:");
        scanf("%d",&z[i]);
    }
}
void calculate(int y[],int r[],int q){
    float grade,gpa=0,avgpa,n,total_credit=0;
    for(i=0;i<q;i++){
        if(y[i]>=80 && y[i]<=100) {grade=4.0;gpa+=grade*r[i];}
        else if(y[i]>=60 && y[i]<80) {grade=3.0;gpa+=grade*r[i];}
        else if(y[i]>=40 && y[i]<60) {grade=2.0;gpa+=grade*r[i];}
        else {grade=1.0;gpa+=grade*3;};
        
        total_credit+=r[i];
        
    }
    avgpa=gpa/total_credit;
       
    printf("Your GPA is %f\n",avgpa);
    if(avgpa>=3.6)printf("Your grade is A.");
    else if(avgpa>=3.2)printf("Your grade is A-.");
    else if(avgpa>=2.8)printf("Your grade is B.");
    else if(avgpa>=2.4)printf("Your grade is B-.");
    else if(avgpa>=2.0)printf("Your grade is C.");
    else if(avgpa>=1.6)printf("Your grade is D.");
    else printf("Your grade is E.");
}
