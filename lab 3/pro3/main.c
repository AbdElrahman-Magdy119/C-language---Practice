#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter the lengh of arrays \n");
    scanf("%i",&n);
    int firstarray[n];
    int secondarray[n];
    int sum[n];
    printf("enter the first arrays \n");
    for(int i=0; i< n;i++)
    {
        scanf("%i",&firstarray[i]);
    }
    printf("enter the second arrays \n");
    for(int i=0; i< n;i++)
    {
        scanf("%i",&secondarray[i]);
    }
    for(int i=0; i< n;i++)
    {
        sum[i]= firstarray[i] + secondarray[i];
    }
     printf("the sum is \n");
    for(int i=0; i< n;i++)
    {
        printf("%i \t ",sum[i]);
    }
    return 0;
}
