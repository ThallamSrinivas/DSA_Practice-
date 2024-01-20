// pointers with 2D array
#include<stdio.h>
int main()
{
    int array[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int *p;
    for (p =&array[0][0];p<=&array[2][2];p++)//for (p =&array[0][0];p<=&array[2][2];p++)
        printf("%d %p %p\n",*p,p,p+1);
    return 0;
}
