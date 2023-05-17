#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x,y;
    printf("enter the first number \n");
    scanf("%i",&x);
    printf("enter the second number \n");
    scanf("%i",&y);
    swap(&x,&y);
    printf("number after swap %i \t  %i",x,y);

     return 0;
}
