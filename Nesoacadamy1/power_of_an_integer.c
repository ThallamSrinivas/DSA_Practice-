// Caliculate power of n integer
#include<stdio.h>
int main()
{
    int base,expo,result=1;
    double result1 =1.0;
    printf("Enter the base number:");
    scanf("%d",&base);
    printf("enter exponenet:");
    scanf("%d",&expo);
 if(expo>0)
 {
    int expo1 =expo;
    while(expo1!=0)
{
    result = result*base;
    expo1--;
}
printf("%d to the power of %d is %d",base,expo,result);
 }
 else
 {
    int expo1 =expo;
    while(expo1!=0)
{
    result1 = result1/(base);
    printf(" %d",base);
    expo1++;
}
printf("%d to the power of %d is %.10f",base,expo,result1);
 }

return 0;
}

