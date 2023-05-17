#include <stdio.h>
#include <stdlib.h>

int main()
{
    char firstname[50];
    char lastname[50];
    char full[100];
    printf("enter the first name \n");
    scanf("%s",firstname);
    printf("enter the last name \n");
    scanf("%s",lastname);
 //   strcat(firstname," ");
    strcpy(full,firstname);
    strcat(full," ");
    strcat(full,lastname);

    printf("name :%s  \t",full);
    return 0;
}
