//single linked list : Delete first node/last node:
#include<stdio.h>
#include<stdlib.h>
struct node* add_node();
struct node* delete_first_node();
void delete_last_node(head);
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

 // Delete first node
 head =delete_first_node(head);
 delete_last_node(head);
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
}
struct node* delete_first_node(struct node *head1)
{
    struct node *ptr;
    ptr = head1->link;
    free(head1);
    head1 =ptr;
    return head1;
};
void delete_last_node(struct node *head1)
{
    struct node *ptr;
    ptr =head1;
    int i, count =0;
    while(ptr->link!=NULL)
    {
       count++;
        ptr =ptr->link;
    }
    ptr =head1;
    for(i =1;i<=count-1;i++)
    {
        ptr =ptr->link;
    }
    struct node* ptr2 =ptr;
    ptr2=ptr2->link;
    free(ptr2);
    ptr2=NULL;
    ptr->link =NULL;

}
