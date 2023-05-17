#include <stdio.h>
#include <stdlib.h>

typedef struct Employee
{
    int ID;
    int Salary;
    char Name[20];
}Employee;

void Test(int **ptr)
{

}

int main()
{
    //int *p = NULL;

    /*int x = 3;
    int *p = &x;

    Test(&p);

    Employee *emps[100] = {NULL};
    emps[0] = (Employee *) malloc(sizeof(Employee));

    emps[0]->ID = 5;*/

    //int *arr[3];
    int **arr = (int **) malloc(3 * sizeof(int*));
    int counter;

    for(counter = 0; counter < 3; counter++)
    {
        arr[counter] = (int *) malloc(4 * sizeof(int));
    }

    arr[0][0] = 1;

    return 0;
}
