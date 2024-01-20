//putchar function in C; putchar accepts an int value(which represents a character) Prints a character and returns equalint value:
#include<stdio.h>
int main()
{
    int  n;
    char ch; //int ch;
    for (ch ='A';ch<='Z';ch++)
    {
        n= putchar(ch);
    printf("%d ",n);
    }
}
