#include<stdio.h>
#include<string.h>
typedef struct 
{
    int year,day,month;
    char monthy[10];
}date;
void delay(int a){
    int add;
    int time=a*10000000000;
    for(int i=0;i<time;i++){
        add*=i;
        add++;
        add++;

    }
}
int main(){
    date today;
    int i,j,k,days;
    printf("Enter today's date in year/month/day format: ");
    scanf("%d/%d/%d",&today.year,&today.month,&today.day);
    printf("How many days you want to add?\n->");
    scanf("%d",&days);
    today.day+=days;
    here:
    if(today.month==2){
        if(today.day>28){
        today.day-=28;
        today.month+=1;
        goto here;
        }
    }
    else if(today.month==1,3,5,7,8,10,11){
        if(today.day>31){
        today.day-=31;
        today.month+=1;
        goto here;
    }
    }
    else{
        if(today.day>30){
        today.day-=30;
        today.month+=1;
        goto here;
        }
    }
    here1:
    if(today.month>12){
        today.year+=1;
        today.month-=12;
        goto here1;
    }
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
    printf("You are on the time %s %d %d",today.monthy,today.day,today.year);
    return 0;

}
