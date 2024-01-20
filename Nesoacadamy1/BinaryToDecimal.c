// convert a number from Binary to decimal
#include<stdio.h>
int main()
{
  int binary;
  printf("Enter a binary number:");
  scanf("%d",&binary);
  int decimal =0,weight =1,rem;
  while(binary!=0)
  {
   rem=binary%10;
   decimal = decimal+rem*weight;
   weight = weight*2;
   binary =binary/10;
  }
printf("Equilant decimal number is %d",decimal);
}


