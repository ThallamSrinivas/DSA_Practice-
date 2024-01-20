//To check if the given number is an armstrong number // 371=3*3*3 + 7*7*7 +1*1*1

#include<stdio.h>
int main()
{
    int original_number, ocount=0;
    int result =0;
    printf("Enter a number");
    scanf("%d",&original_number);
    int n = original_number;

    while(n!=0)
  {
     int rem = n%10;
     ocount++;
     n= n/10;
}
n = original_number;
int count = ocount, mul =1;
while(n!=0)
{
int rem = n%10;
    while(count!=0)
  {
    mul = mul*rem;
    count--;
  }
  result = result+ mul;
  mul =1; count = ocount;
  n=n/10;
}

   if(original_number == result)
    printf("given number is an armstrong number");
  else
    printf("No! given number is not an armstrong number");
    return 0;
}

