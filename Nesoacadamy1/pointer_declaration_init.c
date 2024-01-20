// you cant use pointers without intilization
#include<stdio.h>
int main()
{
int x=5;
int *ptr;
    ptr =&x;
    printf("%u  %u  %u \n",ptr,&ptr,*ptr);
   int y =10;
    int *ptr2 ;
    ptr2 =&y;
    printf("%u  %u  %u \n",ptr2,&ptr2,*ptr2);
     *ptr2 =&x;
     printf("%u  %u  %u",ptr2,&ptr2,*ptr2);

}

