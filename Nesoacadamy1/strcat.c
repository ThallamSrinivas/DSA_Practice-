//strcat function
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    strcpy(str1,"Welcome to ");
    strcpy(str2,"Our acadamy");
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}
