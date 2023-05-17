#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%i",&n);
    int a[n];
    for(int i=0; i< n;i++)
    {
        scanf("%i",&a[i]);

    }
     for(int j=0; j<n ;j++)
     {
         printf("%i \t ",a[j]);

     }

    return 0;
}
