#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("enter the character \n");
    ch=getch();
    if(ch == -32)
    {
        ch=getch();
        printf("this character is Extended %i \n",ch);
    }

    else
        printf("this character is Normal %i \n ",ch);
    return 0;
}
