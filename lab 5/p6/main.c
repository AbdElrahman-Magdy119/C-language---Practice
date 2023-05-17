#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

#define up 72
#define down 80
#define home 71
#define end 79

int count=1;
typedef struct Employee
{
    int id;
    int salary;
    char name[30];

}Employee;
void DisplayEmployee(Employee e[])
{
    for(int i=0;i<count;i++)
    {
        printf("employee id = %i \t\t employee salary = %i  \t\t  employee name : %s  \n",e[i].id,e[i].salary,e[i].name);
    }

}
Employee AddEmployee()
{
    Employee e;
    printf("enter the id of employee \n");
    scanf("%i",&e.id);
    printf("enter the salary of employee \n");
    scanf("%i",&e.salary);
    printf("enter the name of employee \n");
    scanf("%s",e.name);
    count++;
    return e;

}
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

int main()
{
    Employee e[100]={1,1500,"abdo"};
    char menu[3][50]={"AddEmployee","DisplayEmployee","Exit"},ch;
    int currentIndex=0;

    do{
        for(int i=0;i<strlen(menu);i++){
        if(i==currentIndex){
            SetColor(12);
            gotoxy(10,5+i);
            printf("%s",menu[i]);
        }else{
            SetColor(3);
            gotoxy(10,5+i);
            printf("%s",menu[i]);
        }
    }
        ch=getch();
        if(ch==-32){
            ch=getch();
            switch (ch){
                case up:
                    currentIndex--;
                    if(currentIndex<0) currentIndex=2;
                    break;
                case down:
                    currentIndex++;
                    if(currentIndex>2) currentIndex=0;
                    break;
                case home:
                    currentIndex=0;
                    break;
                case end:
                    currentIndex=2;
                    break;
            }
        }else{
            switch (currentIndex){
            case 0:
                system("cls");
                gotoxy(10,5+currentIndex);
                //printf("%s",menu[currentIndex]);
                e[count]=AddEmployee();
                system("cls");
                getch();
                break;
            case 1:
                system("cls");
                gotoxy(10,5+currentIndex);
              //  printf("%s",menu[currentIndex]);
                DisplayEmployee(e);
               // system("cls");
                getch();
                system("cls");
                break;
            case 2:
                if(ch==13) ch=27;
                break;
            }
        }
    }while(ch!=27);
    return 0;
}
