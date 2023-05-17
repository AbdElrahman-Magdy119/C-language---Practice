#include <stdio.h>
#include <stdlib.h>

int main()
{
    int magicSquare[3][3];
    int sum[5];
    int sumofsum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%i",&magicSquare[i][j]);
        }
    }
     for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
             sumofsum+= magicSquare[i][j];
         }
         sum[i]= sumofsum;
         sumofsum=0;
     }
     int z=3;
      for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
             sumofsum+= magicSquare[j][i];
         }
         sum[z]= sumofsum;
         sumofsum=0;
         z++;
     }
       int a=1;
      for(int i=1;i<=5;i++)
      {
          if( sum[i] != sum[i-1])
            {
              printf("not \n");
              a=0;
              break;
            }


      }
      if(a==1)
        printf("yes \n");

    return 0;
}
