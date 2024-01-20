//void pointer has to be typecasted before using it.
#include<stdio.h>
int main()
{
    int a =101;
    void *ptr =&a; //ptr =&a;
    printf("%d \n",*(int*)ptr);
    printf("%c",*(char*)ptr);
    //free(ptr); // dangle pointer
    //ptr = NULL; // null pointer
    //wild pointer is un intilized pointer.
    return 0;
}
