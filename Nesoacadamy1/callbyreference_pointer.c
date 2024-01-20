//call by reference example
#include<stdio.h>
int fun(); //function prototype or function declaration
int main()
{
    int x =10, y=20;
    printf("x= %d and y= %d \n",x,y);
    fun(&x,&y);
    printf("new x = %d and new y = %d \n", x,y);
    printf("adress of  x = %d and adress of y = %d \n", &x,&y);
}

int fun(int *ptr1, int *ptr2)
{
    printf("%d %d \n",*ptr1,*ptr2);
    *ptr1= 20;
    *ptr2= 10;
    printf("%2d,%2d,%2d,%2d,%2d,%2d \n",ptr1,ptr2,&ptr1,&ptr2,*ptr1,*ptr2);
}
