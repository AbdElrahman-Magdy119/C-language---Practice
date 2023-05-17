#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter the lengh of array \n");
    scanf("%i",&n);
    int a[n];
    for(int i=0; i< n;i++)
    {
        scanf("%i",&a[i]);
    }
    int max=a[0];
    for(int j=1; j< n;j++)
    {
        if(a[j]>=a[j-1] && a[j]>=max)
            max=a[j];
    }
    printf("the max =  %i",max);
    return 0;
}
