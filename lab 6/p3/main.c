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
void changePosition(line *l, int newX, int newY)
{
    printf("enter the x for new point  \n");
    scanf("%i",&newX);
    printf("enter the y for new point  \n");
    scanf("%i",&newY);

     (*l).p1.x=newX;
     (*l).p1.y=newY;



}

int main()
{
    line l;

    printf("enter the x for point 1 \n");
    scanf("%i",&l.p1.x);
    printf("enter the y for point 1 \n");
    scanf("%i",&l.p1.y);
    printf("enter the x for point 2 \n");
    scanf("%i",&l.p2.x);
    printf("enter the y for point 2 \n");
    scanf("%i",&l.p2.y);

     changePosition(&l , l.p1.x , l.p1.y);

     int distance = sqrt( ((l.p1.y-l.p2.y) * (l.p1.y-l.p2.y)) +   ((l.p1.x-l.p2.x) * (l.p1.x-l.p2.x)) )    ;

     printf("the distance = %i\t",distance);


    return 0;
}
