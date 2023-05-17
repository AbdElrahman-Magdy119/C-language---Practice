#include <stdio.h>
#include <stdlib.h>
int count=1;
typedef struct Employee
{
    int id;
    int salary;
    char name[30];

}Employee;
void DisplayEmployee(Employee e[])
{
    for(int i=0;i<count;i++)
    {
        printf("employee id = %i \t\t employee salary = %i  \t\t  employee name : %s  \n",e[i].id,e[i].salary,e[i].name);
    }

}
Employee AddEmployee()
{
    Employee e;
    printf("enter the id of employee \n");
    scanf("%i",&e.id);
    printf("enter the salary of employee \n");
    scanf("%i",&e.salary);
    printf("enter the name of employee \n");
    scanf("%s",e.name);
    count++;
    return e;

}

int main()
{
    Employee e[100]={1,1500,"abdo"};
    DisplayEmployee(e);
    e[count]=AddEmployee();
    DisplayEmployee(e);
    return 0;
}
