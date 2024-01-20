// Any of the digits in a number appear more than once 16727
#include<stdio.h>
int main()
{
 int n1= 12345;
int n= n1;
 int array[10]={0};
 int rem;
 while(n!=0)
 {
     rem = n%10;
     if(array[rem]==1)
        break;
      else
        array[rem]=1;
     n=n/10;
 }
 if(n!=0)
    printf("yes");
 else
    printf("No");

}


