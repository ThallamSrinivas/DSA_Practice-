// verify if the given number is a strong number 145 = 1!=4!+5!
#include<stdio.h>
int main()
{
    int original_number, rem, result =0, n;
    printf("Enter a number\n");
    scanf("%d",&original_number);
    n= original_number;
    while(n!=0)
    {
     rem = n%10;
     result = result+fact(rem);
     n=n/10;
    }

   if(original_number == result)
    printf("Given number is a strong number");
   else
    printf("No! Given number is not a strong number");
}
int fact(a)
{
    if (a==0)
        return 1;
    if (a==1)
        return 1;
    else
        return a*fact(a-1);

}
