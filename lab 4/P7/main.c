#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    int x=0;
    printf("enter the string \n");
    gets(str1);
    for(int i=0;i<strlen(str1);i++)
    {
        if(( str1[i] >= 'a' && str1[i] <= 'z' ) || ( str1[i] >= 'A' && str1[i] <= 'Z' ))
        {
            str2[x]=str1[i];
            x++;
        }

     }


 printf("the string =  %s",str2);

    return 0;
}
