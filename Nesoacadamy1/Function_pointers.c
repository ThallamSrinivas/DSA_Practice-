//Function pointers:  //int (*ptr)(int ,int); function pointer prototype
#include<stdio.h>
int fun();
int main()
{
int (*ptr)(int,int);
ptr =fun;  // int (*ptr)(int,int) =fun;
int result= ptr(10,20);
printf("%d",result);
return 0;
}
int fun(int a, int b)
{
    return a+b;
}
