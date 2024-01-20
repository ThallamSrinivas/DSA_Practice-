// return a pointer/adress
#include<stdio.h>
int *findmid();
int main()
{
    int array[] ={1,2,10,4,5};
    int len = sizeof(array)/sizeof(array[0]);
    int *mid = findmid(array,len);
printf("%d",*mid);
return 0;
}

int *findmid(int a[],int len)
{
    return  &a[len/2];
}
