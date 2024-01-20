//linked list implementation of stacks
//check if a given string is palindrome.
//Reverse a stack using two temp stacks

#include<stdio.h>
#include<stdlib.h>

struct node{
char data;
struct node *link;
};
//struct node *top = NULL;
isEmpty(struct node *top)
{
    if(top == NULL)
    {
        return 1;
    }
    return 0;
}
int pop(struct node **top)
{
if(isEmpty(*top))
{
    printf("Stack is underflow");
    exit(1);
}

struct node *temp =*top;
int val = temp->data;
//top = top->link;
*top = temp->link;
free(temp);
temp = NULL;
return val;
}

void push(int data, struct node **top)
{
      struct node *temp = (struct node*)malloc(sizeof(struct node));
    if(temp == NULL)
        {
        printf("stack is overflow");
        exit(1);
        }
    temp->data = data;
    temp->link = NULL;

    temp->link = *top;
    *top = temp;

   // return top;
}
print(struct node *top)
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
    printf("\n");
}

int main()
{
    struct node *top = NULL, *top1 = NULL, *top2 = NULL;
   push(1,&top);
   push(2,&top);
   push(3,&top);
  print(top);

  while(top)
 push(pop(&top),&top1);

      print(top);
      print(top1);

      while(top1)
      push(pop(&top1),&top2);

      print(top1);
      print(top2);

      while(top2)
      push(pop(&top2),&top);

      print(top2);
      print(top);

  //reverse_stack()
return 0;
}
