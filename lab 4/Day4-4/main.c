#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include<windows.h>

#define Up 72
#define Down 80

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
    //char arr[] = "Hello"; //{'H', 'e', 'l', 'l', 'o'};
    /*int index = 0;

    while(arr[index] != '\0')
    {
        printf("%c", arr[index++]);
    }*/

    //arr[10] = 'A';

    char arr[10];

    //arr[5] = '\0';

    //scanf("%s", arr);
    //printf("%s", arr);

    /*int num = strlen(arr);

    //strcpy(s2, s1);
    //strcpy(arr, "Hello");

    //strcat(s1, s2);

    char str[3][10] = {"Hello", "There", "Bye"};
    int index;

    for(index = 0; index < 3; index++)
    {
        printf("%s", str[index]);
    }*/

    /*char ch = getch();

    if(ch == -32)
    {
        ch = getch();

        if(ch == Up)
        {

        }
        else if(ch == Down)
        {

        }
        printf("Extended: %d", ch);
    }
    else
    {
        printf("Normal: %d", ch);
    }
    //printf("%d", ch);*/

    printf("Hello");

    SetColor(10);

    printf("Hiiiiiiiiiiii");

    printf("aaaaaaaaaaaa");


    return 0;
}
