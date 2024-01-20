//structures and functions pass structure member as a argument
#include<stdio.h>
#include<stdlib.h>
void print();
struct point{
int x;
int y;
};

void print(int x, int y)
{
    printf("%d  %d", x,y);
}
int main()
{
struct point var1 ={3,4};
print(var1.x,var1.y);
    return 0;
}
