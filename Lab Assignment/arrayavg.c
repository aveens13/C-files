#include <stdio.h>
int main(){
    int num;
    float sum=0;
    printf("Enter the numbers you want average of: ");
    scanf("%d",&num);
    int arrnum[num];
    for(int i=0;i<num;i++){
        printf("Enter a number: ");
        scanf("%d",&arrnum[i]);
        sum +=arrnum[i];
    }
    float avg = sum/num;
    printf("The average of %d numbers is %.2f",num,avg);
}