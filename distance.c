#include<stdio.h>
#include<math.h>
typedef struct 
{
    float x;
    float y;
}distance;
float dist(float,float);
float dist1(float,float);
int main(){
    distance i,j;
    float x1,y1;
    printf("Please provide the x and y value of initial point:");
    scanf("%f%f",&i.x,&i.y);
    printf("Please provide the x and y value of second point:");
    scanf("%f%f",&j.x,&j.y);
    x1=dist(i.x,j.x);
    y1=dist1(i.y,j.y);
    printf("The distance between these two points in the graph is %.2f.",sqrt(x1+y1));

    return 0;
}
float dist(float a,float b){
    float x_dif;
    x_dif=b-a;
    return pow(x_dif,2);   
}
float dist1(float a,float b){
    float y_dif;
    y_dif=b-a;
    return pow(y_dif,2);   
}