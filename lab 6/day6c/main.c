#include <stdio.h>
#include <stdlib.h>
int* dis()
{
   int x=5;

   return &x;
}
void* diss()
{
   int x=10;

   //return &x;
}
int main()
{
    int arr[4]={1,5,9,11};
   // dis(arr);

   /* for (int i=0; i<4 ;i++)
    {
        printf("%i \t ",arr[i]);
    }*/
      //  int *p=arr;
   // *(p+1)=10;

      int *p=dis();
      *p=10;
    printf("%i \n",*p);
    diss();
     //int *p=dis();
  printf("%i \n",*p);
    return 0;
}
