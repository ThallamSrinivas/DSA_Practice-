//single linked list : Deleting entire single linked list
#include<stdio.h>
#include<stdlib.h>
struct node* add_n_node();
struct node* delete_list();
struct node{
int data;
struct node *link;
};
int main()
{
   struct node *head =(struct node*)malloc(sizeof(struct node));
    head->data =45;
    head->link = NULL;
    struct node *cur_ptr =head;
    cur_ptr =add_n_node(cur_ptr,68);
    cur_ptr =add_n_node(cur_ptr,96);
    cur_ptr =add_n_node(cur_ptr,89);
    cur_ptr =add_n_node(cur_ptr,10);
    head =delete_list(head); //pos =3;

   if(head ==NULL)
   {
       printf("List is empty");
   }
    return 0;
}
struct node* add_n_node(struct node *head,int n)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = n;
    temp->link =NULL;
    head->link =temp;
    return temp;
}

struct node* delete_list(struct node *head)
{
    struct node* ptr;
    while(head!=NULL)
    {
      ptr = head;
      head =head->link;
      free(ptr);
    }
    return head;
}
