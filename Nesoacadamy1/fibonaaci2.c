// Write a program to print fibonacci series upto n number of terms
#include<stdio.h>
int main()
{
    int n,ii;
    printf("Enter a number");
    scanf("%d",&n);
 int a=0;
 int b=1, result;
    for (ii =1 ; ii<=n; ii++)
    {

        printf("%d\n",a);
        result = a+b;
        a=b;
        b= result;
    }
   return 0;
}


