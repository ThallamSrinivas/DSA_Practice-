//single linked list : count number of nodes:
#include<stdio.h>
#include<stdlib.h>
void count_nodes();
struct node{
int data;
struct node *link;
};

int main()
{
    struct node *head = NULL;
  head = (struct node*)malloc(sizeof(struct node));
  head->data = 45;
  head->link = NULL;

struct node *current = (struct node*)malloc(sizeof(struct node));
current->data = 98;
current->link = NULL;
head->link = current;

current = (struct node*)malloc(sizeof(struct node));
current->data =10;
current->link = NULL;
head->link->link = current;

printf("%d  %d  %d",head->data, head->link->data, head->link->link->data);

count_nodes(head);
    return 0;
}

void count_nodes(struct node *ptr)
{
    int count =0;
    if(ptr ==NULL)
        printf("List is empty");

    while(ptr!=NULL)
    {
        count ++;
        ptr =ptr->link;
    }
printf("\n %d",count);
}

