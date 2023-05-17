#include <stdio.h>
#include <stdlib.h>
typedef struct time
{
    int hour;
    int miu;
    int second;
} time;
 void CalculateDifference(time t1,time t2)
 {
      time t3;
      if(t2.hour >= t1.hour)
    {
        t3.hour=t2.hour-t1.hour;
    }
    else
        t3.hour=(t2.hour+24)-t1.hour;

    if(t2.miu >= t1.miu)
    {
        t3.miu=t2.miu-t1.miu;
    }
    else
    {
        t3.miu=(t2.miu+60)-t1.miu;
        t3.hour=t3.hour-1;
    }

    if(t2.second >= t1.second)
    {
        t3.second=t2.second-t1.second;
    }
    else
    {
        t3.second=(t2.second+60)-t1.second;
        t3.miu=t3.miu-1;
    }

    printf("the period of Time  \n  %i:%i:%i \n",t3.hour,t3.miu,t3.second);

 }
int main()
{
    time t1,t2,t3;
    printf("enter first hour \n");
    scanf("%i",&t1.hour);
    printf("enter first min \n");
    scanf("%i",&t1.miu);
    printf("enter first second \n");
    scanf("%i",&t1.second);
    printf("enter second hour \n");
    scanf("%i",&t2.hour);
    printf("enter second min \n");
    scanf("%i",&t2.miu);
    printf("enter second second \n");
    scanf("%i",&t2.second);

   CalculateDifference( t1, t2);


    return 0;
}
