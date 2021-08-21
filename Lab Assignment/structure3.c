#include <stdio.h>
#include <string.h>
typedef struct 
{
    int month;
    char monthy[20];
    int day;
    int year;
}date;
int main(){
    date today;
    printf("Enter the day: ");
    scanf("%d",&today.day);
    printf("Enter the month: ");
    scanf("%d",&today.month);
    printf("Enter the year: ");
    scanf("%d",&today.year);
    printf("\n\n");
    switch (today.month)
    {
    case 1:
        strcpy(today.monthy,"January");
        break;
    case 2:
        strcpy(today.monthy,"February");
        break;
    case 3:
        strcpy(today.monthy,"March");
        break;
    case 4:
        strcpy(today.monthy,"April");
        break;
    case 5:
       strcpy(today.monthy,"May");
        break;
    case 6:
        strcpy(today.monthy,"June");
        break;
    case 7:
        strcpy(today.monthy,"July");
        break;
    case 8:
        strcpy(today.monthy,"August");
        break;
    case 9:
        strcpy(today.monthy,"September");
        break;
    case 10:
        strcpy(today.monthy,"October");
        break;
    case 11:
        strcpy(today.monthy,"November");
        break;
    case 12:
       strcpy(today.monthy,"December");
        break;
    
    default:
        break;
    }
    printf("%s %d,%d",today.monthy,today.day,today.year);
}