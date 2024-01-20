//linked list implementation of stacks
//Reverse a stack using two temp stacks
//check if a given string is palindrome.
#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
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

int main()
{
    int choice,data;
while(1)
{
    printf("\n");
    printf("case 1: pop \n");
    printf("case 2: push \n");
    printf("case 3: print \n");
    printf("case 4: quit \n");
    printf("enter the choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: pop();
                break;
        case 2:
            printf("Enter data to add");
            scanf("%d",&data);
            push(data);
            break;
        case 3: print();
                break;
        case 4:
            exit(1);
        default: printf("Enter valid choice");
        break;
    }
}

return 0;
}
