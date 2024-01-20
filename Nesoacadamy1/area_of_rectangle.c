// Area of a rectangle
#include<stdio.h>
int Area_rec();
int main()
{
    int l =25, b =15;
    int area = Area_rec(l,b);
    printf("Area of rectangle is %d",area);
    }

int Area_rec(int a, int b)
{
    //int l, int b;
    //int area;
    int area =a*b;
    return area;
}
