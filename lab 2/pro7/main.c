#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("enter the character \n ");
    ch=getche();
    if((ch >= 'a' && ch<='z') || (ch>='A'  && ch<='Z'))
    {
        printf(" \n this character is Alphabet \n");
    }
    else
    {
         printf(" \n this character is not  Alphabet \n");
    }
    return 0;
}
