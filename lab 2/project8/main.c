#include <stdio.h>
#include <stdlib.h>

int main()
{

    char str[200];
    printf("enter the string  \n");
    scanf("%[^\n]s",str);
    int numofAlphabets=0;
    int numofword=1;
    for(int i=0;str[i]!='\0';i++)
    {
       if( str[i]!= ' ')
       {
         numofAlphabets++;
       }
        else if(str[i] == ' ' && str[i+1]!= ' ')
        numofword++;


    }
       printf("the number of  Alphabets = %i \n",numofAlphabets);
       printf("the number of  word = %i \n",numofword);
     return 0;
}
