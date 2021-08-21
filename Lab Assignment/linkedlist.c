#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}node;
int main(){
    int *list = malloc(3*sizeof(int));
    if(list == NULL){
        return 1;
    }
    *(list+0) = 1;
    *(list+1) = 2;
    *(list+2) = 3;
    int *tmp = realloc(list,4*sizeof(int)); 
    tmp[3] = 4;
    list = tmp;
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n",*(list+i));
    }
    free(list);
    return 0;
}