#include <stdio.h>
typedef struct 
{
    int sec;
    int hour;
    int minute;
}date;
int main(){
    date tm;
    printf("Enter the hours: ");
    scanf("%d",&tm.hour);
    printf("Enter the minutes: ");
    scanf("%d",&tm.minute);
    printf("Enter the Seconds: ");
    scanf("%d",&tm.sec);
    printf("\n\n");
    printf("%d:%d:%d",tm.hour,tm.minute,tm.sec);
}