// Any of the digits in a number appear more than once 16727
#include<stdio.h>
int main()
{
 int n, count =0;
printf(" Enetr a number");
scanf("%d",&n);
int n1=n;
 while(n!=0)
 {
     count++;
     n=n/10;
 }
 printf("count = %d",count);
 int array[count];
 n=n1;
 int i =0;
 while(n!=0)
 {
  array[i] =n%10;
  i++;
  n=n/10;
 }

 for (int j=0; j<count;j++)
{
    printf("%d",array[j]);
    for (int k=j+1;k<count; k++)
    {
        if(array[k]== array[j])
            printf("yes");
    }
}
}


