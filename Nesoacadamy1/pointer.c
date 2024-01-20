// you cant use pointers without intilization
#include<stdio.h>
int main()
{
int x=10;
int *p;
p=&x;
int *q;
q=p;
*q=5;
printf("%d",*p);
return 0;
}

