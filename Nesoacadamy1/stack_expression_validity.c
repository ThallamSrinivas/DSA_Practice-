//check the validity of the expression stacks.
//infix expression to postfix expression using stacks

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

void check_validity();
char expr[MAX];
char stack[MAX];
int top = -1;

push(char a)
{
    top++;
    stack[top]= a;
}

char pop()
{
    char temp = stack[top];
    top--;
    return temp;
}

int isEmpty()
{
    if(top == -1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

match(char a, char b)
{
    if(a =='(' && b== ')')
    {
        return 1;
    }
    else if(a =='[' && b== ']')
    {
        return 1;
    }
    else if(a =='{' && b== '}')
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
void check_validity(char expr[])
{
    int i; char temp;
for (i=0;i<strlen(expr);i++)
{
  if(expr[i]=='(' || expr[i]=='{' || expr[i]=='[')
        {
            push(expr[i]);
        }
 if(expr[i]==')' || expr[i]=='}' || expr[i]==']')
        {
            temp = pop();
            if(!match(temp, expr[i]))
            {
                printf("invalid expression mismatch of brackets");
                return;
            }
        }
}

        if(isEmpty())
        {
            printf("valid expression");

        }
        else{
            printf("invalid expression left brackets are more");
        }
}

int main()
{
    printf("Enter the expression");
    gets(expr);

        check_validity(expr);
        return 0;
}
