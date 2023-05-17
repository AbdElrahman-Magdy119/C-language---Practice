#include <stdio.h>
#include <stdlib.h>
typedef struct Employee
{
    int id;
    int salary;
    char name[30];

}Employee;
int main()
{
    Employee *arr[3];
    int num;
    int a[3];
    for(int i=0 ;i<3;i++)
    {
        printf("enter the number of employee \n");
        scanf("%i",&num);
        arr[i]=malloc(num*sizeof(Employee));
        for(int j=0;j<num;j++)
        {
            printf("enter the id of %i \n",j+1);
            scanf("%i",&arr[i][j].id);
            printf("enter the salary of %i \n",j+1);
            scanf("%i",&arr[i][j].salary);
            printf("enter the name of %i \n",j+1);
            scanf("%s",&arr[i][j].name);
        }
      a[i]=num;
    }

   for(int i=0;i<3;i++)
   {
       printf("the pointer %i \n",i+1);
       for(int j=0;j<a[i];j++)
       {
           printf("the employee %i \n",j+1);
           printf("id = %i \t\t salary = %i  \t\t  name : %s \n",arr[i][j].id,arr[i][j].salary,arr[i][j].name);
       }
   }





    return 0;
}
