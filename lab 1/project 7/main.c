#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,reminder;
     float div;
    printf("enter first num  =");
    scanf("%i",&x);
    printf("enter second num  = ");
    scanf("%i",&y);
     div=x/y;
     reminder=x%y;
     printf("div = %f \n",div);
     printf("reminder = %i \n",reminder);

    return 0;
}
