//linked list implementation of stacks
//check if a given string is palindrome.

//Reverse a stack using two temp stacks
#include<stdio.h>
#include<stdlib.h>

struct node{
char data;
struct node *link;
};
struct node *top = NULL;
isEmpty()
{
    if(top == NULL)
    {
        return 1;
    }
    return 0;
}
int pop()
{
if(isEmpty())
{
    printf("Stack is underflow");
    exit(1);
}

struct node *temp =top;
int val = temp->data;
top = top->link;
free(temp);
temp = NULL;
return val;
}

push(int data)
{
      struct node *temp = (struct node*)malloc(sizeof(struct node));
    if(temp == NULL)
        {
        printf("stack is overflow");
        exit(1);
        }

    temp->data = data;
    temp->link = NULL;

    temp->link = top;
    top = temp;
}
print()
{
    struct node *temp = top;
    if(temp == NULL)
    {
        printf("stack is empty");
    }
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp= temp->link;
    }
}
void check_palindrome(char *s)
{
    int i =0;
while(s[i]!='X')
{
    push(s[i]);
    i++;
}
i++;
while(s[i])
{
if(isEmpty() || s[i]!=pop())
{
        printf("not palindrome1");
       exit(1);

    }
    i++;
}

if(isEmpty())
{
    printf("palindrome");
}
else{
    printf("not palindrome2");
}

}
int main()
{
    char *s[100];
printf("Enter the string");
scanf("%s",&s);
check_palindrome(s);
return 0;
}
