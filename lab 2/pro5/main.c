#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

COORD coord={0,0};                   // this is global variable
                                    //center of axis is set to the top left cornor of the screen
 void gotoxy(int x,int y)
 {
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }

int main()
{

    char ch;
    int number1,number2;
    do{
            gotoxy(20,15);
        printf("enter s to sum \n");
           gotoxy(20,16);
        printf("enter d to div \n");
           gotoxy(20,17);
        printf("enter m to mul \n");
        ch=getche();
        switch(ch)
        {
           case 's':
               {
                   system("Cls");
                   printf("enter first  number ");
                   scanf("%i",&number1);
                   printf("enter secound  number ");
                   scanf("%i",&number2);
                   int sum=number1+number2;
                    printf("the sum = %i \n",sum);
                }
               break;
                case 'd':
               {
                   system("Cls");
                   printf("enter first  number ");
                   scanf("%i",&number1);
                   printf("enter secound  number ");
                   scanf("%i",&number2);
                   int div=number1/number2;
                    printf("the div = %i \n",div);

               }
               break;
                case 'm':
               {
                   system("Cls");
                   printf("enter first  number ");
                   scanf("%i",&number1);
                   printf("enter secound  number ");
                   scanf("%i",&number2);
                   int mul=number1*number2;
                    printf("the multi = %i \n",mul);

               }
               break;

           }

        //  system("Cls");

             printf("enter a to continuo \n \n");
              printf("enter e to exit \n \n");
              ch=getche();
           system("Cls");

    }while(ch =='a');
    return 0;
}
