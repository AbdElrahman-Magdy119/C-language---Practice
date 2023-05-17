#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count,sum=0;
    do{
            scanf("%i",&count);
           sum+=count;

    }while(sum <= 100);
    printf("the sum = %i",sum);
    return 0;
}
