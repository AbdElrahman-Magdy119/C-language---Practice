#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,mul;
    printf("enter the number =");
    scanf("%i",&number);
    for(int i=1;i<=12;i++)
    {
        mul=i*number;
        printf(" %i * %i = %i \n",i,number,mul);

    }
    return 0;
}
