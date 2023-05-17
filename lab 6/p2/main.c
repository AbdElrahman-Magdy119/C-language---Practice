#include <stdio.h>
#include <stdlib.h>

void multipliyarray(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        a[i]=a[i]*10;
    }
}
void multipliyarraypointer(int *a,int size)
{
    for(int i=0;i<size;i++)
    {
        *(a+i)=*(a+i)*10;
    }
}
int main()
{
    int size;
    printf("enter size of array \n");
    scanf("%i",&size);
    int arr[size];
    for(int i=0; i<size;i++)
    {
        scanf("%i",&arr[i]);
    }

     multipliyarray(arr,size);

      for(int i=0;i<size;i++)
      {
          printf("%i  \t",arr[i]);
      }
      printf("\n");
     multipliyarraypointer(arr,size);

    for(int i=0;i<size;i++)
      {
          printf("%i  \t",arr[i]);
      }

    return 0;
}
