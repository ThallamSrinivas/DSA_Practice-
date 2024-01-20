// strcopy function usage
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[6]="Hello";
    char str2[6];
    char str3[5];
    printf("%s \n",strcpy(str2,str1));
    printf("%s \n",str2);
    strncpy(str3,str1,sizeof(str3));
    str3[sizeof(str3)-1]='\0';
    printf("%s \n",str3);
    printf("%s",str3);
    return 0;
}
