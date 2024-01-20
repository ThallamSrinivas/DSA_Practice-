// check if the given number is a prime number or not (A number divisible 1 and itself only)
#include<stdio.h>
int main()
{
    int n, ii, count =0;
    printf("Enter a number");
    scanf("%d", &n);

        for (ii = 2; ii<n; ii++)
{
    if((n%ii) ==0)
        count++;
}
if((count==0) || n== 2 )
   printf("%d is a prime number", n);
else
    printf("%d is  not a prime number", n);
}
