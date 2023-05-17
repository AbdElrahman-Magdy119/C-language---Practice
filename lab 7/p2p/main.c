#include <stdio.h>
#include <stdlib.h>
typedef struct student
{
    char subject[20];
    int degree;

}student;
int main()
{
    int size,sum=0,sumc=0,sumht=0,sumo=0,x;

    printf("enter the number  of student \n");
    scanf("%i",&size);
    printf("enter number of subject \n");
    scanf("%i",&x);
    student **s=malloc(size * sizeof(student*));
    int sumdegree[size];
    int sumaverage[size];
    for(int i=0;i<size;i++)
    {
        sumaverage[i]=0;
    }
    int sumaver=0;
    for(int i=0;i<size;i++)
    {
        printf("  student  %i \n",i+1);

        s[i]= malloc(x*sizeof(student));
        for(int j=0;j<x;j++)
        {
            printf("enter the name of  %i  subject \n",j+1);
            scanf("%s",&s[i][j].subject);
            printf("enter the degree of %i  subject \n",j+1);
            scanf("%i",&s[i][j].degree);
            sum=sum+s[i][j].degree;
            sumaverage[j]=  sumaverage[j] + s[i][j].degree;

        }

        sumdegree[i]=sum;
       sum=0;
    }

      for(int i=0;i<size;i++)
      {
          printf("the sum of %i student = %i  \n",i+1,sumdegree[i]);
      }

      for(int i=0;i<size;i++)
    {
        printf(" subject %i  \t\t %i \n",i+1,sumaverage[i]/size);
    }

    return 0;
}
