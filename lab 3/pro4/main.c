#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,sum=0,avrage;

    printf("enter the lengh of arrays x and y \n");
    scanf("%i",&x);
    scanf("%i",&y);
    int a[x][y];
    int sumrow[x];
    int averagecolum[y];
    printf("enter the arrays \n");
    for(int i=0; i< x;i++)
    {
        for(int j=0; j<y ;j++)
        {
            scanf("%i",&a[i][j]);
        }

    }

    for(int i=0; i< x;i++)
    {
        for(int j=0; j<y ;j++)
        {
           // sum=sum+a[i][j];
           sum= sum+ a[i][j];
        }
       sumrow[i]=sum;
       sum=0;
    }
      sum=0;

    for(int i=0; i< y;i++)
    {
        for(int j=0; j<x ;j++)
        {
           // sum=sum+a[i][j];
           sum= sum+ a[j][i];
        }
       averagecolum[i]=sum/x;
       sum=0;
    }



       for(int i=0;i<x;i++)
       {
           printf( "sum = %i \n",sumrow[i]);

       }
       for(int i=0;i<y;i++)
       {
           printf( "average = %i \n",averagecolum[i]);

       }

    return 0;
}
