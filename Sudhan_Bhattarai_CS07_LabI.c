
#include <stdio.h>

int main()
{
    //Question 1
float celsius, fahrenheit;
printf("Enter celsius scale: ");
scanf("%f", &celsius);
fahrenheit = celsius*9/5 + 32;
printf("%f\n", fahrenheit);

   // Question 2
 float radius,Area,Circumference;
 const float(pi) = 3.1415;
 printf("Enter the radius of circle:");
 scanf("%f",&radius);
 Area = pi * radius * radius;
 Circumference = 2*pi*radius;
 printf("%f\n", Area);
 printf("%f\n", Circumference);
 
 //Question3
 float base, height, area;
 printf("Enter length of base of triangle:");
 scanf("%f", &base);
 printf("Enter the height of triangle: ");
 scanf("%f", &height);
 area= 0.5*base*height;
 printf("%f\n", area);
 
 //Question4
 float A,B,C, Percentage;
 printf("Enter marks in three subjects:");
 scanf("%f%f%f", &A,&B,&C);
 Percentage = (A+B+C)/3;
 printf("The Percentage is %f%%", Percentage);
 
 //Questin5
 int a;
 printf("Enter a number:");
 scanf("%d", &a);
 if (a%2==0)
 printf("It is Even");
 else
 printf("It is Odd\n");
 
 //Question6
 int num1, num2;
 printf("Enter the value of num1:");
 scanf("%d", &num1);
 printf("Enter the value of num2:");
 scanf("%d", &num2);
 if(num1>num2)
 printf("num1 is the largest");
 else
 printf("num2 is the largest");
 
 //Question 7
 int marks;
 printf("Enter your marks:");
 scanf("%d", &marks);
 if(marks>=90)printf("Grade A+");
 else if(marks>=80)printf("Grade A");
 else if(marks>=70)printf("Grade B");
 else if(marks>=60)printf("Grade C");
 else if(marks>=50)printf("Grade D");
 else if(marks>=40)printf("Grade E");
 else printf("Grade F");
 
 //Question8
 int NUM1;
 printf("Enter a number:");
 scanf("%d", &NUM1);
 switch(NUM1%2){
     case 0:
     printf("Even");
     break;
     case 1:
     printf("Odd");
     break;
 }
 
 //Question9
 float num_1, num_2;
 char op;
 printf("Enter two numbers and a operator:");
 scanf("%f%f %c", &num_1,&num_2,&op);
 switch(op){
    case '+':
     printf("%f", num_1+num_2);
     break;
    case '-':
     printf("%f", num_1-num_2);
     break;
    case '/':
     printf("%f", num_1/num_2);
     break;
    case '*':
     printf("%f", num_1*num_2);
     break;
 }
 
 //Question10
 char letter;
 printf("Enter a letter in lowercase:");
 scanf(" %c", &letter);
 switch(letter){
     case 'a':
     case 'e':
     case 'i':
     case 'o':
     case 'u':
     printf("Vowel");
     break;
     default:
     printf("Constant");
 }

    return 0;
}
