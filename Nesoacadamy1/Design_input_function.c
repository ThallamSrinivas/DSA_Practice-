// Designing a input function
#include<stdio.h>
int input();
int main()
{
char  str[50];
int n = input(str,5);
printf("%d %s",n ,str);
    return 0;
}
int input(char str[], int n)
{
    int ch, i=0;
    while((ch=getchar())!=0)
    {
        if(i<n)
           {
             str[i]=ch;
        i++;
           }
    }
    str[i++] ='/0';
    return n;
}
