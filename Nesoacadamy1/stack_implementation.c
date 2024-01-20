// stack implementation array[0] as top element push(),pop(),top(),isEmpty(),isFull():
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
//int Max =5;
int stack_array[MAX]; //Declare as global so that it can be used through out.
int top = -1;

isEmpty(int stack_array[])
{
 if (top == -1)
 {
    return 1;

 }
return 0;
}
int isFull(int stack_array[])
{
 if (top == MAX-1)
 {
    return 1;
 }
 return 0;
}
void peek()
{
    printf("Top element is %d",stack_array[top]);
}
void push(int n)
{
    if(!isFull(stack_array))
    {
    top++;
       stack_array[top] =n;
    printf("\n recent value of the stack is %d",stack_array[0]);
    }
    else{
         printf("stack overflow");
    return;
    }
}
int pop()
{
    int value;
    if(!isEmpty(stack_array))
    {
      value = stack_array[top];
      printf("popped value is %d ",value);

      top--;
    }
    else{
    printf("stack underflow");
    exit(1);
    }

    return value;
}
void print()
{
    if(top == -1)
    {
        printf("stack is underflow");
        return;
    }
    for(int i=top;i>=0;i--)
    {
           printf("%d ",stack_array[i]);
    }
}
int main()
{
    int n,choice;

    while(1)
        {
        printf("Enter choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:  pop();
             // printf("Returned value is %d",value);
                break;
        case 2:  printf("Enter the number to add to stack");
                 scanf("%d",&n);
                 push(n);
                 break;

        case 3: print(); break;
        case 4: exit(1); break;
      default: printf("Enter valid choice");
        break;
    }
}
    return 0;
}
