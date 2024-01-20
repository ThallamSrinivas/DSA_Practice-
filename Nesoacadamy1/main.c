//check the validity of the expression stacks.
//infix expression to postfix expression using stacks

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
char infix[MAX], postfix[MAX];
char stack[MAX];
int top = -1;
push(char a)
{
    top++;
    stack[top]= a;
}

char pop()
{
    if(!isEmpty())
    {
    char temp = stack[top];
    top--;
    return temp;
    }
    else{
        exit(1);
    }

}

int precedense(char s)
{
     if(s=='+' || s=='-')
        return 1;
        else if(s=='*' || s=='/')
        return 2;
        else if(s=='^')
        return 3;
     else
       return 0;
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
print(char a[])
{
    puts(a);
}
infixtopostfix(char a[])
{
    int i,j=0;
    char temp;
for(i =0;i<strlen(a);i++)
{
switch(a[i])
{
case '(': push(a[i]); break;
case ')':
    while((temp = pop())!='(')
    {
        postfix[j++] =temp;
    }
    break;
  case '+':
  case '-':
  case '*':
  case '/':
   while(!isEmpty() && precedense(stack[top]) >=precedense(a[i]))
       {
       postfix[j++] = pop();
      }
     push(a[i]);
      break;
    default: postfix[j++]=a[i];  break;
}

}

while(!isEmpty())
{
       postfix[j++] = pop();

}
postfix[j] ='\0';
}
int main()
{
printf("enter a infix expression");
gets(infix);
//int temp = precedense('*');
//printf("%d",temp);
infixtopostfix(infix);
print(postfix);
    return 0;
}
