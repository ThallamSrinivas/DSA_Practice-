//single linked list : Add a node at the end:
#include<stdio.h>
#include<stdlib.h>
void count_nodes();
void add_node();
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

//count_nodes(head);
  add_node(head,65);

printf(" \n %d  %d  %d %d",head->data, head->link->data, head->link->link->data,head->link->link->link->data);
    return 0;
}
void add_node(struct node *head, int n)
{
    struct node *temp,*ptr;
    temp =(struct node*)malloc(sizeof(struct node));
     temp->data = n;
     temp->link = NULL;
     ptr = head;
     while(ptr->link!=NULL)
     {
         ptr= ptr->link;
     };
 ptr->link = temp;
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

