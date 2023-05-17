#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int  Frequency(char *str, char ch,int size)
 {
        int numofcharacter;
       int c=0;
       int countarry[100];
       char character[100];
         for(int i=0;i<size;i++)
    {
            for(int j=0;j<size;j++)
                    {
                       if(str[i]==str[j])
                         c++;
                    }
                    character[i]=str[i];
                    countarry[i]=c;
                    c=0;

    }

    int i,j;
    for( i=0;i<strlen(character);i++)
    {
        for(j=0;j<i;j++)
        {
            if(character[i]== character[j] )
                break;
        }
        if(i==j)
        {
            if(ch == character[i])
            {
                numofcharacter=countarry[i];
             //   printf("%c   %i \n",character[i],countarry[i]);
            }

        }

    }

      return numofcharacter;



 }
int main()
{


    char str[100];
    char ch;
    printf("enter the string \n");
    gets(str);
    printf("enter the caracter \n");
    ch=getche();
    int size =strlen(str);


    int numofcharacter=Frequency(&str,ch,size);

     printf("\n%c   %i \n",ch,numofcharacter);

/*
  for(int i=0;i<strlen(str);i++)
    {
            for(int j=0;j<strlen(str);j++)
                    {
                       if(str[i]==str[j])
                         c++;
                    }
                    character[i]=str[i];
                    countarry[i]=c;
                    c=0;

    }

    int i,j;
    for( i=0;i<strlen(character);i++)
    {
        for(j=0;j<i;j++)
        {
            if(character[i]== character[j] )
                break;
        }
        if(i==j)
        {
            if(ch == character[i])
            {
                printf("%c   %i \n",character[i],countarry[i]);
            }

        }

    }

*/

    return 0;
}
