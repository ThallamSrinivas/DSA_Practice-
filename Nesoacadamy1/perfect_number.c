// Check if the number is a perfect number
#include<stdio.h>
int main()
{
    int n;
    int result =0,i;
    printf("Enter a number");
    scanf("%d",&n);
    for (i=1;i<n;i++)
    {
        if(n%i==0)
        {
            result =result+i;
        }
    }
    if(n==result)
        printf("%d is a perfect number",n);
    else
        printf("%d is not a perfect number",n);
   return 0;
}

