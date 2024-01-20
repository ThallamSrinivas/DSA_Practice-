// Pointer to structure Variable [abc is structre x,y are members, a is a variable]
#include<stdio.h>
struct abc{
int x;
int y;
};
int main()
{
    struct abc a ={10,20};
    struct abc *ptr =&a;
    printf("%d %d", ptr->x, ptr->y);
int i =0;
printf("%d %d %d", i, i++ ,i++);
    return 0;
}
