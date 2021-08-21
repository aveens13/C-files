#include <stdio.h>
#include<math.h>
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