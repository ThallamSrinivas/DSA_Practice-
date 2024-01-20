//structures and functions Returning a structure variable from function
#include<stdio.h>
#include<stdlib.h>
void print();
struct point{
int x;
char y;
};

struct point* edit(struct point *var1)
{
 var1->x++;
 var1->y++;
 return var1;
}

char main()
{
    struct point var = {10, 'A'};
    struct point *modified;
    modified  =edit(&var);
    printf("%d  %c", modified->x, modified->y);
    return 'a';
}
