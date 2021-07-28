#include <stdio.h>
#include <math.h>
void section1(float);
void section2(float);
void section21(float);
void area2(float);
void calculation();
float velocity1,velocity2,height1,height2,pressure1,pressure2;
int main(){
    int user_choice,usr;
    float fr;
    here:
    printf("Enter the flow rate of liquid in cubic metre per sec:");
    scanf("%f",&fr);
    section1(fr);
    printf("Enter what operation you want for section 2.\n1.Height of section 2\n2.Area of section 2\n3.Pressure of section 2\n->");
    scanf("%d",&usr);
    if (usr==1){
        section21(fr);
    }
    else if (usr==2)
    {
        area2(fr);
    }
    else{
        section2(fr);
        calculation();
    }
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
//Height section
void section21(float flow_rate){
    float diameter,area,pressure_f,density,height;
printf("Enter the Diameter of section2 in metres:");
scanf("%f",&diameter);
area=M_PI*pow(diameter,2)/4;
velocity2=flow_rate/area;
printf("\n");
printf("The velocity of section 2 is %f metre per sec",velocity2);
printf("\n");
printf("Enter the pressure of section2 in pascal:");
scanf("%f",&pressure_f);
printf("Enter the density of liquid in kg per cubic metre:");
scanf("%f",&density);
height=pressure1-pressure_f+(density*9.8*height1)+(0.5*density*pow(velocity1,2));
height-=(0.5*density*pow(velocity2,2));
height/=density*9.8;
printf("The height of section 2 is %.2f",height);
}
//Area Section
void area2(float flow_rate){
    float velocity,area;
    printf("Input Velocity of section 2");
    scanf("%f",&velocity);
    area=flow_rate/velocity;
    printf("The area of section 2 is %f sq meter",area);
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