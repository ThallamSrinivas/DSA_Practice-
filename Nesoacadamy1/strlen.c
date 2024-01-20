//strlen function
#include<stdio.h>
#include<string.h>
int main()
{
    char *str1 = "Hello world";
    char str2[] = "Hello world";
    char str3[100] = "Hello world";

    printf("%d ",strlen(str1));
    printf("%d ",strlen(str2));
    printf("%d ",strlen(str3)); //caliculates length of string not the length of the array
    return 0;
}
