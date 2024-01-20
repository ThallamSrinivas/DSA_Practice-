// Write a program to print fibonacci series upto n number of terms
#include<stdio.h>
int main()
{
    int n,ii;
    printf("Enter a number");
    scanf("%d",&n);

    for (ii =1 ; ii<=n; ii++)
    {

        printf("%d\n",fib(ii));
    }
   return 0;
}

int fib(n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    if(n>2)
        return fib(n-1)+fib(n-2);
}

