//Array of strings
#include<stdio.h>
#include<string.h>
int main()
{
    char *fruits[] ={"2 oranges", "2 Apples", "3 Bananas", "2 Pineapples"};
    if(strcmp(fruits[1],fruits[2])<0)
        printf("%s are lesser than %s", fruits[1],fruits[2]);
    else if(strcmp(fruits[1],fruits[2]>0))
        printf("%s are greater than %s",fruits[1],fruits[2]);
    return 0;
}
