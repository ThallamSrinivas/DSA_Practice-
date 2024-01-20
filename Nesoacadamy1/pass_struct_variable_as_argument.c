//structures and functions pass structure variable as a argument
#include<stdio.h>
#include<stdlib.h>
void print();
struct point{
int x;
int y;
};

void print(struct point var)
{
    printf("%d  %d", var.x,var.y);
}
int main()
{
struct point var1 ={10,20};
print(var1);
    return 0;
}
