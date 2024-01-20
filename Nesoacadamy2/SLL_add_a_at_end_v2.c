//single linked list : Add a node at the end:
#include<stdio.h>
#include<stdlib.h>
struct node* add_node();
struct node{
int data;
struct node *link;
};

int main()
{
    struct node *head,*ptr;
    head = (struct node*)malloc(sizeof(struct node));
head->data =45;
head->link = NULL;
ptr = head;
 ptr =add_node(ptr,68);
 ptr =add_node(ptr,96);
 ptr =add_node(ptr,89);
 ptr =add_node(ptr,10);

 ptr =head;
 while(ptr!=NULL)
 {
     printf("%d ",ptr->data);
     ptr = ptr->link;
 }
    return 0;
}
struct node* add_node(struct node* ptr,int n)
{
    struct node *temp=NULL;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = n;
    temp->link = NULL;

    ptr->link =temp;
    return temp;
};
