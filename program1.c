#include <stdio.h>
#include <math.h>
int main(){
    
    int num_of_students,i,j,n;
    j=0;
    n=1;
    float c_marks,p_marks,a,b,c,d;
    c=0;d=0;
    here:
    printf("How many students?\n");
    scanf("%d",&num_of_students);
    for(int i=0;i<num_of_students;i++){
        printf("Enter marks obtained by student %d in the following subjects:\n",i+1);
        printf("C Programming:");
        printf("\n");
        scanf("%f",&a);
        printf("Physics:");
        printf("\n");
        scanf("%f",&b);
        c_marks+=a;
        p_marks+=b;
        if(c<a)c=a;
        if(d<b)d=b;
    }
int user_input;
while (n==1){
printf("Select an operation\n");
printf("%d. Exit\n",j);
printf("%d. Print highest marks\n",j+1);
printf("%d. Print average marks\n",j+2);
printf("%d. Restart the program\n",j+3);
printf("*****************************************");
printf("\n");
scanf("%d",&user_input);
switch (user_input){
case 0:
    printf("Good Bye!\n");
    n=2;
    break;
case 1:
    printf("The highest marks in C Programming is %.2f\n",c);
    printf("The highest marks in Physics is %.2f\n",d);
    n=1;
    break;
case 2:
    printf("The average marks in C Programming is %.2f\n",c_marks/num_of_students);
    printf("The average marks in Physics is %.2f\n",p_marks/num_of_students);
    n=1;
    break;
case 3:
    goto here;
    break;


default:
    printf("Invalid input\n");
    n=1;}
}
return 0;
}
