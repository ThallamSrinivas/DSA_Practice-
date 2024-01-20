//structures and functions passing pointers to structures as arguments
#include<stdio.h>
#include<stdlib.h>
void print();
struct point{
int x;
char y;
};

void print(struct point *var1)
{
printf("%d  %c",var1->x, var1->y);
}

char main()
{
    struct point var = {10, 'A'};
    print(&var);
    return 'a';
}
