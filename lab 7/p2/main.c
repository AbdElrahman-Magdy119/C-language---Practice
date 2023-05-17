#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student
{
    char subject[20];
    int degree;

}student;
int main()
{
    int count=0;
    char sub[100][30];
    int studentnum,subjectnum,sum=0;
    printf("enter number of student \n");
    scanf("%i",&studentnum);
    student *s[studentnum];
    int sumdegree[studentnum];
    for(int i=0;i<studentnum;i++)
    {
        printf("enter number of subject for %i student \n",i+1);
        scanf("%i",&subjectnum);
        s[i]=malloc(subjectnum * sizeof(student));
        for(int j=0;j<subjectnum;j++)
        {
            printf("enter the name of  %i  subject \n",j+1);
            scanf("%s",&s[i][j].subject);
            strcpy(sub[count],s[i][j].subject);
          //  sub[count]= s[i][j].subject;
            count++;
            printf("enter the degree of %i  subject \n",j+1);
            scanf("%i",&s[i][j].degree);
            sum=sum+s[i][j].degree;
        }

       sumdegree[i]=sum;
       sum=0;
    }

      for(int i=0;i<studentnum;i++)
      {
          printf("the sum of %i student = %i  \n",i+1,sumdegree[i]);
      }

   /*     int degree=0;
        int co =0;
    for(int i=0;i<count;i++)
    {
              for(int j=0;j<studentnum;j++)
               {
                   for(int k=0;k<subjectnum;k++)
                    {
                       if(strcmp( sub[i],s[j][k].subject) == 0 )
                       {
                           co++;
                          degree=degree+ s[j][k].degree;

                       }
                    }


                 }
                 printf("%s \t\t %i \n",sub[i],degree/co);
                 degree=0;
                 co=0;
     }*/


    int i,j,asd=0;
    //char sub1[100][30];
    for( i=0;i<count;i++)
    {
        for(j=0;j<i;j++)
        {
            if( strcmp ( sub[i],sub[j] ) == 0 )
                break;
        }
        if(i==j)
        {
            printf("%s \n",sub[i]);
        }
    }


    return 0;
}
