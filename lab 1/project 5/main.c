#include <stdio.h>
#include <stdlib.h>

int main()
{
     int x,y,sum,mul,sub;
     float div;
    printf("enter first num  =");
    scanf("%i",&x);
    printf("enter second num  = ");
    scanf("%i",&y);
     sum=x+y;
     div=x/y;
     mul=x*y;
     sub=x-y;

    printf("sum = %i \n",sum);
    printf("div = %f \n",div);
    printf("mul = %i \n",mul);
    printf("sub = %i \n",sub);
    return 0;
}
