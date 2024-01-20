//structures and functions passing array of structures as a argument
#include<stdio.h>
#include<stdlib.h>
int fun();
struct point{
int x;
int y;
};

int fun(struct point array[])
{
    printf("%d %d %d %d",array[0].x,array[0].y,array[1].x,array[1].y);
    return 0;
}
int main()
{
    struct point s[2] ={{1,2},{3,4}};
    fun(s);
    return 0;
}
