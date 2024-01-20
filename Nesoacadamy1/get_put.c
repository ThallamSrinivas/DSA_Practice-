// intilizing string variables
#include<stdio.h>
int main()
{
char s[6]="Hello"; //can be modified
s[0]='M';
printf("%c \n",s[3]);


 char *ptr ="Hi Srinivas"; //string literal
 printf("%s \n",ptr);
 puts("Hi");
 puts(ptr);

 char a[20];
 printf("Enter a string");
  scanf("%s",a);//scanf("%19s",a); //gets(a);
 printf("%s",a);
 gets(a);
 printf("%s",a);
 return 0;
 }
