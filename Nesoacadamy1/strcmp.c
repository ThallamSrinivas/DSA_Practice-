//strcmp function
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100]="Hello";
    char str2[100]="Hellp";
    if(strcmp(str1,str2)<0)
        printf("s1 is less than s2");
    if(strcmp(str1,str2)==0)
        printf("s1 is equal to s2");
    return 0;
}
