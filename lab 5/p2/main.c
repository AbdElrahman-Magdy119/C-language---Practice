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
    Employee e;
    printf("enter the id of employee \n");
    scanf("%i",&e.id);
    printf("enter the salary of employee \n");
    scanf("%i",&e.salary);
    printf("enter the name of employee \n");
    scanf("%s",e.name);
   // gets(e.name);
    printf("employee id = %i \t\t employee salary = %i  \t\t  employee name : %s",e.id,e.salary,e.name);
    return 0;
}
