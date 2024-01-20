// pointer pointing to the entire array
#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int (*p)[5] = &a;
    //p=&a;
    printf("%d",*((*p)+3));
    return 0;
}
