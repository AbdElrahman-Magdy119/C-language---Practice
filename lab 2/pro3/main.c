#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("enter the degree");
    ch= getche();
    switch(ch)
    {
        case 'A':
        printf("Excellent");
        break;
        case 'B':
        printf("Very Good");
        break;
        case 'C':
        printf("Good");
        break;
        case 'D':
        printf("fair");
        break;
        default:
           printf("failed");
           break;
    }
    return 0;
}
