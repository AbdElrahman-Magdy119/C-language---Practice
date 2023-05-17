#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1=100,number2=115,number3=118,max;
    if(number1 >= number2 && number1 >= number3)
    {
        max=number1;
    }
    else if(number2 >= number1 && number2 >= number3)
    {
        max=number2;
    }
    else
    {
        max=number3;
    }
        printf("the max = %i",max);


    return 0;
}
