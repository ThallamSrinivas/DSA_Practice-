// print 1 to 10 numbers if the number odd add 1 if number is even subtract 1
#include<stdio.h>
void odd();
void even();
int n=1;
int main()
{
odd();
}
void odd()
{
    if(n<=10)
    {
        printf("%d",n+1);
        n++;
        even();
    }
}
void even()
{
    if(n<=10)
    {
        printf("%d",n-1);
        n++;
        odd();
    }
}
