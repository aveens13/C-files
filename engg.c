#include <stdio.h>
#include <math.h>
void section1(float);
void section2(float);
void calculation();
float velocity1,velocity2,height1,height2,pressure1,pressure2;
int main(){
    int user_choice;
    float fr;
    here:
    printf("Enter the flow rate of liquid in cubic metre per sec:");
    scanf("%f",&fr);
    section1(fr);
    section2(fr);
    calculation();
    printf("\nDo you want to calculate again?\n1.Yes\n2.No\n");
scanf("%d",&user_choice);
switch (user_choice)
{
case 1:
    goto here;
    break;

default:
printf("Thankyou!");
    break;
}
    return 0;
}
void section1(float flow_rate){
    float diameter,area;
printf("Enter the Diameter of section1 in metres:");
scanf("%f",&diameter);
area=M_PI*pow(diameter,2)/4;
velocity1=flow_rate/area;
printf("\n");
printf("The velocity of section 1 is %f metre per sec",velocity1);
printf("\n");
printf("Enter the height of section1 in metres:");
scanf("%f",&height1);
printf("Enter the pressure at section1 in pascal:");
scanf("%f",&pressure1);
}
void section2(float flow_rate){
        float diameter,area;
printf("Enter the Diameter of section2 in metres:");
scanf("%f",&diameter);
area=M_PI*pow(diameter,2)/4;
velocity2=flow_rate/area;
printf("\n");
printf("The velocity of section 2 is %f metre per sec",velocity2);
printf("\n");
printf("Enter the height of section2 in metres:");
scanf("%f",&height2);
}
void calculation(){
    float density;
    printf("Enter the density of liquid in kg per cubic metre:");
    scanf("%f",&density);
pressure2=pressure1+(0.5*density*pow(velocity1,2));
pressure2+=density*9.8*height1;
pressure2-=0.5*density*pow(velocity2,2);
pressure2-=density*9.8*height2;
printf("The pressure at second section is %.2fpa",pressure2);
}