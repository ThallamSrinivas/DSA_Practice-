// Add two numbers without + operator
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d %d", &x ,&y);
    while(y!=0)
    {
        x++;
        y--;
    }
    printf("sum is %d" , x);
    return 0;
}


