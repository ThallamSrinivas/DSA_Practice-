// func function
#include<stdio.h>
int func(); //function prototype
int main()
{
    int x=func(435);
printf("The value of x = %d",x);
}

int func(int num)
{
    int count =2;
    while(num)
    {
        count++;
        num =num>>2; //num>> =2;
    }
    printf("count = %d",count);
return count;
}
