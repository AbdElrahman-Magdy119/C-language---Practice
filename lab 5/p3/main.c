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
    int numberofemployee;
    printf("enter the number of employee \n");
    scanf("%i",&numberofemployee);
    Employee e[numberofemployee];
    for(int i=0;i<numberofemployee;i++)
    {
         printf("enter the id of employee [%i] \n",i+1);
         scanf("%i",&e[i].id);
         printf("enter the salary of employee [%i] \n",i+1);
         scanf("%i",&e[i].salary);
         printf("enter the name of employee [%i] \n",i+1);
         scanf("%s",e[i].name);


    }
    for(int i=0;i<numberofemployee;i++)
    {
         printf("employee id = %i \t\t employee salary = %i  \t\t  employee name : %s  \n",e[i].id,e[i].salary,e[i].name);
    }






    return 0;
}
