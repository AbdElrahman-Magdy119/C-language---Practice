#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct point
{
    int x;
    int y;

}point;
typedef struct line
{
    point p1;
    point p2;

}line;
void  enterline(line *l)
{


    printf("enter the x for point 1 \n");
    scanf("%i",&(*l).p1.x);
    printf("enter the y for point 1 \n");
    scanf("%i",&(*l).p1.y);
    printf("enter the x for point 2 \n");
    scanf("%i",&(*l).p2.x);
    printf("enter the y for point 2 \n");
    scanf("%i",&l->p2.y);

    int distance = sqrt( (((*l).p1.y-(*l).p2.y) * ((*l).p1.y-(*l).p2.y)) +   (((*l).p1.x-(*l).p2.x) * ((*l).p1.x-(*l).p2.x)) )    ;

     printf("the distance = %i\t",distance);


}


int main()
{

     int size;
     printf("enter the size of line \n");
     scanf("%i",&size);

     line *l= malloc(size*sizeof(line));
     for(int i=0;i< size; i++)
     {
         enterline(&l[i]);
     }


    return 0;
}
