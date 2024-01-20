// prime factors of a given number in the decreasing order using stack
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int stack_array[MAX];
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
void push(int n)
{
    if(!isFull(stack_array))
    {
    top++;
       stack_array[top] =n;
    //printf("\n recent value of the stack is %d",stack_array[0]);
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
    //  printf("popped value is %d ",value);
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
prime_fact (int n)
{
    int i =2;
    while(n!=1)
    {
        if(n%i==0)
        {
            n=n/i;
        push(i);

        }
        else{
            i=i+1;
        }
    }
}
int main()
{
    int n;
    printf("Enter an integer");
    scanf("%d",&n);
    prime_fact(n);
    print();
     return 0;
}
