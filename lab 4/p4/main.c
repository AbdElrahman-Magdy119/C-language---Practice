#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#define up 72
#define down 80
#define end 77
#define home 75
#define enter 13

COORD coord={0,0};                   // this is global variable
                                    //center of axis is set to the top left cornor of the screen
 void gotoxy(int x,int y)
 {
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }


void SetColor(int ForgC)
 {
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}
void display1 ()
{
    char str[3][50]={"New","Display","Exit"};
         int arr[3]={10,11,12};
         SetColor(9);
         for(int i=0;i<3;i++)
         {
               gotoxy(50,arr[i]);
             printf("%s\n",str[i]);
            SetColor(15);
         }

}
void display2 ()
{
     char str[3][50]={"New","Display","Exit"};
         int arr[3]={10,11,12};
         for(int i=0;i<3;i++)
         {
               gotoxy(50,arr[i]);
             printf("%s\n",str[i]);
           //  SetColor(9);
           if(i== 0)
           {
              SetColor(9) ;
           }
        else
            SetColor(15);
         }
}
void display3 ()
{
    char str[3][50]={"New","Display","Exit"};
         int arr[3]={10,11,12};
         for(int i=0;i<3;i++)
         {
               gotoxy(50,arr[i]);
             printf("%s\n",str[i]);
           //  SetColor(9);
           if(i== 1)
           {
              SetColor(9) ;
           }
        else
            SetColor(15);
         }
}
int main()
{
        int x=0;
        char str[3][50]={"New","Display","Exit"};
       display1();
         char ch;
       do{
           // system("Cls");
          display1();
         ch=getch();
         if(ch == -32)
         {
             ch=getch();
             if(ch == down)
             {

                  display2();
                  char c;
                  c=getch();
                  if(c == 13)
                  {
                      system("Cls");
                      printf("Display");
                      ch=getch();
                      system("Cls");
                  }
                  else if (c == -32)
                  {
                      c=getch();
                      if(c == up )
                       {
                           display1();
                           ch=getch();
                           if(ch == 13)
                           {
                               system("Cls");
                               printf("new");
                               ch=getch();
                               system("Cls");
                           }
                       }
                      else if( c == down)
                       display3();
                       ch=getch();
                  }
                }

                else   if(ch == up)
                 {

                  display3();
                  char c;
                  c=getch();
                  if(c == 13)
                  {
                      system("Cls");
                      printf("exit");
                      x=13;
                  }
                  else if (c == -32)
                  {
                      ch=getch();
                      if(ch == up )
                   {
                       display2();
                       ch=getch();
                   }
                      else if( ch == down)
                       display1();
                  }
              }



           }

       }while(x != 13);




    return 0;
}









































































