#include <stdio.h>
#include <stdlib.h>

int max(int num1,int num2,int num3)
{
    int max;
    if(num1 >= num2 && num1 >= num3)
        max=num1;
    else if(num2 >= num1 && num2 >= num3)
        max=num2;
    else
        max=num3;
    return max;

}
int main()
{
    int number1,number2,number3,maxnum;
    printf("enter the number 1 \n");
    scanf("%i",&number1);
    printf("enter the number 2 \n");
    scanf("%i",&number2);
    printf("enter the number 3 \n");
    scanf("%i",&number3);
    maxnum = max(number1,number2,number3);
    printf("\n the max  =   %i",maxnum);


    return 0;
}
