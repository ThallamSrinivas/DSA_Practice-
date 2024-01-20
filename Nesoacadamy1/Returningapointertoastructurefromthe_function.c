//structures and functions Returning a pointer to a structure from the function
#include<stdio.h>
#include<stdlib.h>
struct point* fun();
struct point {
int x;
int y;
};

struct point* fun()
{
   struct point* ptr = (struct point*)malloc(sizeof(struct point));
  ptr->x =10;
  ptr->y =20;
    return ptr;
}
int main()
{
 struct point *var = fun();
 printf("%d  %d", var->x,var->y);
 return 0;
}
