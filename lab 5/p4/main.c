#include <stdio.h>
#include <stdlib.h>

typedef struct employee
{
    int id;
    int salary;
    char nameofemployee[30];
} employee;
typedef struct department
{
    char nameofdepartment[30];
    int numOfEmployee ;
    employee e[100];

} department;

int main()
{
    int numberofdepartment;
    printf("enter the number of department \n");
    scanf("%i",&numberofdepartment);
    department d[numberofdepartment];

    for(int i=0;i<numberofdepartment;i++)
    {
         printf("enter  the name of  department [%i] \n",i+1);
         scanf("%s",d[i].nameofdepartment);
         printf("enter the number of department [%i] \n",i+1);
         scanf("%i",&d[i].numOfEmployee);
         printf("enter the id,salary,name of employee in the department   [%i] \n",i+1);
         for(int j=0;j<d[i].numOfEmployee;j++)
         {
             printf("enter the id of employee [%i] \n",j+1);
             scanf("%i",&d[i].e[j].id);
             printf("enter the salary of employee [%i] \n",j+1);
             scanf("%i",&d[i].e[j].salary);
             printf("enter the name of employee [%i] \n",j+1);
             scanf("%s",d[i].e[j].nameofemployee);
         }


    }


    for(int i=0;i<numberofdepartment;i++)
    {
         printf("department name = %s \t\t num Of Employee in department = %i  \n",d[i].nameofdepartment,d[i].numOfEmployee);
         for(int j=0;j<d[i].numOfEmployee;j++)
         {
             printf("employee id = %i \t\t employee salary = %i  \t\t  employee name : %s  \n",d[i].e[j].id,d[i].e[j].salary,d[i].e[j].nameofemployee);
         }
    }




    return 0;
}
