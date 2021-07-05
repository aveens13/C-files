
#include <stdio.h>

int main()
{
    for(int a=1; a<=5; a++){
        for(int b=1; b<=a; b++){
            printf("%d  ",b);
        }
        printf("\n");
    }
    
  for(int i=4;i>=1;i--){
    for(int j=1;j<=i;j++){
       printf("%d  ",j);
    }
     printf("\n");
  }
    return 0;
}
