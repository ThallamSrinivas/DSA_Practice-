// Write a program to print floyd traingle for n number of rows
#include<stdio.h>
int main()
{
   int n;
   printf("Enter number of rows");
   scanf("%d",&n);
int i,j,count =1;
   for(i=1;i<=n;i++)
   {
    for(j=1;j<=i;j++)
        {

        printf(" %d",count);
        count++;

        }
        printf("\n");
   }
return 0;
}


