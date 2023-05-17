#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stringlen=0;
    char str[1000];
    printf("enter the string \n");
    gets(str);
    for(int i=0;i<100;i++)
    {
        if(str[i]=='\0')
            break;
        else
            stringlen++;
    }
    printf("the string length =  %i ",stringlen);
    return 0;
}
