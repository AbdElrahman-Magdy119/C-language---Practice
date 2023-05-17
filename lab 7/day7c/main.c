#include <stdio.h>
#include <stdlib.h>
typedef struct employee
{
    int id;
    int salary;

}employee;
int main()
{
    int x=10;
    int y=5;
    int z=x/y;
    printf("%i",z);

    for(int i=0;i<3;i++)
    {
        printf("your First Pointer size %d and Info for: %d \n",size,i+1);
        for(int j=0;j<size;j++){
            printf(" %d Employee : \t ID:%d \t Salary:%d \t Name:%s \n",j+1,parr[i][j].ID,parr[i][j].Salary,parr[i][j].Name);
        }
    }

  /*  int x=10;
    int *a=&x;
    int **p=&a;
  int  y=  *(*p);
    printf("%i",y);*/



  /*  int *arr[4];
    for(int i=0;i<5;i++)
    {
        int x;
        scanf("%i",&x);
       arr[i]=malloc(x*sizeof(int));
    }

    arr[0][0]=1;*/

    //*(arr[0]+1)=5;


   /* employee *arr[10];
    arr[0]=malloc(sizeof(employee));
    arr[0]->id=10; */


   /* employee *e=malloc(4*sizeof(employee));
    (*e)[0].id=10;*/
    return 0;
}
