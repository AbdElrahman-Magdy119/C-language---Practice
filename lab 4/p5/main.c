#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
      char str1[100];
      char str2[100];
      printf("enter first string \n");
      gets(str1);
      printf("enter  second string \n");
      gets(str2);

      for( int i =0; i< strlen(str2)+1;i++)
      {
          str1[i]=str2[i];
      }
      printf("the first string after copy   %s \t\t\t",str1);

    return 0;
}
